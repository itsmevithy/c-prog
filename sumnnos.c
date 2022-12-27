#include<stdio.h>
int main(){
	int a,b,n;
	scanf("%d",&a);
	n=a;
	for(b=0;a>0;a--)
		b+=a;
	printf("Sum untill %d is %d",n , b );
}
