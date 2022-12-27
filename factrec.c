#include<stdio.h>

int fact(int x);

int main(){
	int a;
	scanf("%d", &a);
	printf("%d\n", fact(a));
}

int fact(int x){
	if (x<=1)
		return 1;
	else
	return (x*fact(x-1));
}
