#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>
#include <limits.h>

long cash = 0;

int is_digit(char c) {
    return '0' <= c && c <= '9';
}

long get_long() {
    printf("> ");
    uint64_t l = 0;
    char c = 0;
    while(!is_digit(c))
      c = getchar();
    while(is_digit(c)) {
      if(l >= LONG_MAX) {
        printf("\n\nBEFORE l >= LONG_MAX uint64_t l: %llu \n",l);
        printf("\n\nBEFORE l >= LONG_MAX uint64_t l signed version: %li \n",l);
	       l = LONG_MAX;
         printf("\n\nl >= LONG_MAX uint64_t l: %llu \n",l);
         printf("\n\nl >= LONG_MAX uint64_t l signed version: %li \n",l);
	        break;
      }
      printf("\n uint64_t l: %llu \n",l);
      printf("uint64_t l signed version: %li \n",l);
      l *= 10;
      printf("uint64_t l *= 10: %llu \n",l);
      printf("uint64_t l signed version: %li \n",l);
      l += c - '0';
      printf("uint64_t l: += %c = %llu \n",c, l);
      printf("uint64_t l signed version: %li \n",l);
      c = getchar();
    }
    while(c != '\n')
      c = getchar();
    return l;
}

int main(int argc, char *argv[]) {
  //cash = ULONG_MAX;
  //uint64_t l = LONG_MAX;
  //bit too diffcult to print out max value of uint64_t
  //printf("%lu \n",ULONG_MAX); //outputs 4294967295
  printf("%lu \n",LONG_MAX ); //outputs 2147483647
  //printf("%li \n",cash ); //outputs -1 with long signed notation
  //printf("%lu \n",cash ); //outputs 294967295 with long unsigned notation
  //printf("%lu \n",l );

  //printf("\nsize of uint64_t: %d \n",sizeof(uint64_t));
  //printf("size of long: %d \n",sizeof(long));

long win_cash = 0;
  long bet = get_long();
  printf("bet signed version: %li \n",bet);
  cash -= bet;
  printf("cash signed version %li \n", cash);
  win_cash += bet*2;
  printf("win cash signed version %li \n", win_cash);

    long item1 = 400;
    //               2147483647
    uint64_t item2 = 214748384;
    //               2147483640
    //               2147483847
    if (item2 >= LONG_MAX) {
      printf("stop\n");
    }

  return 0;
}

/*
LONG_MAX
2147483647:
01111111
11111111
11111111
11111111

2147483700:
10000000
00000000
00000000
00110100
*/
