/* Exercise 1-9. Write a program to copy its input to its output, replacing each
   string of one or more blanks by a single blank. */

#include <stdio.h>

int main() {
  int c;
  int last_char_space = 0;
  int curr_char_space;

  while((c = getchar()) != EOF) {
    if(c == ' ')
      curr_char_space = 1;
    else
      curr_char_space = 0;

    /* keep track of current and last character */
    /* only print if both last and current characters were not blank */
    if (!curr_char_space || !last_char_space)
      printf("%c", c);
    last_char_space = curr_char_space;
  }
  return 0;
}
