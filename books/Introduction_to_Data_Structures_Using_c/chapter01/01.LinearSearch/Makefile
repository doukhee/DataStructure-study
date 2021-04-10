# compiler using gcc
CC = gcc
# source
SRCS = linearsearch.c
# building exe file name
TARGET = LinearSearch
# build folder
BUILDDIR = buildDir
# object file build path setting
COBJS = $(addprefix $(BUILDDIR)/, $(SRCS:.c=.o))
# make command com doing
all: clean createdirs build

# make build folder
createdirs:
	$(shell mkdir $(BUILDDIR))

# make executation file make
build: $(COBJS)
	$(CC) -o $(BUILDDIR)/$(TARGET) $^

# make object file
$(COBJS): $(BUILDDIR)/%.o : %.c
	$(CC) -o $@ -c $<

# build folder delete
clean:
	rm -rf $(BUILDDIR)

# extention setting
.SUFFIXES: .c .o