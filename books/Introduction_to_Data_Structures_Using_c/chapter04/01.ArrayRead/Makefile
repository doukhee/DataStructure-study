CC = gcc

SRCS = main.c

BUILDDIR = buildDir

TARGET = ArrayRead

COBJS = $(addprefix $(BUILDDIR)/, $(SRCS:.c=.o))

all: clean createdirs build

createdirs:
	$(shell mkdir $(BUILDDIR))

build: $(COBJS)
	$(CC) -o $(BUILDDIR)/$(TARGET) $^

$(COBJS): $(BUILDDIR)/%.o : %.c
	$(CC) -o $@ -c $<

clean:
	rm -rf $(BUILDDIR)

.SUFFIXES: .c .o

.PHONNEY: clean createdirs build