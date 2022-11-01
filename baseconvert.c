#include<stdio.h>
#include<math.h>

/*long oct(long decno){
	long res=0, i=0;
	while (decno!=0){
		res+=(decno%10)*(pow(8,i));
		i++;
		decno/=10;		
	}
	i=1;
	return res;
}*/

long conv(long decno, long n){
	long res=0, temp, check;
	check=(decno%2);
	if (check==0){
		temp=1;
	}
	else if (check==1){
		temp=0;
	}
	while (decno>1){
		res=((decno)%(n));
		temp+=res;
		temp*=10;
		decno/=n;	
	}
	if (check==1){
		temp+=1;
	}
	return temp;
}

long main(){
	long num, base;
	printf("Enter number with base 10: ");
	scanf("%ld", &num);
	printf("Enter base (2 or 8): ");
	scanf("%ld", &base);
	if (base==8){
		printf("The octal equivalent of %ld is %ld\n", num, conv(num, base));	
	}
	else if (base==2){
		printf("The binary equivalent of %ld is %ld\n", num, conv(num, base));
	}
	else
		printf("Enter valid base!!!(2 or 8)\n");
}
