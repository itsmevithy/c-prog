#include<stdio.h>

int main()
{
	int a, b, c;
	printf("Enter sides of a triangle separated by spaces\n");
	scanf("%d %d %d", &a, &b, &c);
	if ((a==b) && (b==c))
		printf("Equilateral triangle\n");
	else if ((a==b) && (b!=c))
		printf("Isoceles triangle\n");
	else if ((a==c) && (c!=b))
		printf("Isoceles triangle\n");
	else if ((b==c) && (c!=a))
		printf("Isoceles triangle\n");	
	else 
		printf("Scalane triangle\n");	
}
