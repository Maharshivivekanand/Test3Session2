
#include<stdio.h>

typedef struct _fraction
{
 int num,den;
}Fraction;


Fraction input_fraction(Fraction *n1,Fraction *n2,Fraction *n3)
{
    printf("enter the fractions values\n");
    scanf("%d %d",&n1->num,&n1->den);
    scanf("%d %d",&n2->num,&n2->den);
    scanf("%d %d",&n3->num,&n3->den);
    
}

int largest_fraction(Fraction n1,Fraction n2,Fraction n3)
{
    
    if((float)n1.num/n1.den<(float)n2.num/n2.den && (float)n1.num/n1.den<(float)n3.num/n3.den)
    {
        return 1;
    }
    if((float)n2.num/n2.den<(float)n3.num/n3.den)
    {
        return 2;
    }
    else
    return 3;
}
 void output(Fraction n1,Fraction n2,Fraction n3)
 {
     if(largest==1)
     {
         printf("%d/%d is smallest among all",n1.num,n1.den);

     }
     if(largest==2)
     {
       printf("%d/%d is smallest among all",n2.num,n2.den);

     }
     if(largest==3)
     {
        printf("%d/%d is smallest among all",n3.num,n3.den); 
     }
     else 
     {
         printf("all are equal");
     }
 }

 int main()
 {
     Fraction n1,n2,n3;
     int largest;
     input_fraction(&n1,&n2,&n3);
     largest=largest_fraction(n1,n2,n3);
     output(n1,n2,n3,largest);
     return 0;
     
 }
