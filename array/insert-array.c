#include <stdio.h>

void main(void)
 {
  int arr[5] = {3, 6, 9, 12, 15};

  int index, num;

  scanf("%d %d", &index, &num);
  arr[index] = num;

  for(int i = 0; i < 5; i++)
  {
    printf("%d\t", arr[i]);
  }

}
