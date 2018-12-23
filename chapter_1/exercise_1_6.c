/* Exercsise 1-6. Verify that the expression getchar() != EOF is 0 or 1. */

#include <stdio.h>

int main() {
  int c;

  printf("Enter a character : ");
  c = getchar() != EOF;

  /* Prints 0 if you press Ctrl-d */
  /* Prints 1 if you press any other character */
  printf("%d", c);
  
}
