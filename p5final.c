#include <stdio.h>

int input_array_size()
{
  int n;
  printf("Enter size of array\n");
  scanf("%d",&n);
  return n;
}

void input_array(int n,int a[n])
{
  int i;
  printf("Enter the numbers to compare\n");
  for(int i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
  
}

int find_largest(int n,int arr[n])
{
    int i;
   int large;
   for (i = 0; i < n; i++)
        if (arr[i] > large)
            large = arr[i];
 
    return large;
}

void output_n(int n, int a[n], int largest)
{
  printf("%d is largest\n",largest);
}
int main()
{
  int x=input_array_size();
  int a[x];
  input_array(x,a);
  int large=find_largest(x,a);
  output_n(x,a,large); 
  return 0;
}