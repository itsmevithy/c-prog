#include<stdio.h>
#include<string.h>
void main(){
	char str1[100], str2[100];
	gets(str1); gets(str2);
	int i, a;
	for(i=0; str1[i]!='\0' && str1[i]==str2[i]; i++);
	a=str1[i]-str2[i];
	printf("%d\n", a);
	printf("%d\n", strcmp(str1, str2));
}
