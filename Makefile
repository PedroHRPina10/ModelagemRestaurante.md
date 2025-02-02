CC := g++
CPP := gcc
CFLAGS := -Wall -fexceptions -g -Wsign-compare -fexceptions -std=c++11
LDFLAGS := -w -O -fpermissive -static
SRCDIR := .
BUILDDIR := obj
TARGET := bin/Debug/Restaurante.exe

SRCS := $(wildcard $(SRCDIR)/*.cpp)
OBJS := $(patsubst $(SRCDIR)/%.cpp,$(BUILDDIR)/%.o,$(SRCS))

$(TARGET): $(OBJS)
	$(CC) $(LDFLAGS) $^ -o $@

$(BUILDDIR)/%.o: $(SRCDIR)/%.cpp
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -rf $(BUILDDIR)/*.o $(TARGET)

clear:
	rmdir /Q /S $(wildcard $(BUILDDIR)/*.o $(TARGET))

.PHONY: cleans
