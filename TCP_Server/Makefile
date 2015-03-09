CC		= gcc
PROG	= tcpserver
# Where are include files kept
INCLUDE	=
# Options for release
CFLAGS	= -Wall
LIB		=
SOBJ	=
## Main
all: clean $(PROG)
$(PROG): $(SOBJ)
	$(CC) $(INCLUDE) $(CFLAGS) -o $(PROG) $(PROG).c $(SOBJ)
	$(CLIB) $(LIB)
## Compile modue
# .c.o:
#	$(CC) $(INCLUDE) #(CFLAGS) -c -o $@ $<

## Clear Module
clean:
	rm -f *.o $(PROG)
reall: clean all
