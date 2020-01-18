#include <stdio.h>
 
int main ()
{
  int n, i, ctr=0;
  scanf ("%d", &n);
  int a[n*3];
  for (i = 0; i < n*3; i++){
    scanf ("%d", &a[i]);
  }
  for (i = 0; i < n*3; i+=3)
    {
      if ((a[i]+a[i+1]+a[i+2])>1) 
        ctr++;
    }
  printf("%d", ctr);
 
  return 0;
}
