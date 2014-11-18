#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

void main (int argc, char* argv[]) {
	FILE *file=fopen(argv[1], "r");
	char array[1000];
	char temp[1000];
	const char comma= ',';
	char *pt;
	float add=0;
	float divide=0;
	while(!feof(file)) {
		if (fgets(array, 1000, file) != NULL) {	
			pt= strtok(array, ",");
			while (pt != NULL) {
				if(atoi(pt)!=0) {
					add+=atoi(pt);
					divide++;
				} else {
					printf("%s", pt);
				};
				pt= strtok(NULL, ",");
			};
			if (divide!=0) {
				float result=(add)/(divide);
				float final= (ceilf(result*100))/100;
				printf(" %.2f\n", final);
				add=0;
				divide=0;
			};
		};
	};
	fclose(file);	
}

