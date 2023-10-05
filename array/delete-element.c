#include <stdio.h>


void main(void)
{
  int size, index;

  printf("\t\t\t\t\t\xB1\xDB\xDB\xDB\xDB\xDB\xDB\xDB DELETE ARRAY ELEMENT \xDB\xDB\xDB\xDB\xDB\xDB\xDB\xB1");

  printf("\n\n%s\n\n\x10\x10\x10", "Enter Size of the array");
  scanf("%d", &size);
  int arr[size];

  // obtain Array elements from the user.
  puts("");
  for(int i = 0; i < size; i++)
  {
    printf("[%d] = ", i);
    scanf("%d", &arr[i]);
  }// end for

  printf("index number to Delete : ");
  scanf("%d", &index);

  for(int i = index; i < size - 1; i++)
  {
    arr[i] = arr[i + 1];
    // size--;
  }//end for

  // Display last edition
  for(int i = 0; i < size -1; i++)
  {
    printf("%d", arr[i]);
  }// end for

}// end main
