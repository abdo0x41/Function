// Write a program to count frequancy of elements of an array.

#include <stdio.h>
#include <stdlib.h>

void main(void)
{
  int size,
      frq = 0;

      printf("\t\t\t\t\t\xB1\xDB\xDB\xDB\xDB\xDB\xDB\xDB FREQUANCY OF ARRAY ELEMENTS \xDB\xDB\xDB\xDB\xDB\xDB\xDB\xB1");

      // obtain size of array.
      printf("\n\nEnter array size\n\x10\x10\x10 ");
      scanf("%d", &size);

      int arr[size];
      // obtain array elements from the user.
      for(int i = 0; i < size; i++)
      {
        printf("[%d]", i);
        scanf("%d", &arr[i]);
      }// end for.

      // Clear Screan
      system("cls");
      // Display array elements
printf("{");
      for(int i = 0; i < size; i++)
      {
        printf("%d, ", arr[i]);
      }
printf("}\n\n");

      // check frequancy elements
      for(int i = 0; i < size; i++)
      {
        for(int j = i + 1; j < size; j++)
        {
          if(arr[i] == arr[j])
          {
            frq++;
            frq[j] = 0; // don't count the same element again.
          }
        }
        printf("frequancy of %d = %d\n", arr[i], frq);
        frq = 0;
      }

}// end main.
