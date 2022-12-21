#include<stdio.h>
#include<string.h>

char strrev(char str[10]){
    int i = strlen(str) - 1, j = 0;
    char ch;
    while (i > j)
    {
        ch = str[i];
        str[i] = str[j];
        str[j] = ch;
        i--;
        j++;
    }
}

void main(){
	int x;
	printf("Enter number of strings: ");
	scanf("%d", &x);
	char code[x][100], temp[100];
	int num[5], i, j, a, c;

	printf("Note: ENTER CHARACTER WITHOUT NUMBERS TO STOP READING\n");

	for (i=0;(i<x)&&(code[i]!=""); i++) scanf("%s", code[i]);

	for (i=0; i<x; i++) printf("%s ", code[i]);

	for (i=0; i<x; i++) strrev(code[i]);

	for (i=0; i<(x-1); i++){
		for (j=0; j<(x-i-2); j++){
			if (code[j][0]>code[j+1][0]){
				strcpy(temp, code[j]);
				strcpy(code[j], code[j+1]);
				strcpy(code[j+1], temp);
			}
		}
	}

	for (i=0; i<5; i++) strrev(code[i]);
				
	for(i=0; i<5; i++){
		for(j=0; j<10; j++){
			if (code[i][j]=='\0'){
				code[i][j-1]='\0';}
		}
	}

	for(i=0; i<5; i++) printf("%s ",code[i]);
}

