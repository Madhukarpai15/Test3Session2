#include<stdio.h>

int input_n_and_r(int *n,int *r)
{
 //int a,b;
 printf("Enter the value of n:");
 scanf("%d",n);
 printf("Enter the values of r:");
 scanf("%d",r);
}

int ncr(int n,int r)
{
  int nfact=1,rfact=1,nrfact=1,ncr;
  for(int i=1;i<=n;i++)
    {
      nfact*=i;
    }
  for(int j=1;j<=r;j++)
    {
      rfact*=j;
    }
  for(int k=1;k<=(n-r);k++)
    {
      nrfact*=k;
    }
  ncr=nfact/(rfact*nrfact);
  return ncr;
}

void output(int n,int r,int result)
{
  printf("The nCr value of %dC%d is: %d",n,r,result);
}

int main()
{
  int n,r,result;
  input_n_and_r(&n,&r);
  result=ncr(n,r);
  output(n,r,result);
}