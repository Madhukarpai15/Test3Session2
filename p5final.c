#include<stdio.h>

int input_size()
{
  int a;
  printf("Enter the size of the array: ");
  scanf("%d",&a);
  return a;
}

void input_array(int n,int a[n])
{
  int i=0;
  for(i=0;i<n;i++)
    {
      printf("Enter the number: ");
      scanf("%d",&a[i]);
    }
}

int find_largest(int n,int a[n])
{
  int large;
  for(int i=0;i<n-1;i++)
    {
      if(a[i+1]>a[i])
      {
        large=i+1;
      }
      else
      {
        large=i;
        while(i<n-1)
          {
            if(a[large]>=a[i+2])
            {
              i++;
              continue;
            }
            else
            {
              break;
            }
          }
        
      }
    }
  return large;
}

void out_put(int n,int a[n],int largest)
{
  printf("The index of the largest number %d is %d:",a[largest],largest);
}

int main()
{
  int n,result;
  n=input_size();
  int a[n];
  input_array(n,a);
  result=find_largest(n,a);
  out_put(n,a,result);
}