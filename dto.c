#include<stdio.h>
void dto(long a, int b){
	b+=a%8;
	a/=8;
	if (a>0) dto(a, 0);
	printf("%d", b);
}

int main(){
	long p;
	scanf("%ld", &p);
	dto(p,0);
}
