#include <iostream>
#include <conio.h>
#include <stdlib.h>

using namespace std;

int main()
{
    float vectormax[1000], vectormin[1000];
    int i,j,contador=0;

    while((vectormax[i]!=0)&&(vectormin[j]!=0))
    {
            for((i=0);(i++))
            {
                for(j=0;j++)
                {
                   cout<<"Ingrese el valor maximo y minimo respectivamente: ( ";
        cin>>vectormax[i];
        cout<<" ; ";
        cin>>vectormin[j];
        cout<<" )"<<endl;
        contador++;
                }
            }
    }



    getch();
    return 0;
}
