CC := g++
SRCDIR := src
BUILDDIR := build
TARGET := main.out
CFLAGS := -I include/

all: main

intruso: 
	$(CC) $(CFLAGS) -c $(SRCDIR)/intruso.cpp -o $(BUILDDIR)/intruso.out 

# Modifique a funcao main
main: intruso
	$(CC) $(CFLAGS) $(BUILDDIR)/*.out $(SRCDIR)/main.cpp -o main.out

clean:
	$(RM) -r $(BUILDDIR)/* $(TARGET)