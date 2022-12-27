#include<stdio.h>

int main(){
	int a, b, c, g;
	printf("Enter 3 numbers separated by spaces: ");
	scanf("%d %d %d", &a, &b, &c);
	if ((a>b) && (a>c))
		g=a;
	else if ((b>a) && (b>c))
		g=b;
	else 
		g=c;
	printf("The greatest number is %d\n",g);
}
