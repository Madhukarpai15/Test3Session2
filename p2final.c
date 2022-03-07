#include<stdio.h>
typedef struct Fraction
{
  int num,den;
}fraction;

fraction input_fraction()
{
  fraction f;
  printf("Enter the numerator of the fraction: ");
  scanf("%d",&f.num);
  printf("Enter the denominator of the fraction: ");
  scanf("%d",&f.den);
  return f;
}

fraction largest_fraction(fraction f1,fraction f2,fraction f3)
{
  int a,b,c;
  int sden;
  sden=f1.den*f2.den*f3.den;
  a=f1.num*sden/f1.den;
  b=f2.num*sden/f2.den;
  c=f3.num*sden/f3.den;

  if(a>b && a>c)
  {
    return f1;
  }
  else if (b>c && b>a)
  {
    return f2;
  }
  else
  {
    return f3;
  }
}

void output(fraction f1,fraction f2,fraction f3,fraction largest)
{
  printf("The largest fraction out of %d/%d, %d/%d and %d/%d is: %d/%d ",f1.num,f1.den,f2.num,f2.den,f3.num,f3.den,largest.num,largest.den);
}

int main()
{
  fraction f1,f2,f3,largest;
  f1=input_fraction();
  f2=input_fraction();
  f3=input_fraction();
  largest=largest_fraction(f1,f2,f3);
  output(f1,f2,f3,largest);
}