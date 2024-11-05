#include<iostream>

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


    return 0;
}