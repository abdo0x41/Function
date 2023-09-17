#include <stdio.h>

void prime_nums(int L_value, int H_value)
{	
	int i = 1, count = 0; 

	while(L_value <= H_value)
	{
		while(i <= L_value)
		{
			if(L_value % i == 0)
				{count++;}
			i++;
		}// end while.
	
		if(count == 2)
			{printf("%d\t", L_value);}
		
		i = 1;
		count = 0;
		L_value++;
	}//end while
}// end prime_nums


void main(void)
{

	int L_value, H_value;

	printf("%s", "Enter Two values to check prime numbers between them : ");
	scanf("%d %d", &L_value, &H_value);

	prime_nums(L_value, H_value);

}