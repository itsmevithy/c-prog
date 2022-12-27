#include<stdio.h>
int main(){
	int n,a=0,i=0;
	printf("Enter 3 digit octal number: ");
	scanf("%d", &n);
	while(i<n){
		if ((a%10)==8||(a/10)==8||(a/100)==8||(a%10)==9||(a/10)==9||(a/100)==9)
			{a++;
			continue;}		
		a++;
		i++;
	}
	printf("%d\n",a);
}
