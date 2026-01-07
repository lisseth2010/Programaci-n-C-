#include <iostream>
using namespace std;

int main(){
    int numero;
    int i = 1;
    long long factorial = 1;

    cout << "Ingrese hasta cual numero quiere factoriar: ";
    cin >> numero;

    while ( i <= numero){

    factorial = factorial * i;
    cout << i << "!: "<< factorial << endl;
    i++;
    }

    return 0;
    

}