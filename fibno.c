#include <stdio.h>

int main(){
	int p=0, q=1, r, n, a=2;
	printf("Enter number to calculate fib series: ");
	scanf("%d", &n);
	printf("%d, %d",p, q);
	while (a<n){
		r=p+q;
		printf(", %d", r);
		p=q, q=r, a++;
	}
	printf("\n");
}
