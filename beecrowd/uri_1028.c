#include <stdio.h>
 
int main() {
  int n, f1, f2;
  printf("Enter the value of n:\n");
  scanf("%d", &n);
  while (n > 0) {
    printf("Enter the value of f1: and f2:\n");
    scanf("%d %d", &f1, &f2);
    printf("f1 = %d\nf2 = %d\n", f1, f2);
    int l, s;
    if (f1 > f2) l = f1, s = f2;
    else s = f1, l = f2;
    while (l > 0) {
      int temp = l;
      l -= s;
      if (l <= 0) {
        printf("number: %d\n", temp);
        break;
      }
    }
    n -= 1;
  }

  return 0;
}