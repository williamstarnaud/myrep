#include<stdio.h>
#include<stdlib.h>

FILE *file= system("'$1'");

FILE *fp= fopen("'file'", "r");

void main (void) {
	printf(fp);
}
