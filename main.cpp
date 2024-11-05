#include<iostream>
#include "operaciones/operaciones.h"

using namespace std;

int numero;

int main()
{
    cout<<"-----------------------------------"<<endl;
    cout<<"            EJERCICIO_1            "<<endl;
    cout<<"-----------------------------------"<<endl;

    cout<<"Ingrese un numero: ";
    cin>>numero;

    if(numero%2 == 0)
    {
        cout<<"El numero es par"<<endl;
    }
    else
    {
        cout<<"El numero es impar"<<endl;
    }
    if(numero == 0)
    {
        cout<<"El numero es cero"<<endl;
    }

    cout<<"-----------------------------------"<<endl;
    cout<<"            EJERCICIO_2            "<<endl;
    cout<<"-----------------------------------"<<endl;

    int numero2;

    cout<<"Ingrese un numero: ";
    cin>>numero2;

    switch(numero2)
    {
    case 1:
        cout<<"Es lunes";
        break;

    case 2:
        cout<<"Es martes";
        break;

    case 3:
        cout<<"Es miercoles";
        break;

    case 4:
        cout<<"Es jueves";
        break;

    case 5:
        cout<<"Es viernes";
        break;

    case 6:
        cout<<"Es sabado";
        break;

    case 7:
        cout<<"Es domingo";
        break;

    default :
        cout<<"Ingresa un numero del 1 al 7";

    }

    cout<<"-----------------------------------"<<endl;
    cout<<"            EJERCICIO_3            "<<endl;
    cout<<"-----------------------------------"<<endl;

    int a, b, c, d, e, f, g, h;

    cout<<"Ingrese la nota 1: ";
    cin>>a;

    cout<<"Ingrese la nota 2: ";
    cin>>b;

    cout<<"Ingrese la nota 3: ";
    cin>>c;

    cout<<"Ingrese la nota 4: ";
    cin>>d;

    cout<<"Ingrese la nota 5: ";
    cin>>e;

    cout<<"Ingrese la nota 6: ";
    cin>>f;

    cout<<"Ingrese la nota 7: ";
    cin>>g;

    cout<<"Ingrese la nota 8: ";
    cin>>h;

    //cout<<"El promedio de las notas es: "<<promedio(a, b, c, d, e, f, g, h)<<endl;
    //
    //Lo escribo a modo de comentario porque no se puede ejcutar.Debido
    //a que por alguna razón no se incluye la función promedio que se
    //encuentra en operaciones.h.

    cout<<"-----------------------------------"<<endl;
    cout<<"            EJERCICIO_4            "<<endl;
    cout<<"-----------------------------------"<<endl;

    double precio1, precio2, precio3;

    cout<<"Ingrese el primer precio: ";
    cin>>precio1;

    cout<<"Ingrese el segundo precio: ";
    cin>>precio2;

    cout<<"Ingrese el tercer precio: ";
    cin>>precio3;









    return 0;
}