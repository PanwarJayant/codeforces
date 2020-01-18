#include <stdio.h>
 
int main ()
{
  int n, i, ctr=0;
  scanf ("%d", &n);
  char a[n*4];
    scanf ("%[^n]s", a);
  for (i = 2; i < n*4; i+=4)
    {
      if (a[i]=='+') {
        ctr+=1;}
    if (a[i]=='-'){
        ctr-=1;}
    }
  printf("%d", ctr);
  
 
  return 0;
}
