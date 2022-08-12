#include<stdio.h>
int main()
{
int A[10],i,j,temp;
int B[20];
printf("enter the value in the array");
for(i=0;i<10;i++)
{
scanf("%d",&A[i]);
}
for(j=0;j<10;j++)
{
   B[j]=0;
}
for(int k=0;k<10;k++)
{
 temp=A[k];
 for(int n=0;n<20;n++)
 {
  if(n==temp)
  {
   B[temp]=B[temp]+1;
  }
 }
}
for(int m=0;m<10;m++)
{
 if(B[m]!=0)
 {
  printf("the frequency of %d is %d",m,B[m]);
  printf("\n");
 }
}

return 0;
}
