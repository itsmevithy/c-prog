#include <stdio.h>
#include <math.h>

int main(){
	float a, b, c, d, p, q;
	printf("Enter coefficient of,\n");
	printf("x^2: ");
	scanf("%f", &a);
	printf("x: ");	
	scanf("%f", &b);
	printf("coefficient: ");
	scanf("%f", &c);
	d= pow(b, 2)-(4*a*c);
	if (d==0){
		p=(b/(2*a));
		q=p;
		printf("Roots are equal\n");
		printf("The roots are %f and %f\n", p, q);
	}
	else if(d>0){
		p=(-b+sqrt(d))/(2*a);
		q=(-b-sqrt(d))/(2*a);
		printf("The roots are %f and %f\n", p, q);
	}
	else if(d<0){
		printf("Roots are imaginary\n");
		p=0, q=0;
	}
	printf("%f %f %f",d,p,q);
	
}
