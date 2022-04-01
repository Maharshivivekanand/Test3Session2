#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define SIZE 30
void input_string(char *a)
{
    printf("enter a string\n");
    gets(a);

}
int count_words(char *string)
{
    char* str=strtok(string ," ");
    int no_words=0;
    while (str !=NULL)
    {
        no_words++;
        str=strtok(NULL," ");
    }
    return no_words++;
    

}
void output(char *string, int no_words)
{
    printf("the number of words in  %s is %d\n",string,no_words);

}
int main()
{
    char x[SIZE];
    input_string(x);
    int result=count_words(x);
    output(x,result);
    return 0;
}