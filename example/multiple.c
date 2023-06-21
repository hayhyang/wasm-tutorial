#include <stdio.h>

void multiple(int grades)
{
  for( int i = 1 ; i <= 9 ; i++ )
  {
    printf("%d * %d = %d\n", grades , i , grades * 1);
  }
}

int main()
{
  multiple(2);
  return 0;
}