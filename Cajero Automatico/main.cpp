#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    int billete1,billete5,billete10,billete20,billete50,billete100,x;

    cout<<"Ingrese la cantidad de $ que desea retirar: ";
    cin>>x;
    cout<<"\n";


    billete100=x/100;
    x=x%100;

    billete50=x/50;
    x=x%50;

    billete20=x/20;
    x=x%20;

    billete10=x/10;
    x=x%10;

    billete5=x/5;
    x=x%5;

    billete1=x/1;

    if(billete100!=0)
    {
       cout<<billete100<<" Billetes de 100$"<<endl;
    }
    if(billete50!=0)
    {
       cout<<billete50<<" Billetes de 50$"<<endl;
    }
    if(billete20!=0)
    {
       cout<<billete20<<" Billetes de 20$"<<endl;
    }
    if(billete10!=0)
    {
       cout<<billete10<<" Billetes de 10$"<<endl;
    }
    if(billete5!=0)
    {
        cout<<billete5<<" Billetes de 5$"<<endl;
    }
    if(billete1!=0)
    {
       cout<<billete1<<" Billetes de 1$"<<endl;
    }

    return 0;
}
