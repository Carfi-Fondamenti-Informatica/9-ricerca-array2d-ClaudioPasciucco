#include <iostream>
#include "lib.h"
using namespace std;

int main(){
  int posizione;
  char a[10][20], f[1][20];
  for (int i=0; i<10; i++){
    cin >> a[i];
  }
  cin >> f[0];
  
  if (find(a, f, posizione)){
    cout << posizione << endl;
  }else{
    cout << "non presente" << endl;
  }
  
  return 0;
}
