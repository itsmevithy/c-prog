#include <stdio.h>

int main(){
	int a, b, gcd=0, tempa, tempb;
	printf("Enter number 1: ");
	scanf("%d",&a);
	printf("Enter number 2: ");
	scanf("%d",&b);
	tempa=a;
	tempb=b;
	while (gcd==0){
		if (a==b){
			gcd=a;
		}
		else if (a>b){
			a-=b;
			continue;
		}
		else if (b>a){
			b-=a;
			continue;
		}
		else if (a==0){
			gcd=b;
			break;
		}
		else if (b==0){
			gcd=a;
			break;
		}
	}
	printf("The GCD of %d and %d is %d\n", tempa, tempb, gcd);

}
