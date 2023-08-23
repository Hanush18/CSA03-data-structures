#include<stdio.h>
int factor(int n){
	if(n==0)
	return 1;
	else
	return (n*factor(n-1));
}
main(){
	int n,fact;
	printf("enter a number:");
	scanf("%d",&n);
	fact=factor(n);
	printf("the given factor of %d is %d",n,fact);
	return 0;
}
