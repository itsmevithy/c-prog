#include<stdio.h>
void dth(long a, int b){
	b+=a%16;
	a/=16;
	if (a>0) dth(a, 0);
	switch(b){
	case 10: printf("a"); break; 
	case 11: printf("b"); break;
	case 12: printf("c"); break;
	case 13: printf("d"); break;
	case 14: printf("e"); break;
	case 15: printf("f"); break;
	default: printf("%d", b); break;
	}
}

int main(){
	long p;
	scanf("%ld", &p);
	dth(p,0);
}
