libmy.a: obj1.o obj2.o
	ar r $@ $^
obj1.o: obj1.c
	gcc -c $^
obj2.o: obj2.c
	gcc -c $^
clean:
	rm -f libmy.a *.o
