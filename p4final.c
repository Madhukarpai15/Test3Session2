#include<stdio.h>

int input_degree()
{
  int a;
  printf("Enter the degree of the polynomial:");
  scanf("%d",&a);
  return a;
}

float input_x()
{
  float x;
  printf("Enter the value of x:");
  scanf("%f",&x);
  return x;
}

void input_coefficients(int n,float a[n])
{
  int i;
  for(i=n;i>=0;i--)
    {
      printf("Enter the coefficient of X^%d:",i);
      scanf("%f",&a[i]);
    }
}

float evaluate_polynomial(int n,float a[n],float x)
{
  int i,sum=0;
  for(i=n;i>0;i--)
    {
      sum=(sum+a[i])*x;
    }
  sum+=a[0];
  return sum;
}

void out_put(int n,float a[n],float x,float result)
{
  int i;
  for(i=0;i<n;i++)
    {
      printf("%f*x^%d+",a[i],i);
    }
  printf("%f*x^%d at %f is %f",a[n],n,x,result);
}

int main()
{
  int deg,x,result;
  deg=input_degree();
  x=input_x();
  float a[deg];
  input_coefficients(deg,a);
  result=evaluate_polynomial(deg,a,x);
  out_put(deg,a,x,result);
}