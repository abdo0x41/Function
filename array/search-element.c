#include <stdio.h>


void main(void)
{
  int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0} ;

  int index,
      ex; // exist number.
  printf("Enter a number to search if number is exist or not :\x10\x10");
  scanf("%d", &index);

  for(int i=0; i < 10; i++)
  {
      if(index == arr[i])
      {
        ex = arr[i];
      }
  }

  if(index == ex)
  {
    printf("%d Exist :) ", ex);
  }
  else{
    puts("Isn't Exist :( ");
  }
}// end main.
