#include <iostream>
 using namespace std;

  int main (){
    cout << "Menu:\n" <<endl;

    int opcion;

    cout <<"Selecciona una opcion del 1 al 4: " <<endl;
    cout <<"1.Sumar" <<endl;
    cout <<"2.Restar" <<endl;
    cout <<"3.Multiplicar" <<endl;
    cout <<"4.Dividir" <<endl;
    cin >> opcion ;

    switch (opcion)
    {
    case 1:
       cout <<"Elegistes sumar" <<endl;
        break;
    
    case 2:
        cout <<"Elegistes Restar"<<endl;
        break;

    case 3:
        cout <<"Elegistes Multiplicar"<<endl;
        break;

    case 4:
        cout <<"Elegistes Dividir"<<endl;
        break;
    
    default:
        cout <<"Opcion invalida" <<endl;
        break;
    }
    return 0;
  };