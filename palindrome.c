#include<stdio.h>
void check(char a[100]){
	int i, l, chk;
	for(l=0; a[l]!='\0';l++);
	for(i=0; i<l; i++){
		printf("%c %c ", a[i], a[l-1-i]);
		if (a[i]!=a[l-1-i]){
			chk=1;
			break;
		}
	}
	if (chk==1) printf("NOT PALINDROME\n");
	else printf("PALINDROME");
}
void main(){
	char a[100];
	scanf("%s", a);
	check(a);
}
