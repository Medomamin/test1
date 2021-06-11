#include <stdio.h>
#include <stdlib.h>
void swap1(int*,int*);

int main()
{
  int x, y;
  //printf("Enter First number:\n");
  scanf("%d",&x);
  //printf("Enter second number:\n");
  scanf("%d",&y);
  printf("Before swapping:\n");
  printf("x = %d\ty = %d\n", x, y);
  swap1(&x,&y);
  printf("After swapping:\n");
  printf("x = %d\ty = %d\n", x, y);
  return 0;
}
void swap1(int*x,int*y)
{
  *x=(*x)+(*y);
  *y=(*x)-(*y);
  *x=(*x)-(*y);
}
