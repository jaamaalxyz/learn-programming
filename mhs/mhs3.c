// Given n as input. Then you have to take n numbers more. Find their minimum, maximum and average.
// Author: Md. Jamal Uddin
// Date: 28-Jul-2022

#include<stdio.h>

int main() {
  int n, i = 0, j = 0;
  scanf("%d", &n);

  int arr[100];

  while (n > 0)
  {
    scanf("%d", &arr[i]);
    i += 1;
    n -= 1;
  }

  int max = 0;
  int min = 0;
  int sum = 0;

  for (int j = 0; j < n; j++) {
    if (arr[j] > max) max = arr[j];
    if (arr[j] < min) min = arr[j];
    sum += arr[j];
  }

  float avg = sum / n;
  
  printf("Maximum: %d\n", max);
  printf("Minimum: %d\n", min);
  printf("Average: %.2f\n", avg);

  return 0;
}
