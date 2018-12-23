/* Exercise 1-8. Write a program to count blanks, tabs, and newlines. */

#include <stdio.h>

int main() {
  int blank_count = 0;
  int tab_count = 0;
  int line_count = 0;
  int c;

  printf("Enter some text\n");
  while((c = getchar()) != EOF) {
    if(c == '\n')
      line_count++;
    else if(c == ' ')
      blank_count++;
    else if(c == '\t')
      tab_count++;
  } 
  printf("\nNewLine Count : %i, Blank Count : %i, Tab Count : %i",
      line_count, blank_count, tab_count);


}
