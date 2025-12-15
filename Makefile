TARGET = aarch64ray
OBJECT = main.o

all: $(TARGET)

$(OBJECT): ./src/main.s
	as ./src/main.s -o $(OBJECT)

$(TARGET): $(OBJECT)
	ld $(OBJECT) -o $(TARGET)

clean:
	rm -f $(OBJECT) $(TARGET)
	rm -f *.ppm
