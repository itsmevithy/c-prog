#include<stdio.h>
#include<string.h>
void sort(char a[100]){
	int i, j, l;
	char t;
	printf("Before sort: %s ", a);
	for(l=0;a[l]!='\0';l++);
	for (i=0; i<l; i++)
		for(j=0; j<(l-i-1); j++)
			if (a[j]>a[j+1]){
				t=(a[j]);
				a[j]=a[j+1];
				a[j+1]=t;
			}
	printf("After sort: %s ", a);
}
void check(char x[100], char y[100]){
	int i, j, chk;
	for (i=0; (y[i]!='\0'); i++){
		if(x[i]!=y[i]){
			chk=1;
			break;
		}
	}
	if (chk==1) printf("not an ANAGRAM\n");
	else printf("ANAGRAM");
}
void main(){
	char a[100], b[100];
	scanf("%s %s", a, b);
	sort(a);sort(b);
	check(a, b);
}
