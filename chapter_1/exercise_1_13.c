/* Exercise 1-13. Write a program to print a histogram of the lengths of words
   in its input. It is easy to draw the histogram with the bars horizontal; a
   vertical orientation is more challenging. */

#include <stdio.h>
#define IN 1
#define OUT 0
#define MAXLENGTH 21

int main() {
  int c;
  int state = OUT;
  int weights[MAXLENGTH];
  int temp_length;
  int second_last_char;
  int max_frequency;

  for(int i = 0; i < MAXLENGTH; i++)
    weights[i] = 0;

  /* words of length greater than 20 are ignored */
  while((c = getchar()) != EOF) {
    second_last_char = c;
    if(c == ' ' || c == '\t' || c == '\n'){
      if(state == IN && temp_length < MAXLENGTH)
        weights[temp_length]++;
      state = OUT;
    } else {
      if(state == IN)
        temp_length++;
      else {
        temp_length = 1;
        state = IN;
      }
    }
  }

  /* if last character is not newline last word is skipped,
     we count it after the loop */
  if(second_last_char != ' ' && second_last_char != '\t'
      && second_last_char != '\n')
    weights[temp_length]++;

  /* find maximum value of y axis */
  for(int i = 1; i < MAXLENGTH; i++)
    if(weights[i] > max_frequency)
      max_frequency = weights[i];

  printf("\n");
  for(; max_frequency > 0 ; max_frequency--) {
    printf("%4i |", max_frequency);
    for(int i = 1; i < MAXLENGTH; i++) {
      if(weights[i] >= max_frequency)
        printf(" * ");
      else
        printf("   ");
    }
    printf("\n");
  }
  for(int i = 0; i < MAXLENGTH; i++)
    printf("----");

  printf("\n");
  printf("      ");
  for(int i = 1; i < MAXLENGTH; i++)
    printf("%2i ", i);
}
