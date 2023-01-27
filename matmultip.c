#include<stdio.h>
void readmat(int m, int n, int *mat){
	int i, j;
	for(i=0;i<m;i++)
		for(j=0; j<n; j++, mat++)
			scanf("%d", mat);
}
void multip(int m, int n, int a[m][n], int b[n][m], int c[n][n]){
	int i, j, k, sum;
	for(i=0; i<m; i++){
		for(j=0; j<n; j++){
			sum=0;
			for(k=0; k<n; k++)
				sum+=(*(*(a+i)+k))*(*(*(b+k)+j));
			*(*(c+i)+j)=sum;
		}
	}
}
void main(){
	int m, n, i, j;
	printf("Enter m and n: ");
	scanf("%d %d", &m, &n);
	int a[m][n], b[n][m], c[n][n];	
	readmat(m, n, &a[0][0]);
	readmat(n, m, &b[0][0]);
	multip(m, n, a, b, c);
	for(i=0; i<n; i++){
		for(j=0; j<n; j++)
			printf("%d ", c[i][j]);
		printf("\n");}
}
