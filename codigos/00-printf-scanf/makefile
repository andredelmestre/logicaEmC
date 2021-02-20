TARGET = prog

$(TARGET): main.o
	gcc $^ -o $@

main.o: main.c
	gcc -c $< -o $@

clean:
	rm -f *.o *.a $(TARGET)