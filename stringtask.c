#include <stdio.h>
#include<string.h>
int main ()
{
  char ar[100];
  scanf ("%s", &ar);
  int l = strlen (ar);
  for (int i = 0; i < l; i++)
    {
      if (ar[i] < 97) //check for ascii
        ar[i] = ar[i] + 32; 
      if (ar[i] != 'a' && ar[i] != 'e' && ar[i] != 'i' && ar[i] != 'o' && ar[i] != 'u' && ar[i] != 'y')
  {
    printf (".%c", ar[i]); //just put dot before printing the consonant
  }
    }
  return 0;
}