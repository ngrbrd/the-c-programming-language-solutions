/* Exercise 1-17. Write a program to print all input lines that are longer
   than 80 characters. */

#include <stdio.h>
#define MAXLENGTH 1000

int getaline(char [], int);

int main() {
  int length;
  char line[MAXLENGTH];

  while((length = getaline(line, MAXLENGTH)) > 0)
    if(length > 80)
      printf("Line contents : %s\n", line);

  return 0;
}

int getaline(char line[], int max_len) {
  int c, i;

  for(i = 0; i < (max_len - 1) && (c = getchar()) != EOF && c != '\n'; i++)
    line[i] = c;

  if(c == '\n')
    line[i++] = c;

  line[i] = '\0';
  return i;
}
