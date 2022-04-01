#include <stdio.h>
struct _fraction
{
int num,den;
};
typedef struct _fraction Fraction;

  int maharshi(int a,int b)
{
  int t;
  while (b!=0)
    {
      t = b;
      b = a%b;
      a = t;
    }
  return a;
  
}
Fraction input_fraction()
{
  Fraction f;
  printf("input a fraction\n");
  scanf("%d%d",&f.num,&f.den);
  return f;
}
void in_fractions(int n,Fraction f[n])
  {
    int i;
    for(i=0;i<n;i++)
      {
        f[n]=input_fraction();
      }
  }


Fraction add_fraction(Fraction f1,Fraction f2)
{
  Fraction sum;
  sum.num = f1.num*f2.den+f2.num*f1.den;
  sum.den = f1.den*f2.den;
  int g = maharshi(sum.num,sum.den);//function call
  sum.num=sum.num/g;
  sum.den=sum.den/g;
  return sum;
}
Fraction add_n_fraction(int n,Fraction f[n])
{
  int sum=0;
  for(int i=0;i<n;i++)
    {
      sum=add_fraction();
    }
  return sum;
}
void output(Fraction f1,Fraction f[n],Fraction sum)
{
  printf("%d/%d + %d/%d = %d/%d",f1.num,f1.den,f2.num,f2.den,sum.num,sum.den);
}
int main()
{
  Fraction f1,f2,sum;
  f1 = input_fraction();
  f2 = input_fraction();
  sum = add_fraction(f1,f2);
  output(f1,f2,sum);
  return 0;
  }
