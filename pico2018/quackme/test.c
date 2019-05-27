#include <stdio.h>

int main()
{
  //XOR by 's' first
  char ch = 'a';
  printf("%c\n",ch);
  ch = ch ^ 's';
  printf("%c\n",ch);

  //Reclaim 'a' by XORing with 's' again
  ch = ch ^ 's';
  printf("%c\n",ch);

  //c = a^b; a is our input string, b is sekrutBuffer, c is greetingMessage
  //a = c^b
  char b[25] = {0x29, 0x06, 0x16, 0x4f, 0x2b, 0x35, 0x30, 0x1e, 0x51, 0x1b, 0x5b, 0x14, 0x4b, 0x08, 0x5d, 0x2b, 0x5c, 0x10, 0x06, 0x06, 0x18, 0x45, 0x51, 0x00, 0x5d, 0x00};
  char c[25] = {0x59, 0x6f, 0x75, 0x20, 0x68, 0x61, 0x76, 0x65, 0x20, 0x6e, 0x6f, 0x77, 0x20, 0x65, 0x6e, 0x74, 0x65, 0x72, 0x65, 0x64, 0x20, 0x74, 0x68, 0x65, 0x20, 0x44};
  char a[25] = {};

  for (int i = 0; i < 25; i++){
    a[i] = c[i] ^ b[i];
    printf("%c", a[i]);
  }

  return 0;
}