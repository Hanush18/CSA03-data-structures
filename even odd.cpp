#include<stdio.h>

int main()
{
 int arr[100], i, n, esum=0, osum=0;
 printf("Enter n:");
 scanf("%d", &n);
 printf("Enter numbers:\n");
 for(i=0;i< n;i++)
 {
  printf("arr[%d]=",i);
  scanf("%d",&arr[i]);
 }
 for(i=0;i< n;i++)
 {
  if(arr[i]%2==0)
  {
   esum = esum + arr[i];
  }
  else
  {
   osum = osum + arr[i];
  }
 }
 printf("Even sum = %d\n",esum);
 printf("Odd sum = %d", osum);

 return(0);
}
