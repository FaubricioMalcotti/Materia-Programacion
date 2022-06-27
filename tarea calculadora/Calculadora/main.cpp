#include <iostream>
#include <stdlib.h>
#include <math.h>

using namespace std;

int x;
float a,b,c;

int main()
{
    in:
    cout<<"Porfavor Ingrese un numero correspondiente al tipo de operacion que desea realizar:\n"<<endl;
    cout<<"1: Sumar\n2: Restar\n3: Multiplicar\n4: Dividir\n"<<endl;

    cin>>x;

    if(x==1)
    {
        cout<<"\nIngrese un numero: "; cin>>a;
        cout<<"Ingrese otro numero: "; cin>>b;

        c=a+b;

        cout<<"\nLa suma entre "<<a<<" y "<<b<<" es: "<<c;
    }
    if(x==2)
    {
        cout<<"\nIngrese un numero: "; cin>>a;
        cout<<"Ingrese otro numero: "; cin>>b;

        c=a-b;

        cout<<"\nLa resta entre "<<a<<" y "<<b<<" es: "<<c;
    }
    if(x==3)
    {
        cout<<"\nIngrese un numero: "; cin>>a;
        cout<<"Ingrese otro numero: "; cin>>b;

        c=a*b;

        cout<<"\nLa multilpicacion entre "<<a<<" y "<<b<<" es: "<<c;
    }
    if(x==4)
    {
        cout<<"\nIngrese un numero (numerador): "; cin>>a;
        cout<<"Ingrese otro numero (denominador): "; cin>>b;

        c=a/b;

        cout<<"\nLa division de "<<a<<" entre "<<b<<" es: "<<c;

    }
    else
    {
        cout<<"\nPor favor ingrese un numero entero correspondiente a alguna de las funciones ofrecidas."<<endl;
        system("pause");
        system("cls");
        goto in;
    }
    return 0;
}
