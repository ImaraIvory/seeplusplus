/* strftime example */
#include <stdio.h>      /* puts */
#include <time.h>       /* time_t, struct tm, time, localtime, strftime */

//Next step for this program is to play with optimization. Change the buffer size after setting up a beginning time stamp, closing time stamp, and printing the difference.
int main(void) {
  time_t rawtime;
  struct tm * timeinfo;
  char buffer [50];

  time (&rawtime);
  timeinfo = localtime (&rawtime);

  strftime (buffer,50,"It is currently %a %H:%M%p.",timeinfo);
  puts (buffer);

  return 0;
}