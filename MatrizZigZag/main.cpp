#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
    int numero[100][100],filas,columnas;

    cout<<"Escriba el numero de filas: "<<endl;
    cin>>filas;
    cout<<"\nEscriba el numero de columnas: "<<endl;
    cin>>columnas;

    //ALMACENAMIENTO DE DATOS EN LA MATRIZ
    for(int i=1;i<=filas;i++)
    {
        if(i%2==0) //SI LA FILA ES NUMERO PAR, ENTONCES SE ORDENARA DE DERECHA A IZQUIERDA
        {
         for(int j=columnas;j>0;j--)
        {
            cout<<"Escriba un numero para guardar: ["<<i<<"]["<<j<<"] ";
            cin>>numero[i][j];
        }
        }
        else    //SI LA FILA ES IMPAR, SE ORDENARA DE IZQUIERDA A DERECHA
        {
            for(int j=1;j<=columnas;j++)
        {
            cout<<"Escriba un numero para guardar: ["<<i<<"]["<<j<<"] ";
            cin>>numero[i][j];
        }
        }

    }           //FINALMENTE SE OBTIENE ESTE EFECTO ZIG ZAG
    cout<<"\n";

                //MOSTRANDO LA MATRIZ
    for(int i=1;i<=filas;i++)
    {
        for(int j=1;j<=columnas;j++)
        {
            cout<<numero[i][j];
        }
        cout<<"\n";
    }

    getch();
    return 0;
}
