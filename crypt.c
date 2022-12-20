#include<stdio.h>
#include<string.h>
void swapint(int a, int b);
void swapstr(char a[100], char b[100]);
void main(){
	char code[5][100]={"a2"," mf4", "stupid3", "hes1"}, txt[5][100];
	int num[5], i, j, a, c;
	for(i=0; i<5; i++){
		for(j=0; j<10; j++){
			strassn(txt[i][j], code[i][j]);
			if (code[i][j]=='\0'){
				num[i]=code[j-1];
				txt[i][j-1]='\0';}
		}
	}
	for(i=0; i<4; i++){
		for(j=0 ; j<(4-i-1); j++ ){
			if (num[j]>num[j+1])
				swapint(num[j], num[j+1]);
				swapstr(txt[j], txt[j+1]);
		}
	}
	for(i=0; i<5; i++) puts(txt[i]);
}

void swapint(int a, int b){
	int temp;
	temp=a;
	a=b;
	b=temp;
}

void swapstr(char a[100], char b[100]){
	char temp[100];
	strcpy(temp, a);
	strcpy(a, b);
	strcpy(b, temp);
}
