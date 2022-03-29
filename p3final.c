#include<stdio.h>
int input_number()
{
  int n;
  printf("Enter a number: \n");
  scanf("%d",&n);
  return n;
}
int is_composite(int n)
{
  for(int i=2;i<n/2;i++)
    {
      int result=n%i;
      if(result==0)
      {
        return 0;
      }
      if(result!=0)
      {
        return 1;
      }
    return result;
    }
}
void output(int n,int composite)
{
  int result;
  if(result==0)
  {
    printf("The number %d is composite",n);
  }
  if(result==1)
  {
    printf("The number is a prime number");
  }
}
int main()
{
  int n,composite;
  n=input_number();
  composite=is_composite(n);
  output(n,composite);
  return 0;
}
