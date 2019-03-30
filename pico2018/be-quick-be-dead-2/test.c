#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>
#include <limits.h>

long fib(int uParm1)

{
  int iVar1;
  int iVar2;
  int local_1c;

  local_1c = uParm1;
  if (1 < uParm1) {
    iVar1 = fib((uParm1 - 1));
    iVar2 = fib((uParm1 - 2));
    local_1c = iVar2 + iVar1;
    //printf("iVar1: %i | iVar2: %i \n",iVar1, iVar2);
    //sleep(1);
  }
  return local_1c;
}

long replace_fib(int stop) {
  unsigned long num = 0;
  for (int counter = 0; counter < stop; counter++) {
    num = 
    printf("%i\n", num);
  }
}

int main()
{
  int key = 0;
  for (int cnt = 0; cnt < 10; cnt++){
    printf("input: %i\n",cnt );
    key = fib(cnt);
    printf("final key: %i\n\n",key );
  }
    replace_fib(10);

  return 1;
}
