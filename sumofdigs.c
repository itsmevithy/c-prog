#include<stdio.h>
int main(){
	int a, b=0, n;
	printf("Enter number: ");
	scanf("%d", &a);
	n=a;
	while(a>0){
		b+=(a%10);
		a/=10;
	}
	printf("%d", b);
}
