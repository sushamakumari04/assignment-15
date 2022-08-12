//9. Write a function in C to merge two arrays of the same size sorted in descending
//order.
#include<stdio.h>
int main()
{
int n;
printf("Enter the size of array");
scanf("%d",&n);
int A[n],B[n];
printf("enter the value in the first array");
for(int i=0;i<n;i++)
{
scanf("%d",&A[i]);
}
printf("enter the value in the second array");
for(int i=0;i<n;i++)
{
scanf("%d",&B[i]);
}
int N= 2*n;
Merge(A,B,N);
return 0;
}
int Merge(int A[],int B[],int N)
{
int C[N];
int a=0,b=0,c=0;
for(int i=0;i<N;i++)
{
 if(A[a]>B[b]&&a<5)
 {
  C[c]=A[a];
  a++;
  c++;
 }
 else
 {
  C[c]=B[b];
  b++;
  c++;
 }

}
for(int i=0;i<N;i++)
{
 printf("%d ",C[i]);
}
}
