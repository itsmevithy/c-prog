#include<stdio.h>
void dtb(long a, int b){
	b+=a%2;
	a/=2;
	if (a>0) dtb(a, 0);
	printf("%d", b);
}

int main(){
	long p;
	scanf("%ld", &p);
	dtb(p,0);
}
