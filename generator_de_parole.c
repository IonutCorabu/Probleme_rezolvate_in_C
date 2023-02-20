#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX_LENGTH 100

char random_char() {
  int type = rand() % 3;
  if (type == 0) {
    return rand() % 10 + '0'; // cifre
  } else if (type == 1) {
    return rand() % 26 + 'a'; // litere mici
  } else {
    return rand() % 26 + 'A'; // litere mari
  }
}

int main() {
  srand(time(NULL));
  char str[MAX_LENGTH];
  int length = rand() % MAX_LENGTH;
  for (int i = 0; i < length; i++) {
    str[i] = random_char();
  }
  str[length] = '\0';
  printf("Sirul generat: %s\n", str);
  return 0;
}

