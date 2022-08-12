//4. Write a function to rotate an array by n position in d direction. The d is an indicative
//value for left or right. (For example, if array of size 5 is [32, 29, 40, 12, 70]; n is 2 and
//d is left, then the resulting array after left rotation 2 times is [40, 12, 70, 32, 29] )
#include<stdio.h>
int  ArrayShiftL(int [],int ,int);
int  ArrayShiftL(int [],int ,int);
int main()
{
int N,d,n;
int L=1;
int R=2;
printf("enter the size of array");
scanf("%d",&N);
int arr[N];
printf("enter the value in the array");
for(int i=0;i<N;i++)
{
 scanf("%d",&arr[i]);
}
printf("enter the how many times you want to shift and  in which direction");
scanf("%d%d",&n,&d);

if(d==1){
 ArrayShiftL(arr,N,n);
}
if(d==2)
{
 ArrayShiftR(arr,N,n);
}
return 0;
}
int  ArrayShiftL(int A[],int N ,int n)
{
int temp,i,j;
for(i=0;i<n;i++)
 {
  temp=A[0];
  for(j=0;j<(N-1);j++)
  {
    A[j]=A[j+1];
  }
  A[j]=temp;
 }
 for(int k=0;k<N;k++){
  printf("%d ",A[k]);
 }

}
int  ArrayShiftR(int B[],int N ,int n)
{
int temp,i,j;
for(i=0;i<n;i++)
 {
  temp=B[N-1];
  for(j=N-2;j>=0;j--)
  {
    B[j+1]=B[j];
  }
  B[0]=temp;
 }
 for(int k=0;k<N;k++){
  printf("%d ",B[k]);
 }

}
