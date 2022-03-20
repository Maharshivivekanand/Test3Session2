
#include<stdio.h>

int input_n_and_r(int *n,int *r)
{
    printf("enter the values of n and r\n");
    scanf("%d %d",n,r);
}

int ncr_a(int a)
{
    int n=1;
    for(int i=1;i<=a;++i)
    {
        n =n*i;
    }
  return n;
  
}

int ncr(int n,int r)
{
    int b,c,d,result;
    b=ncr_a(n);//function calll
    c=ncr_a(r);
    d=ncr_a(n-r);
    result=b/(c*d);
    return result;
}

void output(int n, int r,int result)
{
    printf("the combinetion of %dC%d is %d",n,r,result);
}

int main()
{
    int x,y,result;
    input_n_and_r(&x,&y);
    result=ncr(x,y);
    output(x,y,result);
    return 0;
}