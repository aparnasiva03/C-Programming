#include <stdio.h>

struct employee{
  char* name;  
  int s;
  int scores[3];
}e2;

typedef struct{
  char* name;  
  int s;
}EMP1;

typedef struct employee EMP;

int main()
{
    EMP e1 = {"John",100000, {23,45,12}};
    EMP e3;
    e2.name = "Shyam";
    e2.s = 20000;
    e3.name="Hameed";
    e3.s=100000;
    
    printf("%s ", e1.name);
  printf("%d", e2.s);
    return 0;
}

