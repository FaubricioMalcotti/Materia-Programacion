#include <iostream>
#include <conio.h>
#include <math.h>
#include <stdlib.h>

using namespace std;

int main()
{
    float lista[100],media=0,mediana=0,rango=0,de=0,aux,k,r,desv;
    int n;
in:
    cout<<"Ingrese el numero de datos a estudiar en la lista.. La lista acepta un MINIMO de 20 datos: ";
    cin>>n;

    if(n<20)
    {
        cout<<"El numero MINIMO de datos a ingresar en la lista debe ser de 20!.. porfavor intente de nuevo"<<endl;
        system("pause");
        system("cls");
        goto in;
    }
    else
    {
        for(int i=0;i<n;i++)//guardar datos
        {
            cout<<"Ingrese el dato a la lista: ";
            cin>>lista[i];
        }
        for(int i=0;i<n;i++)//mostrar datos
        {
            int u;
            u=i+1;
            cout<<"\n"<<u<<".- "<<lista[i];
            media=media+lista[i];
        }
        media=media/n;

        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                if(lista[i]<lista[j])
                {
                    aux=lista[i];
                    lista[i]=lista[j];
                    lista[j]=aux;
                }
            }
        }

        cout<<"\n"<<"\nLa media es: "<<media<<"\n"<<endl;

        if(n%2!=0)
        {
            cout<<"la mediana es: "<<lista[n/2]<<endl;
        }
        else
        {
            k=(lista[(n+1)/2]+lista[n/2])/2;
            cout<<"la mediana es: "<<k<<endl;
        }

        r=lista[0]-lista[n-1];
        cout<<"\nEL rango es: "<<r<<endl;

        for(int i=0;i<n;i++)
        {
            de=de+pow(lista[i]-media,2);
        }
        desv=sqrt(de/n);
        cout<<"\nLa desviacion estandar es: "<<desv<<endl;
    }
    getch();
    return 0;
}
