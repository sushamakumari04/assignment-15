//3. Write a function to sort an array of any size. (TSRS)
#include<stdio.h>
int sort(int[],int );
int main()
{
int n,lastIndex;
printf("Enter the size of array");
scanf("%d",&n);
int arr[n],G,c[n];
for(int i=0;i<n;i++){
 scanf("%d",&arr[i]);
}
lastIndex=n-1;
for(int i=lastIndex; i>=0 ;i--)
{
    G = sort(arr,i+1);
    c[i]=G;
}
for(int i=0;i<n;i++){
 printf("%d  ",arr[i]);
}
return 0;
}
int sort(int B[],int n)
{ int temp,g,j;
  int lastIndex=n-1;
  for(j=0;j<=lastIndex;j++){
   if(B[j]>B[j+1]){
    temp=B[j];
    B[j]=B[j+1];
    B[j+1]=temp;
   }
 }
  g=B[j];
 return g;
}
