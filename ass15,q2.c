//2. Write a function to find the smallest number from the given array of any size. (TSRS)
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
int sN = input(arr,n);
printf("the smallest number in the array is %d",sN);

return 0;
}

int input(int A[], int n)
{
 int s;
 s=A[0];
 for(int i=1;i<n;i++)
 {
  if(s>A[i]){
  s=A[i];
  }
 }
 return s;

}
