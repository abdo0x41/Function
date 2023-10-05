#include <stdio.h>

void main(void)
{
  int arr[5], sum, i;

  for(i = 0; i < 5; i++)
  {
    scanf("%d", &arr[i]);
    sum += arr[i];
  }// end for

  printf("Sum of array = %d", sum);
}// end main
