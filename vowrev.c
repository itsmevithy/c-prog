#include<stdio.h>
void rev(){
	char x=getchar();
	if (x!='\n'){ rev();
		if ((x=='a')||(x=='e')||(x=='i')||(x=='o')||(x=='u')){
			putchar(x);
		}
	}
}
int main(){
	rev();
}
