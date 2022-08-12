//6. Write a function in C to read n number of values in an array and display it in reverse
//order.
#include<stdio.h>
int main()
{
int n;
printf("enter the size of array");
scanf("%d",&n);
int arr[n];
printf("enter the value in the array");
for(int i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}
Reverse(arr,n);
return 0;
}
Reverse(int arr[],int n)
{
 for(int i=n-1;i>=0;i--)
 {
  printf("%d ",arr[i]);
 }

}
