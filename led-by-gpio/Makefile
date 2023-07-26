CC := gcc
CFLAGS := -Wall -Wextra -O2
LIBS := -lgpiod
SRC := led.c
TARGET := led

.PHONY: all clean

all: $(TARGET)

$(TARGET): $(SRC)
	$(CC) $(CFLAGS) -o $@ $< $(LIBS)
clean: 
	$(RM) $(TARGET)
