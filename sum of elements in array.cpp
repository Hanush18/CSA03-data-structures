#include<stdio.h>
int main(){
	int n,a[100],i,sum=0;
	printf("enter the size of array:");
	scanf("%d",&n);
	printf("enter the array elements:");
	for (i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++){
		sum+=a[i];
	}
	printf("sum of elements in an array :%d",sum);
}
