#include <stdio.h>

int main() {
  int n , sum = 0 , i = 0;
  while (1) {
	printf("Enter number : ");
    if (scanf("%d", &n) && n > 0) {
      sum += n;
      i++;
    } else {
      break; 
    }
  }
  
  printf("Sum: %d\n", sum);
  printf("Avg: %.2f\n", (float)sum / i);
}
