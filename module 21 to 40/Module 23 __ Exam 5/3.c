
#include <stdio.h>

void makeStrCopy(char in[], char out[]) {
  int c = 0;

  while (in[c] != '\0') {
    out[c] = in[c];
    c++;
  }
  out[c] = '\0';
}


int main() {
  char in[1000], out[1000];


  gets(in);

  makeStrCopy(in, out);
  printf("copy: %s\n", out);

  return 0;
}

