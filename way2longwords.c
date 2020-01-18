#include <stdio.h>
#include<string.h>
int
main ()
{
  int n;
  scanf ("%d", &n);
  char ar[100];
  for (int i = 0; i < n; i++)
    {
      scanf ("%s", &ar);
      int len = strlen (ar);
      if (len > 10)
    printf ("%c%d%c \n", ar[0], len - 2, ar[len - 1]);
      else
    printf ("%s \n", ar);
    }

  return 0;
}
