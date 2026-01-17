#include <iostream>
using namespace std;

int main(){
    int estudiantes = 3;
    int calificaciones = 4;

    float promedios[3];

    for(int i= 1; i <= estudiantes; i++){
        float suma = 0;
        float nota;

        cout << "  "<<i<< endl;
    
        for(int j = 1; j<= calificaciones; j++){
            cout << "Ingrese la calificacion: "<<j<<endl;
            cin >> nota;

            while ( nota < 0 || nota > 100){
                cout << "Error la calificacion es invalida ";
                cout <<"Ingrese nuevamente la calificacion"<< j << endl;
                cin >> nota;
            }
            suma += nota;
        }
        float promedio = suma / calificaciones;
        promedios[i-1] = promedio;
        cout << "El promedio del estudiante es" << i << ":"<< promedio <<endl;
    }
    //Parte 2:Menu de opciones//

    int opcion;
    int intento = 0;

    do{
        cout <<"Menu"<<endl;
        cout << "1.Ver todos los promedios" << endl;
        cout << "2.Ver estudiantes aprobados (>=70)"<< endl;
        cout << "3.Ver estudiantes reprobados (<70)"<< endl;
        cout << "4.Ver calificaciones en letras" << endl;
        cout << "5.Ver el mejor promedio"<< endl;
        cout << "6.Salir"<< endl;
        cout << "Seleccione una opcion (1-6): ";
        cin >> opcion;
        cout << endl;

        switch (opcion)
        {
        case 1:
           for(int i = 0; i < estudiantes; i++){
        cout <<"Estudiante  "<< i + 1 <<": "<< promedios[i] << endl;
        }
            break;
        case 2:
        for(int i = 0; i < estudiantes; i++){
        if (promedios [i]>= 70){
        cout << "Estudiantes "<< i + 1 << ": "<< promedios[i] <<endl;
        }
        }
            break;
        case 3:
        for(int i = 0; i < estudiantes; i++){
        if (promedios [i]< 70){
            cout <<"Estudiantes "<< i + 1 <<": "<< promedios[i]<< endl;
        }
        }
            break;
        case 4:
        for(int i = 0; i < estudiantes; i++){
        if(promedios[i] >= 90){
            cout <<"A"<< endl;
        }else if(promedios[i] >= 80){
            cout <<"B"<< endl;
        }else if(promedios [i]>=70){
            cout<< "C" << endl;
        }else if(promedios[i] >=60){
            cout <<"D" << endl;
        }else if (promedios[i] <= 59){
            cout << "F" << endl;
        }
        }
        break;
        case 5:
        for(int i = 1; i < estudiantes; i++){
            if(promedios[i] >= 95){
                cout << "El mejor promedio "<< i + 1 << ": "<< promedios[i]<< endl;
            }
        }
        break;
        case 6:
        cout<<"Saliendo del menu..."<< endl;
        break;

        default:
        cout << "Error por favor ingrese opcion del 1-6"<< endl;
            break;
        }



    }while( opcion != 6);
    cout << "Gracias por usar nuestro menu"<< endl;

  
  
    return 0;
}