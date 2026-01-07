#include <iostream>
using namespace std;

int main(){
  int numero;
  int i = 1;
  long long factorial = 1;

  cout <<"Ingrese hasta que numero factorial quiere calcular: "<< endl;
  cin >> numero;
  
  do{
    
    factorial = factorial * i;
    cout << i << "! = " << factorial << endl;
    i++;
  }while (i <= numero);

  return 0;
  
}