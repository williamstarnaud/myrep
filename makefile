ExperimentalAverage: q1.o stdio.o stdlib.o string.o math.o
	gcc -o -g -lm ExperimentalAverage q1.o stdio.o stdlib.o string.o math.o

q1.o: q1.c stdio.h stdlib.h string.h math.h
	gcc -c -g q1.c -lm
stdio.o: stdio.c stdio.h
	gcc -c -g stdio.c
stdlib.o: stdlib.c stdlib.h
	gcc -c -g stdlib.c
string.o: string.c string.h
	gcc -c -g string.c
math.o: math.c math.h
	gcc -c -g math.c
clean:
	rm -f q1.o stdio.o stdlib.o string.o math.o


