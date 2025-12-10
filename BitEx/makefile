CC = gcc
PROG = bit.exe
SRC = bit.c
CFLAGS = -g
LIBS =

all: $(PROG)

$(PROG): $(SRC)
	$(CC) -o $@ $(CFLAGS) $(LDFLAGS) $(SRC) $(LIBS)

clean:
	rm -f $(PROG)

.PHONY: all clean
