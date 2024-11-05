#include<iostream>

using namespace std;

int numero;

int main()
{

    cout<<"-----------------------------------"<<endl;
    cout<<"          EJERCICIO_1              "<<endl;
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


    return 0;
}