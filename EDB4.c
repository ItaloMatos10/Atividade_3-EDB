#include <stdio.h>

int main(void){
  char t = 'A';
  char *s = &t;
  char **r = &s;
  char ***q = &r;
  char ****p = &q;

  printf("%c",****p);
}
