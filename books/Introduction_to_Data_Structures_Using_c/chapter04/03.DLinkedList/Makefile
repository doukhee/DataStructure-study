CC = gcc

SRCS = DLinkedList.c DLinkedListMain.c

C_EXTRAINCDIRS = DLinkedList.h

EXTRAINCDIRS = $(patsubst %,-I%, $(C_EXTRAINCDIRS))

BUILDDIR = buildDir

TARGET = DLinkedList

COBJS = $(addprefix $(BUILDDIR)/, $(SRCS:.c=.o))

all: clean createdirs build

createdirs:
	$(shell mkdir $(BUILDDIR))

build: $(COBJS)
	$(CC) -o $(BUILDDIR)/$(TARGET) $^

$(COBJS): $(BUILDDIR)/%.o : %.c
	$(CC) $(EXTRAINCDIRS) -o $@ -c $<

clean:
	rm -rf $(BUILDDIR)

.SUFFIXES: .c .o

.PHONNEY: clean createdirs build