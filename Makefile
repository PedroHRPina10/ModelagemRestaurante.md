CC := g++
CPP := gcc
CFLAGS := -Wall -fexceptions -g -Wsign-compare
LDFLAGS := -w -O -fpermissive -std=c++11
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

cls:
	del /Q /S $(BUILDDIR)/*.o $(TARGET)

.PHONY: cleans
