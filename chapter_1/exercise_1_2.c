/* Escape sequences other than \c */

#include <stdio.h>

int main() {
  printf("hello\bworld\n"); /* backspace */
  printf("hello\tworld\n"); /* horizontal tab */
  printf("hello\vworld\n"); /* vertical tab */
  printf("hello\x46world\n"); /* hexadecimal characters */
}
