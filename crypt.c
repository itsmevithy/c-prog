#include<stdio.h>
#include<string.h>
void strrev(char *str){
	int i, l;
	char *start, *stop, ch;
	l=strlen(str);
	start=str;
	stop=str+l-1;
	for(i=0;i<(l-1)/2;i++){
		ch=*stop;
		*stop--=*start;
		*start++=ch;
	}
}
void strcopy(char *dest, char *source){
	while (*src) *dest++= *src++;
	*dest='\0';
}
void main(){
	int x, i, j, a, c;
	printf("Enter number of words: ");
	scanf("%d", &x);
	char code[x][100], temp[100];
	for (i=0; i<x; i++) {
		gets(code[i]);
		strrev(code[i]);
	}
	for (i=0; i<x; i++)
		for(j=0; j<(x-i-1); j++)
			if(code[j][0]>code[j+1][0]){
				strcopy(temp, code[j]);
				strcopy(code[j], code[j+1]);
				strcopy(code[j+1], temp);
			}
	for(i=0; i<x; i++){
		strrev(code[i]);
		for(j=0; j<100; j++)
			if(code[i][j]=='\0') { code[i][j-1]='\0'; break; }
		puts(code[i]);
	}
}
