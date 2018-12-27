/* Exercise 1-14. Write a program to print a histogram of the frequencies of 
   different characters in its input. */

#include <stdio.h>
#define ARR_LENGTH 128

int main() {
  int c;
  int characters[ARR_LENGTH];
  int max_frequency = 0;

  for(int i = 0; i < ARR_LENGTH; i++)
    characters[i] = 0;

  /* use array indices as ascii codes for characters */
  while((c = getchar()) != EOF) {
    characters[c]++;
    if(characters[c] > max_frequency)
      max_frequency = characters[c];
  }

  for(; max_frequency > 0; max_frequency--) {
    printf("%4i |", max_frequency);
    for(int i = 0; i < ARR_LENGTH; i++) {
      if(characters[i] != 0) {
        if(characters[i] >= max_frequency)
          printf("  * ");
        else
          printf("    ");
      }
    }
    printf("\n");
  }

  printf("\n      ");
  for(int i = 0; i < ARR_LENGTH; i++)
    if(characters[i] != 0)
      printf("%3i ", i);

  printf("\n");
}
