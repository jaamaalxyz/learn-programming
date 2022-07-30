// Two numbers as input, find their minimum, maximum and average.
// Author: Md. Jamal Uddin
// Date: 28-Jul-2022

#include<stdio.h>

int main() {
  int a, b;
  scanf("%d %d", &a, &b);

  int max = a > b ? a : b;
  int min = a < b ? a : b;
  int avg = (a + b) / 2;

  printf("Maximum: %d\n", max);
  printf("Minimum: %d\n", min);
  printf("Average: %d\n", avg);

  return 0;
}