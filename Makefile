# Makefile
COMPILER = gcc
COMPILER_FLAGS = -o
SOURCE_FILES = src/main.c
TARGET = dist/guessing-game

build: src/main.c	
	$(COMPILER) $(COMPILER_FLAGS) $(TARGET) $(SOURCE_FILES)