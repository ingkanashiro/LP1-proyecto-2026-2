#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// necesitamos un modulo q se encargue especificamente de leer los txt

struct Node {
  char* name;
  float x;
  float y;
};

int main() {
  FILE* file_ptr;
  char buffer[256];
  char* endptr;
  file_ptr = fopen("./input/nodos.txt", "r");

  if (file_ptr == NULL) {
    printf("no quiero tu caramelo");
    return 1;
  }

  while (fgets(buffer, sizeof(buffer), file_ptr) != NULL) {
    if (buffer[0] == '/' && buffer[1] == '/') continue;
    // printf("%s", buffer);
    char* nodeName = strtok(buffer, ":");
    char* nodeCoords = strtok(NULL, ":");
    char* nodeX = strtok(nodeCoords, ".");
    char* nodeY = strtok(NULL, ".");  // sospecho q esto aun tiene el \n
    // printf("%x\n", sizeof(nodeX));
    // printf("\"%s\" is of size %u\n", nodeX, strlen(nodeX));
    for (int i = 0; i < strlen(nodeX); i++) {
      if (nodeX[i] == ',') {
        nodeX[i] = '.';
        // printf("changing , to . on index %d of %s\n", i, nodeX);
      }
    }
    // printf("nodeX is %s\n", nodeX);
    struct Node xd;
    xd.name = nodeName;
    xd.x = strtof(nodeX, &endptr);
    if (nodeX == endptr) {
      //   printf("Conversion failed. No digits found.\n");
    } else {
      // printf("Converted float: %f\n", xd.x);
    }
    xd.y = strtof(nodeY, &endptr);
    if (nodeY == endptr) {
      //   printf("Conversion failed. No digits found.\n");
    } else {
      // printf("Converted float: %f\n", xd.y);
    }
    printf("nodeName is %s, nodeX is %f, nodeY is %f\n", xd.name, xd.x, xd.y);
  }

  fclose(file_ptr);
  return 0;
}

/*
       B           D            F           H           J
       /\----------/\----------/\----------/\----------/\
      /  \        /  \        /  \        /  \        /  \
     /    \      /    \      /    \      /    \      /    \
    /      \    /      \    /      \    /      \    /      \
   /        \  /        \  /        \  /        \  /        \
A /----------\/----------\/----------\/----------\/----------\ K
              C          E           G           I
xd
creo q se terminara leyendo como si fuera un grafo G(V, E)
*/