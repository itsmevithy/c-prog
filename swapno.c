#include <stdio.h>

int main(){
	int a, b, temp;
	printf("Enter number 1: ");
	scanf("%d", &a);
	printf("Enter number 2: ");
	scanf("%d", &b);
        printf("Number before swapping: %d %d\n", a, b);
	temp=a, a=b, b=temp;
	printf("Numbers after swapping: %d %d\n", a, b);
}
