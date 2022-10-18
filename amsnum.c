#include <stdio.h>

int main(){
	int a, b, c, n, n1;
	printf("Enter 3 digit number: ");
	scanf("%d", &n);
	a=n/100, c=n%10, b=(((n%100)-c)/10);
	n1=(a*a*a)+(b*b*b)+(c*c*c);
	if (n==n1){
		printf("Armstrong number\n");
	}
	else{
		printf("Not an armstrong number\n");	
	}
}
