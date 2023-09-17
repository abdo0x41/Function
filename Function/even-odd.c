#include <stdio.h>

// int num;

// void even_odd(void)
// {
// 	if(num & 1)
// 	{
// 		printf("Odd");
// 	}// end if.
// 	else
// 	{
// 		printf("EVEN");
// 	}// end else.
// }// end.


void even_odd(int num)
{
	 printf("%s", ((num & 1 )? ("Odd") : ("Even")));
}// end.


// int even_odd(int num)
// {
// 	return printf("%s", ((num & 1 )? ("Odd") : ("Even")));
// }// end.


// int even_odd(void)
// {
// 	return printf("%s", ((num & 1 )? ("Odd") : ("Even")));
// }// end.

void main(void)
{
	int num;
	printf("%s", "Enter a number : ");
	scanf("%d", &num);

	even_odd(num);

}// end main.