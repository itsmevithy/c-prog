#include<stdio.h>
void write(int x, int y, int arr[x][y]);
void display(int x, int y, int a[x][y]);
void summ(int x, int ara[x][x], int arb[x][x], int res[x][x]);
int main(){
	int p, q;
	scanf("%d %d", &p, &q);
	int a[p][q], b[q][p], c[p][p];
	write(p, q, a);
	write(q, p, b);
	display(p, q, a);putchar('\n');
	display(q, p, b);putchar('\n');
	summ(p, a, b, c);
	display(p, q, c);putchar('\n');
}

void write(int x, int y, int arr[x][y]){
	int i, j;
	for (i=0;i<x;i++){
		for(j=0;j<y;j++)
			scanf("%d", &arr[i][j]);
	}
}

void display (int x, int y, int a[x][y]){
	int i, j;
	for(i=0; i<x; i++){
		for(j=0; j<y; j++){
			printf(" %d ", a[i][j]);
		}
	putchar('\n'); 
	}
}

void summ(int x, int ara[x][x], int arb[x][x], int res[x][x]){
	int i, j;
	for (i=0; i<x; i++){
		for (j=0; j<x; j++){
			res[i][j]=ara[i][j]+arb[i][j];
		}
	}
}
