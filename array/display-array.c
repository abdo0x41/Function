#include <stdio.h>

void main(void)
{
  int arr[5], i;

  // obtain array elements
  for(i = 0; i < 5; i++)
  {
    scanf("%d", &arr[i]);
  }// end for

  // display array
  for(i = 0; i < 5; i++)
  {
    printf("%d\t", arr[i]);
  }// end for

}
