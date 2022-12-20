#include<stdio.h>
#include<string.h>
void main(){
	char str1[80], str2[80], x;
	int a, i;
	gets(str1);gets(str2);
	for(i=0; str1[i]!='\0'; i++)
		putchar(str1[i]);
	for(a=0; str2[a]!='\0'; a++, i++)
		str1[i]=str2[a];
	puts(str1);
	putchar('\n');
}
