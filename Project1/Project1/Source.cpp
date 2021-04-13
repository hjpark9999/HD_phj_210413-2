#include <stdio.h>
void main()
{
	int j = 2;
	int i = 1;
	int count=0;

		while (i <= 4) {
			count = 1;		
			while (count <= i) {
				printf("%d   ", j);
				j += 2;
				count++;
			}
			printf("\n");
			i++;
		}
		i = 1;
		j = 22;
		while (i <= 4) {
			count = 1;
			while (count <= i) {
				printf("%d   ", j);
				j += 2;
				count++;
			}
			printf("\n");
			i++;
		}
	fgetc(stdin);
}