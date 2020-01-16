#include <stdio.h>

int ft_pow( int n, int p )
{
  int a;
  int i;

  a = n;
  i = 1;
  while ( i < p )
    {
      n = n * a;
      i = i + 1;
    }
  return (n);
}
  
int main()
{
  int res = ft_pow(5, 3);
  printf("%d", res);
}
