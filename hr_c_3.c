#include<stdio.h>


int main() {
	int i, j, k;
  
  scanf("%d", &k);
	
  for (i = k; i >= 1; i--) {
	  for (j = k; j >= i; j--)
		  printf("%d ", j);
		for (j = 1; j < (i * 2) - 1; j++)
		  printf("%d ", i);
		for (j = i + 1; j <= k; j++)
      printf("%d ", j);
		printf("\n");
	}

	for (i = 2; i <= k; i++) {
		for (j = k; j >= i; j--)
      printf("%d ", j);
		for (j = 1; j < (i * 2) - 1; j++)
      printf("%d ", i);
		for (j = i + 1; j <= k; j++)
      printf("%d ",j);
		printf("\n");
	}

	return 0;
}
