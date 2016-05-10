#include <gtk/gtk.h>
#include <string.h>
#include <iconv.h>
#include <errno.h>

gint
convert_string(char *from_string, char **to_string)
{
	char *src = g_strdup(from_string);
	int src_len = strlen(src);
	char *outbuf = NULL;
	int outlen = src_len;
	char *final = NULL;
	char *out_ptr = NULL;

	if (src && src_len)
	{
		iconv_t ic = iconv_open("UTF-8", "ISO-8859-2");
		unsigned int inlenleft = src_len;
		char *src_ptr = (char *)src;
		unsigned int outlenleft = src_len;

		if (ic != (iconv_t)-1)
		{
			size_t st;

			outbuf = (char *)g_malloc(outlen + 1);

			if (outbuf)
			{
				out_ptr = (char *)outbuf;

				while (inlenleft)
				{
					st = iconv(ic, &src_ptr, &inlenleft, &out_ptr, &outlenleft);

					if (st == -1)
					{
						if (errno == E2BIG)
						{
							int diff = out_ptr - outbuf;

							outlen += inlenleft;
							outlenleft += inlenleft;
							outbuf = (char *)g_realloc(outbuf, outlen + 1);
							if (!outbuf)
								return -1;
							out_ptr = outbuf + diff;
						}
						else
						{
							g_free(outbuf);
							outbuf = NULL;
							return -1;
						}
					}
				}
			}
		}
	}
	final = g_malloc((out_ptr - outbuf) + 1);
	memset(final, 0, (out_ptr - outbuf) + 1);
	strncpy(final, outbuf, (out_ptr - outbuf));
	g_free(outbuf);

	if (to_string)
		*to_string = final;


	return 0;
}

