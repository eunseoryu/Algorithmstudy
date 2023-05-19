/*
        Read a text from the user and extract all words from the input string
   into an array of 'Substring' structures. A word is defined as a sequence of
   characters separated by whitespace characters (space, tab, new line, etc).

        Example)
                Input a text: Welcome to HGU!		// "Welcome to HGU!" is
   the input string Totally, 3 substrings. 0) 0 - 7, "Welcome" 1) 8 - 10, "to"
                2) 11 - 15, "HGU!"

        You can use the following function to decide whether a character 'ch' is
   a whitespace character or not. int isspace(int ch);		// returns 1 if
   ch is a whitespace character, otherwise, 0

*/

#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Use the following structure to store the start position, end position, and
// string.
typedef struct {
  int start, end; // location of the substring (start and end indices)
  char *string;   // pointer to dynamically allocate memory to store string
} Substring;

Substring sub[128]; // array of substrings
int no_string = 0;  // # of substrings

int main() {
  char text[512] = "";

  printf("Input a text: ");
  fgets(text, 511, stdin); // read a text line
  int len = strlen(text) - 1;
  text[len] = 0; // trim '\n'

  // TO DO: extract all words from the input text into sub.
  //		  store the number of the extracted substrings in no_string.
  //		  dynamically allocate memory to store substring in the 'string'
  //field.
  int i = 0;
  sub[no_string].start = i;
  char *temp = text;
  while (i <= len) {
    if (isspace(text[i++]) || i==len) {
      sub[no_string++].end = i - 1;
      printf("start:%d, end: %d\n", sub[no_string-1].start, sub[no_string-1].end);
      strncpy(sub[no_string-1].string, &text[sub[no_string-1].start] ,
              sub[no_string-1].end - sub[no_string-1].start);
      if (i + 1 <= len)
        sub[no_string].start = i + 1;
    }
  }


  // DO NOT modify the following three lines
  printf("Totally, %d substrings.\n", no_string);
  for (int i = 0; i < no_string; i++)
    printf("%d) %d - %d, \"%s\"\n", i, sub[i].start, sub[i].end, sub[i].string);

  // TO DO: deallocate all dynamic memory blocks
  for(int i=0 ; i < no_string ; i++){
    free(sub[i].string);
  }
  no_string = 0; // for safety

  return 0;
}
/*
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
  int start, end;
  char *string;
} Substring;

Substring sub[128];
int no_string = 0;

int main() {
  char text[512] = "";
  printf("Input a text: ");
  fgets(text, 511, stdin);
  text[strcspn(text, "\n")] = 0;

  int i = 0;
  while (text[i] != '\0') {
    while (isspace(text[i])) i++;
    if (text[i] == '\0') break;
    sub[no_string].start = i;
    while (!isspace(text[i]) && text[i] != '\0') i++;
    sub[no_string].end = i;
    sub[no_string].string = malloc((i - sub[no_string].start + 1) * sizeof(char));
    strncpy(sub[no_string].string, &text[sub[no_string].start], i - sub[no_string].start);
    sub[no_string].string[i - sub[no_string].start] = '\0';
    no_string++;
  }

  printf("Totally, %d substrings.\n", no_string);
  for (int i = 0; i < no_string; i++)
    printf("%d) %d - %d, \"%s\"\n", i, sub[i].start, sub[i].end, sub[i].string);

  for (int i = 0; i < no_string; i++)
    free(sub[i].string);
  no_string = 0;

  return 0;
}

*/
