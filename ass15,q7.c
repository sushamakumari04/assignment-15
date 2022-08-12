//7. Write a function in C to count a total number of duplicate elements in an array.
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
DuplicateValue(arr,n);
return 0;
}
int DuplicateValue(int arr[],int n)
{
int i,count=0;
for(i=0;i<n;i++)
{
    for(int j=i+1;j<n;j++)
 {
     if(arr[i]== arr[j])
     {
        count++;
     }
 }

}
printf("%d",count);
}
