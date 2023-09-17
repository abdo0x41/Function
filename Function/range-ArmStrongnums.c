#include <stdio.h>


void armstrong(int L_value, int H_value)
{	
	int digits = 0, cnt, q, rem, pow = 1, result = 0;

	while(L_value < H_value)
	{
		q = L_value;

		while(q != 0)
		{
			digits++;
			q /= 10;
		}// counter

		q = L_value;
		cnt = digits;

		while(q != 0)
		{
			rem = q % 10;
			while(cnt != 0)
			{
				pow *= rem;
				result += pow;
				cnt--;
			}

			q /= 10;
		}// end while.

		if(result == L_value)
		{
			printf("%d", result);
		}

		result = 0;

		L_value++;
	}

}// end armstrong
	
void main(void)
{	
	int L_value, H_value;
	
	printf("%s", "Enter the lowest value : ");
	scanf("%d", &L_value);
	printf("%s", "Enter the highest value: ");
	scanf("%d", &H_value);

	armstrong(L_value, H_value);

	

	
}// end main
