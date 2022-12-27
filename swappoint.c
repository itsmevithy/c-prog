#include<stdio.h>
void swap(int *p, int *q);
int main(){
	int a, b, *p=&a, *q=&b;
	printf("Enter a and b: ");
	scanf("%d %d", &a, &b);
	swap(p, q);
	printf("\n a and b: %d %d\n", a, b);
}

void swap(int *p, int *q){
	int temp;
	temp=*p;
	*p=*q;
	*q=temp;
}
