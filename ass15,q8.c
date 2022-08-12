//8. Write a function in C to print all unique elements in an array.
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
UniqueValue(arr,n);
return 0;
}
int UniqueValue(int arr[],int n)
{
int count,temp,i,j;
for(i=0;i<n;i++)
{
 count=0;
 temp=arr[i];
 for(j=0;j<n;j++)
 {
  if(temp==arr[j]){
    count++;
  }
 }
 if(count==1){
 printf("%d ",temp);
 }

}


}
