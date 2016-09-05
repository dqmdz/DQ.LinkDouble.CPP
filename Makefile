CXX = g++

CXXFLAGS =	-O2 -g -Wall -fmessage-length=0

OBJS = main.o element.o list.o node.o

LIBS =

TARGET = listDouble

$(TARGET):	$(OBJS)
	$(CXX) -o $(TARGET) $(OBJS) $(LIBS)

all:	$(TARGET)

clean:
	rm -f $(OBJS) $(TARGET)
