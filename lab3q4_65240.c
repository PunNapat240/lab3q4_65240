#include <stdio.h> 
#include <stdbool.h>
int main() {
	int sum = 0;
	int count = 0;
	while(true) {
		int n;
		printf("enter a number : ");
		scanf("%d", &n);
		if(n < 1) break;
		sum += n;
		count++;
	}
	printf("sum = %d\nAverage = %f\n", sum, (float)sum/(float)count); 
	return 0;
}

