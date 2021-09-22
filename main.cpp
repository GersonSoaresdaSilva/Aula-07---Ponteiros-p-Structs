/*Como um struct se torna um datatype*/

#include <iostream>
#include <cstdlib>

using namespace std;

typedef struct estr1 tes1; // struct estr1 recebe o alias tes1

struct estr1 {
  int x[10];
};

tes1 m1;  // novo datatype para utilizar a estruct
tes1 * ptrm1 = &m1;  // ponteiro criado e inicializado, recebe o endereço de m1.

int main () {

  for (int i=0; i<10;i++ ) 
  // m1.x [ i ] = i;  struct sem ponteiro
  ptrm1 -> x [i] = i;

  for (int i=0; i<10;i++ ) 
  // cout << m1.x [ i ] << endl;  struct sem ponteiro
  cout << ptrm1 -> x [i] << endl;

  return 0;
}