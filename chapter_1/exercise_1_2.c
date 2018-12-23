/* Exercise 1-2. Experiment to find out what happens when prints 's argument
   string contains \c, where c is some character not listed above. */

#include <stdio.h>

int main() {
  printf("hello\bworld\n"); /* backspace */
  printf("hello\tworld\n"); /* horizontal tab */
  printf("hello\vworld\n"); /* vertical tab */
  printf("hello\x46world\n"); /* hexadecimal characters */
}
