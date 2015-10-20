#include <stdio.h>
#include "ispunc.h"

int main(int argc, char* argv[]) {
  char c;

/*  c = getchar();
  
  while (c != EOF) {
    if(!ispunc(c)){
      printf("%c",c);
      c = getchar();
    }
  }
works the same way as:
*/
  
  while((c=getchar()) != EOF) {
    if (!ispunc(c))
      printf("%c",c);
  }

  return 0;
 
}
