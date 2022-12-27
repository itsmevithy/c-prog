#include<stdio.h>

int gcd(int a, int b);

int main(){
	int a, b;
	scanf("%d %d", &a, &b);
	printf("%d\n", gcd(a, b));
}

int gcd(int a, int b){
	int gcd=0;
	while (gcd==0){
		if (a==b)
			{gcd=a;
			break;}
		else if (a>b)
			a-=b;
		else if (b>a)
			b-=a;
		else if (a==0)
			gcd=b;
		else
			gcd=a;
	}
	return gcd;
}
