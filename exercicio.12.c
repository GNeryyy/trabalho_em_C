#include <stdio.h>
#include <string.h>

int ocorre_dentro(char *str1, char *str2) {
  
  char *p = str2;

  while (*str1 != '\0') {
   
    if (strncmp(str1, p, strlen(str2)) == 0) {
      
      return 1;
    }

    str1++;
  }


  return 0;
}

int main() {
  /* Declara duas strings. */
  char str1[] = "Esta string contem a palavra 'string'";
  char str2[] = "string";


  int ocorre = ocorre_dentro(str1, str2);

  /* Imprime o resultado. */
  if (ocorre) {
    printf("A string 'string' ocorre dentro da string 'Esta string contém a palavra 'string''.\n");
  } else {
    printf("A string 'string' nao ocorre dentro da string 'Esta string contém a palavra 'string''.\n");
  }

  return 0;
}
