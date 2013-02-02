OBJS = Object.o test.o Int.o
TARGET = test
CC ?= tcc
AR ?= ar
CFLAGS += -O
CFLAGS += -Wall

.SUFFIXES: .c .o

all :	$(TARGET)

$(TARGET)   :	$(OBJS)
		$(CC) -o $(TARGET) $(OBJS)

.c .o	:   $<
	    $(CC) -c $< $(CFRAGS)

clean   :   
	    rm -f $(OBJS) $(TARGET)

