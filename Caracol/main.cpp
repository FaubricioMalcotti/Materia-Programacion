#include<iostream>
#include<math.h>

using namespace std;

int main()
{

    float H,Ld,Ln;
    float a,b;
    int k=1;

    cout<<"Ingrese la profundidad del pozo en metros: "<<endl;
    cin>>H;
    cout<<"Ingrese la distancia que asciende el caracol en el dia (en metros): "<<endl;
    cin>>Ld;
    cout<<"Ingrese la distancia que desciende el caracol en la noche (en metros): "<<endl;
    cin>>Ln;

    a=Ld-Ln;

    if(a>0)
    {
        b=a;
        while(b<H)
        {
            k++;
            b=a*k;
        }

        cout<<"El caracol sale en "<<k<<" dias"<<endl;
    }

    else
    {
        cout<<"EL caracol nunca sale del pozo :("<<endl;
    }

return 0;
}
