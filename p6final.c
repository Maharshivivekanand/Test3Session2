#include<stdio.h>
#include<string.h>

void input_string(char *a)
{
  printf("enter a text\n");
  scanf("%s",a);
  
}
int count_words(char *a)
{
  int no_words=0;
  char *string=strtok(a,"/");
  while( *string != NULL)
  {
     *string = strtok(NULL, " ,\".-");
      no_words++;

  }
  return no_words;
  
}
void output(char *string,int no_words)
{
  printf("%s is %d\n ",*string,no_words);
  
}
int main()
{
  char a[100];
  input_string(a);
  int b=count_words(a);
  output(a,b);
}