#include <stdio.h>

void Strong_nums(int L_value, int H_value)
{
	int i = 1, q, rem, fact = 1, result = 0; 

	
	while(L_value <= H_value)
	{	
		q = L_value;
		while(q)
		{
			rem = q % 10;
			while(i <= rem)
			{
				fact *= i;
				i++; 
			}// end while.
			result += fact;
			fact = 1;
			i = 1;	
			q /= 10;
		}// end while	
		if(result == L_value)
		{
			printf("%d\t", result);
		}// end if
		result = 0;
		L_value++;
	}// end while
}// end Strong_nums

void main(void)
{
	int L_value, H_value;

	puts("Enter a range of numbers to check strong numbers (: ");
	printf("Set the Low value : ");
	scanf("%d", &L_value);
	printf("Set the High Value : ");
	scanf("%d", &H_value);

	Strong_nums(L_value, H_value);
}// end main.