//1. Write a function to find the greatest number from the given array of any size. (TSRS)
#include<stdio.h>
int main()
{
int n;
printf("enter the number of values you want to insert in the array");
scanf("%d",&n);
int arr[n];
for(int j=0;j<n;j++)
{
    scanf("%d",&arr[j]);
}
int gN = input(arr,n);
printf("the greatest number in the array is %d",gN);

return 0;
}

int input(int A[], int n)
{
 int g;
 g=A[0];
 for(int i=1;i<n;i++)
 {
  if(g<A[i]){
  g=A[i];
  }
 }
 return g;

}
