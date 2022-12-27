#include<stdio.h>
int gcd(int a, int b){
	if (b!=0) return gcd(b, a%b);
	else return a;
}
void check(int x){
	if ((x==2)||(x==3)||(x==5)||(x==7)) printf("PRIME\n");
	else if ((gcd(2,x)==1)&&(gcd(3,x)==1)&&(gcd(5,x)==1)&&(gcd(7,x)==1)) printf("PRIME\n");
	else printf("NON PRIME\n");
}
int main(){
	int k;
	scanf("%d", &k);
	check(k);
}
