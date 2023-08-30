#include <stdio.h>

int main() {
  char carater = 0; // ou '\0', '\n', '\t'; // 'a', 'b', 'c', -128 a 127 - 1 byte

  unsigned char caracter_sem_sinal; // 0 a 225
  
  char string[10]; // "um texto" 
  
  int inteiro; // -1, 0, 1 ... -2147483648 a 2147483647 - 4 bytes

  unsigned int inteiro_sem_sinal; // 0 a 4294967295 4 bytes

  short int inteiro_curto; // -32768 a 32767 - 2 bytes

  unsigned short int interio_curto_sem_sinal; // 0 a 65535 - 2 bytes

  long int inteiro-longo; // -9223372036854775808 a 9223372036854775807 - 8 bytes

  unsigned long int interio_longo_sem_sinal; // 0 a 18446744073709551615 - 8 bytes

  
  float flutuante; // 0.123456f - 4 bytes
  
  double duplo; // 0.12346789012345 - 8 bytes
  
  void nada; // 1 byte
  
  return 0;
}