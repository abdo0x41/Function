#include <stdio.h>

int max_of_four(int a, int b, int c, int d)
{
    
    return (a > b ? (a > c ? (a > d ? (a) : (d)): (c > d ? (c) : (d)) : (b > c ?(b > d ? (b) : (d)) : (c > d ? (c) : (d)))));
    
}// end max_of_four.

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
     
    printf("%d", max_of_four(a, b, c, d));
    
    return 0;
}