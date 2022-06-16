#include <iostream>
#include <conio.h>
#include <stdlib.h>

using namespace std;

int main()
{
    int N,M,d,f;
    char bandera[20][20];

   in:
    cout<<"Ingrese la distancia horizontal de la bandera (debe ser impar, mayor que 2 y menor que 20): "; cin>>N;
    cout<<"\nIngrese la distancia vertical de la bandera (debe ser impar, mayor que 2 y menor que 20): "; cin>>M;

    if((N%2==0)||(M%2==0))
    {
        cout<<"\nLa distancia horizontal y vertical deben ser numeros impares! porfavor intente de nuevo.."<<endl;
        system("pause");
        system("cls");

        goto in;
    }
    if((N>20)||(M>20))
    {
        cout<<"\nLas distancias horizontal y vertical deben ser menor que 20! porfavor intente de nuevo.."<<endl;
        system("pause");
        system("cls");

        goto in;
    }
    if((N<2)||(M<2))
    {
        cout<<"\nLas distancias horizontal y vertical deben ser mayores que 2! porfavor intente de nuevo.."<<endl;
        system("pause");
        system("cls");

        goto in;
    }
    else
    {
        d=(N+1)/2;
        f=(M+1)/2;

        cout<<"\n";

        for(int i=1;i<=M;i++)//CICLO DE LAS I
        {
            if(i==f)
            {
                for(int j=1;j<=N;j++)
                {
                    cout<<"+";
                }
            }
            else
            {
              for(int j=1;j<=N;j++)//CICLO DE LAS J, SE EJECUTA PRIMERO
              {
                if(j==d)
                {
                    cout<<"+";
                }
                else
                {
                    cout<<"0";
                }
              }
            }

            cout<<"\n";
        }


    }


getch();
}
