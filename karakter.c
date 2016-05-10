#include <gtk/gtk.h>
#include <libxml/parser.h>
#include <libxml/tree.h>
#include <string.h>

static void
print_element_names(xmlNode *root, xmlNode * a_node)
{
    xmlNode *cur_node = NULL;

    for (cur_node = a_node; cur_node; cur_node = cur_node->next)
	{
        if (cur_node->type == XML_ELEMENT_NODE)
		{
			gchar *path;
			xmlNode *a;
			gint len = 1;
			xmlNode *last, *prev;

			for (a = cur_node; a; a = a->parent)
				if (a->name != NULL)
					len += 1 + strlen((gchar *)a->name);

			path = g_malloc(len);
			memset(path, 0, len);

			last = prev = root;

			while (last != cur_node)
				for (a = cur_node; a != root->parent; a = a->parent)
				{
					if (last == a)
					{
						strcat(path, "/");
						strcat(path, (gchar *)a->name);
						last = prev;
					}
					prev = a;
				}
			strcat(path, "/");
			strcat(path, (gchar *)cur_node->name);

			printf("len: %d; path: %s\n", len, path);
			//printf("node type: Element, name: %s, parent: %s\n", cur_node->name, cur_node->parent->name);
		}

        print_element_names(root, cur_node->children);
    }
}

void
karakter_betoltes(gchar *filenev)
{
	xmlDocPtr doc;
	xmlNode *root;

	doc = xmlReadFile(filenev, "UTF-8", 0);

	root = xmlDocGetRootElement(doc);
	print_element_names(root, root);

	xmlFreeDoc(doc);
}

