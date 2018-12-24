/* Exercise 1-12. Write a program that prints its input one word per line. */

#include <stdio.h>
#define IN 1
#define OUT 0

int main() {
  int c, state;

  state = OUT;

  while((c = getchar()) != EOF) {
    if(c == '\n' || c == '\t' || c == ' ')
      state = OUT;
    else {
      if(state == OUT)
        printf("\n");

      state = IN;
      printf("%c", c);
    }
  }

  return 0;
}
