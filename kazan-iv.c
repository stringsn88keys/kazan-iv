#include <stdio.h>
#include <stdlib.h>

void handle_opcode(int, char[]);

int main(int argc, char **argv) {
  int opcode;
  char oparg[80];
  while(!feof(stdin)) {
    scanf("%d %79s\n", &opcode, oparg);
    handle_opcode(opcode, oparg);
  }
}


void handle_opcode(int opcode, char oparg[]) {
  printf("%d %s\n", opcode, oparg);
}
