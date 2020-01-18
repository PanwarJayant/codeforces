#include <stdio.h>
 
int main ()
{
  int n, k, i, ctr=0;
  scanf ("%d", &n);
  scanf ("%d", &k);
  int a[n];
  for (i = 0; i < n; i++){
    scanf ("%d", &a[i]);
  }
  for (i = 0; i < n; i++)
    {
      if (a[i]>=a[k-1] && a[i]>0) 
        ctr++;
    }
  printf("%d", ctr);
 
  return 0;
}
