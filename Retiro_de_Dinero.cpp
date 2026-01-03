#include <iostream>

using namespace std;

int main(){
    int cantidad, total = 1000;
    cout << "Ingrese la cantidad a retirar: ";
    cin >> cantidad;

    if ( cantidad <= total){
        total -= cantidad;
        cout << "Retiro exitoso. Su nuevo saldo es: "<<total <<endl;
    }else{
        cout <<" Saldo insuficiente."<<endl;
    }
    return 0;
}