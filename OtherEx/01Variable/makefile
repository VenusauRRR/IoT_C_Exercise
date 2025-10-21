CC = gcc
PROG = main.exe
SRC = main.c name.c environName.c hotel.c dataTypeBitSize.c courseLength.c
CFLAGS = -g
LIBS =

all: $(PROG)

$(PROG): $(SRC)
	$(CC) -o $@ $(CFLAGS) $(LDFLAGS) $(SRC) $(LIBS)

clean:
	rm -f $(PROG)

.PHONY: all clean
