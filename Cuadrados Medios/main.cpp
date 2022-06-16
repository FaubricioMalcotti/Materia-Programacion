#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

using namespace std;

int main()

{
    int oportunidad=0;

in:
	int N;
	int n;
	int contador=1;
	int M;
	int m;
	int contador2=1;
	int k;
	int K;



	cout<<"\nEl numero semilla debe ser entero de 4 digitos y usted dispone de 3 intentos para ingresarlo correctamente"<<endl;
	cout<<"\nIgrese el numero semilla: "<<endl;
	cin>>N;

	n=N;
	while(n>=10){
        n=n/10;
        contador++;
    }

	if(contador==4)
    {
        M=pow(N,2);

        m=M;
        while(m>=10){
            m=m/10;
            contador2++;
            }
        if(contador2%2==0)
            {
             k=M%10000;
             K=M/10000;
             k=k/100;
             K=K%100;

             cout<<"El numero semilla al cuadrado es: "<<M<<endl;

             cout<<"El numero aleatorio es: "<<K<<k<<endl;
            }
        else{
            k=M%100000;
            K=k/10;

             cout<<"El numero semilla al cuadrado es: "<<M<<endl;

             cout<<"El numero aleatorio es: "<<K<<endl;
            }
        }
        else
            {
             cout<<"\nDEBE INGRESAR UN NUMERO SEMILLA DE CUATRO DIGITOS"<<endl;
             oportunidad++;

              if(oportunidad==3)
                {
                cout<<"\nOPORTUNIDADES AGOTADAS"<<endl;
                system("pause");
                return 0;
                }
            else
                {
                 cout<<"\nUsted lleva: "<<oportunidad<<" intentos"<<endl;
                 system("pause");
                 system("cls");
                 goto in;
                }
            }
}
