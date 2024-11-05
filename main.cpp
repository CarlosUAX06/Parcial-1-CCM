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
        cout<<"Ingresa un numero del 1 al 7"<<endl;

    }

    cout<<"-----------------------------------"<<endl;
    cout<<"            EJERCICIO_3            "<<endl;
    cout<<"-----------------------------------"<<endl;

    int suma = 0, n, *p;

    cout<<"Introduce el numero de tareas: "; std::cin>>n;
    p = new int[n];
    for(int z_6=0; z_6<n; z_6++){
        cout<<"Introduce la nota "<<z_6+1<<": ";
        cin>>p[z_6];
        suma += p[z_6];
    }

    cout<<"Elementos introducidos: ";

    for(int z_6=0; z_6<n; z_6++) {
        cout<<p[z_6]<<",";

    }
    cout<<"Total: "<<suma<<endl;
    cout<<"Media: "<<(double)suma/n<<endl;
    delete[]p;

    //Este código ya lo tenia hecho desde casa



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