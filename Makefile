EXE = kargen
OBJECTS = main.o convert.o lapok.o karakter.o
MODULES = gtk+-3.0 libxml-2.0
LIBS = $(shell pkg-config --libs $(MODULES)) -lm
LDFLAGS = -g -Wall
CFLAGS = $(shell pkg-config --cflags $(MODULES)) -g -Wall
RM = rm -f

all: $(OBJECTS)
	$(CC) -o $(EXE) $(LIBS) $(LDFLAGS) $(OBJECTS)

.c.o:
	$(CC) $(CFLAGS) -c -o $@ $<

clean:
	$(RM) $(OBJECTS) $(EXE)

.PHONY: all clean

