#include<stdio.h>
#include<stdlib.h>
void swap(int *a, int *b){
	int c=*a;
	*a=*b;
	*b=c;
}
void sort(int *x, int n){
	int i, j;
	printf("\nBefore sorting: ");
	for(i=0; i<n; i++) printf("%d, ", *(x+i));
	for(i=0; i<n; i++)
		for (j=0; j<(n-i-1); j++)
			if(*(x+j)>*(x+j+1)) swap(x+j, (x+j+1));
}
void main(){
	int *arr, n, i;
	printf("\nEnter no of elements: ");
	scanf("%d", &n);
	arr=(int*) malloc(sizeof(int)*n);
	for(i=0; i<n; i++) scanf("%d", &arr[i]);
	printf("\nsize %d", (int)sizeof(arr));
	sort(arr, n);
	printf("\nAfter sorting: ");
	for(i=0; i<n; i++) printf("%d, ", arr[i]);
}
