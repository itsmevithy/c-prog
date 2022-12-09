#include<stdio.h>
int farr();
int main(){
	farr();
}

int farr(){
	char txt[50];
	char carr[50][50]={0};
	int a,i=0,j=0,count=0,c1=0,c2=0;
	scanf("%s", txt);
	for(a=1;txt[a-1]!='\0';a++){
		carr[i][j]=txt[a-1];
		if (txt[a-1]==txt[a]){
			j++;
			continue;
		}
		else{
			j=0;
			i++;
		}
	}
	for (i=0,j=0; carr[i][0]!='\0'; i++){
		for (j=0; carr[i][j]!='\0';j++);
			if (i%2==0) c1=j-1;
			else {
				c2=j-1;
				if (c1==c2) count++;
				
			}
	}
	printf("%d", count);
}
