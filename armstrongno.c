#include<stdio.h>
#include<math.h>
int length(int num){
	int len=0;
	for(;num>0;len++)
	num/=10;
	return len;
}

int check(int num, int len){
	int a, res=0;
	for(a=1;a>0;){
		a=num%10;
		num/=10;
		res+=(int)pow(a, len);
	}
	return res;
}

int main(){
	int num, res;
	printf("Enter number: ");
	scanf("%d", &num);
	res=check(num, length(num));
	if (res==num)
		printf("YES, narcissistic number\n");
	else
		printf("NO, not a narcissistic number\n");
}
