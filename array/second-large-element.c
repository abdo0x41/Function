#include <stdio.h>

void main(void)
{
  int arr[5], i, num, j;

  // obtain array elements from user.
  for(i = 0; i < 5; i++)
  {
    scanf("%d", &arr[i]);
  }

  // compare between array elements.
  for(i = 0; i < 5; i++)
  {
    for(j = 5; j > 0; j--)
    {
      if(arr[j] > arr[i])
      {
        num = arr[j];
      }
    }
  }

  printf("%d", num);

}// end main
