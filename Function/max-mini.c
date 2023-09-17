#include <stdio.h>

// int n1, n2;

// void comp(void)
// {
// 	if(n1 > n2)
// 	{
// 		printf("%d %s %d", n1, "is greater than", n2);
// 	}
// 	else if(n2 > n1)
// 	{
// 		printf("%d %s %d", n2, "is greater than", n1);
// 	}
// 	else
// 		{printf("%d %d %s", n1, n2, "are equals");}
// }// end comp



void main(void)
{
	int n1, n2;

	printf("%s", "Enter Two numbers : ");
	scanf("%d %d", &n1, &n2);
	
	comp(n1, n2);
}// end main.



void comp(int n1, int n2)
{
	if(n1 > n2)
	{
		printf("%d %s %d", n1, "is greater than", n2);
	}
	else if(n2 > n1)
	{
		printf("%d %s %d", n2, "is greater than", n1);
	}
	else
		{printf("%d %d %s", n1, n2, "are equals");}

	return;
}// end comp
