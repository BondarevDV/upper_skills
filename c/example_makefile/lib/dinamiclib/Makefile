libmy.so: obj1.o obj2.o
	gcc -shared -o libmy.so $^


obj1.o: obj1.c
	gcc -fPIC -c $^ 
obj2.o: obj2.c
	gcc -fPIC -c $^ 


clean:
	rm -f libmy.so *.o


