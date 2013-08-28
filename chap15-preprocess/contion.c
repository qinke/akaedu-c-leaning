#include <stdio.h>

#define DEBUG 0
//#define DEBUG

int main(void)
{
#if DEBUG
//#if defined(DEBUG)
  printf("demo info.....\n");
#endif

#if DEBUG
  printf("2 demo info.....\n");
//#else
 // #if MAX
#elif MAX
  printf("3 demo info.....\n");
 // #endif
#endif

  return 0;
}
