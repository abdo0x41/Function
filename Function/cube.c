#include <stdio.h>

int i = 0, cub = 1;

void cube(int n)
{
	while(i != 3)
	{
		cub *= n;
		i++;
	}// end while

	printf("the cube of %d = %d\n", n, cub);
}

void main(void)
{	
	puts("This program is calculating the cube of a number.\n");
	int n;
	printf("%s", "Enter a number : ");
	scanf("%d", &n);

	cube(n);

}