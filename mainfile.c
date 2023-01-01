#include <stdio.h>
int add(int, int);
int sub(int, int);
int pro(int, int);
int main(void) {
  printf("Enter Two number x and y :\n");
  int x, y, (*ar[4])(int, int), result, choice;
  scanf("%d %d", &x, &y);
  printf("enter your choice\n0.for Add\n1.for subtracting\n2.for Multiplication\n");
  scanf("%d", &choice);
  if(choice>2)
  {
    printf("You entered worng choice");
  }
  else
  {
  ar[0] = add;
  ar[1] = sub;
  ar[2] = pro;
  result = ar[choice](x, y);
  printf("Output === %d",result);
  }
  return 0;
}
int add(int x, int y) { return (x + y); }
int sub(int x, int y) { return (x - y); }
int pro(int x, int y) { return (x * y); }
