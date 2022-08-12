//5. Write a function to find the first occurrence of adjacent duplicate values in the array.
//Function has to return the value of the element.doubt agr ek se jada dublicate value hui array me tu jese 1,2,2,3,4,4,5
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
int D=DuplicateValue(arr,n);
printf("the value of the duplicate is %d",D);

return 0;
}
int DuplicateValue(int arr[],int n)
{
int i,s;
for(i=0;i<n;i++)
{
if(arr[i+1]== arr[i])
 {
  break;
 }
}
 return arr[i];
}
