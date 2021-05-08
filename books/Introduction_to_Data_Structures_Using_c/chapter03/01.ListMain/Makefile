CC = gcc

SRCS = List.c ListMain.c

EXTRAINCDIRS = List.h

BUILDDIR = buildDir

TARGERT = ListMain

COBJS = $(addprefix $(BUILDDIR)/, $(SRCS:.c=.o))

CINCLUDE = $(patsubst %,-I%,$(EXTRAINCDIRS))

all: clean createdirs build

createdirs:
	$(shell mkdir $(BUILDDIR))

build: $(COBJS)
	$(CC) -o  $(BUILDDIR)/$(TARGERT) $^

$(COBJS): $(BUILDDIR)/%.o : %.c
	$(CC) $(CINCLUDE) -o $@ -c $<


clean:
	rm -rf $(BUILDDIR)

.SUFFIXES: .c .o


.PHONNEY: clean createdirse build