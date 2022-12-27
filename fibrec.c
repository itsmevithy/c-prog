#include<stdio.h>
int fib(int a, int b, int n, int i);

int main(){
	int a;
	scanf("%d", &a);
	printf("0, 1, ");
	fib(0, 1, a, 1);
}

int fib(int a, int b, int n, int i){
	int y;
	y=a+b; i++;
	printf("%d, ", y);
	if (i<=n) fib(b, y, n, i);
}
