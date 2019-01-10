NAME=browser
DEBUGFLAGS := --list --c-code-in-asm
CC=zcc
BUILDFLAGS=
INCFLAGS=
LDFLAGS=-lm
CCFLAGS=+zxn -vn -O3 -startup=1 -clib=new

all:
	$(CC) $(CCFLAGS) $(DEBUG) $(LDFLAGS) $(INCFLAGS) $(BUILDFLAGS) \
	-Cz"--clean --fullsize --main-fence 0xC000" \
	$(NAME).c -o$(NAME) -subtype=nex  -create-app
