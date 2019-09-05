#include <stdio.h>

int main(void){
     int v[10];
     int *p;
      int i;
      for (i = 0; i < 10; i++)  {
          *(v+i) = i+1;
      }
      p=v;
      p++;
      p = p+4;
      p--;
      printf("Valor: %d. ", *++p);
}
