#include<stdio.h>
int input(int *num1,int *num2,int *den1,int *den2)
{
    printf("enter the fraction\n");
    scanf("%d%d",num1,den1);
    printf("enter the fraction\n");
    scanf("%d%d",num2,den2);
}

int sum_fraction(int num1,int num2,int den1,int den2,int *num3,int *den3)
{
    int gcd,lcm;
    int i;
for(i=1;i<=den1 && i<=den2;++i)
{
    if(den1%i==0 && den2%i==0)
    gcd=i;
}

lcm=(den1*den2)/gcd;

*num3=(num1*lcm/den1)+(num2*lcm/den2);
*den3=lcm;

}
void output(int num1,int num2,int den1,int den2,int num3,int den3)
{
    printf("the sum of %d/%d + %d/%d is %d/%d\n",num1,den1,num2,den2,num3,den3);
}

int main()
{
    int num1,num2,den1,den2,num3,den3;
    input(&num1,&num2,&den1,&den2);
    sum_fraction(num1,num2,den1,den2,&num3,&den3);
    output(num1,num2,den1,den2,num3,den3);
    return 0;

}