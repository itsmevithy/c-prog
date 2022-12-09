#include<stdio.h>
int summ(int m, int n);
//int prodm(int m, int n);
//int add5(int m, int n);
int main(){
	int m, n, c;
	printf("Enter order of matrix A (m<space>n): ");
	scanf("%d %d", &m, &n);
	printf("%d %d", m, n);
//	printf("Order of b will be determined accordingly,\n Enter s for sum, m for multiply, a to add an integer: ");
//	scanf("%d", &c);
//	m--;
//	n--;
//	switch(c){
	
//		case 's':
//			summ(m,n); break;
//		case('m'):
//			prodm(m,n); break;
//		case('a'):
//			prod(m, n); break;
//		default:
//			printf("Enter valid choice!!"); break;
//	}
	summ(m, n);
}

int summ(int m, int n){
	int a,i,j, res[m][n], ara[m][n], arb[m][n];
	for (i=0; i<m; i++){
		for (j=0; j<n;j++){
			printf("Enter A[%d][%d]: ", i+1, j+1);
			scanf("%d", &a);
			ara[i][j]=a;
		}

	}
	for (i=0; i<m; i++){
		for (j=0; j<n;j++){
			printf("Enter B[%d][%d]: ", i+1, j+1);
			scanf("%d", &a);
			arb[i][j]=a;
		}

	}
	printf("The sum is, \n");
	for (i=0,j=0; i<m; i++){
		for (j=0; j<n;j++){
			res[i][j]=(arb[i][j])+(ara[i][j]);
			printf(" %d ", res[i][j]);
		}
		printf("\n");
	}
	
}

int prodm(int m, int n){
	int a,i,j, res[m][m], ara[m][n], arb[n][m];
	for (i=0; i<m; i++){
		for (j=0; j<n;j++){
			printf("Enter A[%d][%d]: ", i+1, j+1);
			scanf("%d", &a);
			ara[i][j]=a;
		}

	}
	for (i=0; i<n; i++){
		for (j=0; j<m;j++){
			printf("Enter B[%d][%d]: ", i+1, j+1);
			scanf("%d", &a);
			arb[i][j]=a;
		}

	}
	printf("The sum is, \n");
	for (i=0,j=0; i<m; i++){
		for (j=0; j<n;j++){
			res[i][j]=0;
			for (k=0; k<n; k++){
				res[i][j]+=ara[j][k]*arb[k][j]
			}
			printf(" %d ", res[i][j]);
		}
		printf("\n");
	}
	
}
