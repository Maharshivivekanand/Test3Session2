

/*Create invite link and paste link in the form and submit form. ( You can edit response later). https://docs.google.com/forms/d/e/1FAIpQLSdTOayhPycdDURXRHTDZ8CDeLmTS9s-sTkkM_VTf_sCzD33uA/viewform?usp=sf_link*/

#include <stdio.h>
int find_gcd(int a,int b)
{
  int t;
  while (b !=0)
    {
      t=b;
      b=a%b;
      a=t;
    }
  return a;
}
int main()
{
  printf("%d\n",find_gcd(16,24));
}
