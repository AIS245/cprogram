#include <stdio.h>

int main() {
  int c,b=0;
  while((c=getchar())!=EOF){
    if(c==' ')
      ++b;
    if(b==1)
      putchar(c);
    if(c!=' ')
    {
      b=0;
      putchar(c);
    } 
  }
  return 0;
}