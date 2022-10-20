// Write a program that will print the multiplication table( from 1 to 10) of user choice.

#include <stdio.h>
int main() {
  int num, i;
  printf("Enter an integer: ");
  scanf("%d", &num);
  for (i = 1; i <= 10; ++i) {
    printf("%d * %d = %d \n", num, i, num * i);
  }
  return 0;
}