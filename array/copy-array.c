#include <stdio.h>

void main(void)
{
  int arr1[5] = {5, 9, 3, 7, 1}, arr2[5];
  for(int i = 0; i < 5; i++)
  {
    arr2[i] = arr1[i];
  }

  // Display arrays
  puts("\xB3\xDB\xDB\xDB\xDB\xDB Original Array \xDB\xDB\xDB\xDB\xDB\xB3");
  puts("");
  for(int i = 0; i < 5; i++)
  {
    printf("{ %d }\t", arr1[i]);
  }
  puts("\n");
  puts("\xB3\xDB\xDB\xDB\xDB\xDB Copied Array \xDB\xDB\xDB\xDB\xDB\xB3");
  puts("");
  for(int i = 0; i < 5; i++)
  {
    printf("{ %d }\t", arr2[i]);
  }
}
