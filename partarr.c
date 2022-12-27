#include<stdio.h>
void main(){
	int n;
	printf("Enter no of elements: ");
	scanf("%d",&n);

	printf("\nFill array: ");
	int i,y[n],a;
	for (i=0; i<n; i++, scanf("%d",&y[i]));

	printf("Before partition: ");
	for (i=0;i<n;i++,printf("%d,",y[i]));

	printf("\nEnter position for partitioning: ");
	scanf("%d",&a);

	int p[a+1], q[n-a-1],c;

	for (i=0;i<n;i++) 
		printf("%d,",y[i]);

	for (i=0;i<=a;++i) 
		p[i]=y[i];

	for(c=0;i<n;c++,++i) 
		q[c]=y[i];

	printf("\nDivided array 1: ");
	for (i=0;i<=a;i++)
		printf("%d,",p[i]);
	printf("\nDivided array 2: ");
	for(c=0;i<n;c++,i++)
		printf("%d,",q[c]);
}
