#include <stdlib.h>
#include <time.h>

int sequence[] = {9, 8, 10, 24, 75, 9};
int count = 0;

int rand()
{
  int num;

  num = sequence[count];
  count++;

  return(num);
}