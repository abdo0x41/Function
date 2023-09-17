#include <stdio.h>

void isprime(int num)
{
	int i = 1, isprime, result = 0;

	while(i <= num)
	{
		if(num % i == 0)
		{
			result++;
		
		}//end if.
		
		i++;

	}// end while.
	
	printf("\"%d\" %s\n", num, (result <= 2)? ("Is Prime (:") : ("Is Not Prime ):"));

}// end isprime.

void isarmstrong(int num)
{
	int  q, rem, mul = 1, result = 0;

	q = num;
	int count = num;
	while(q)
	{
		rem = q % 10;
		while(count)
		{
			mul *= rem;
			count /= 10; // condition terminate.
		}// end while
		
		result += mul; 
		mul = 1;
		count = num;
		q /= 10;// condition terminate.

	}// end while

	printf("\"%d\" %s\n", num, (result == num)? ("Is ArmStrong (:") : ("Is Not ArmStrong ):"));
	

}// end isarmstrong
	
void isperfect(int num)
{	
	int perfect = 1, result = 0;

	while(perfect < num)
	{
		if((num % perfect) == 0)
		{
			result += perfect;
		}//end if
		perfect++;
	}//end while.

	printf("\"%d\" %s", num, (result == num)? ("Is Perfect B^") : ("Isn't perfect 8}"));
}// end isperfect

// Start the program.
void main(void)
{
	int num;
	printf("%s","Enter a number B) : ");
	scanf("%d", &num);

	isprime(num);
	isarmstrong(num);
	isperfect(num);

}// end main
