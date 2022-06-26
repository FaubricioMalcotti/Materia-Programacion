#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int x;

int main()
{
 cout<<"Bienvenido al inventario de la CIA."<<endl;
 cout<<"\nEscriba 1 si desea crear un inventario."<<endl;
 cout<<"Escriba 2 si desea leer el inventario creado."<<endl;
 cout<<"Escriva 3 si desea adjuntar mas informacion al inventario."<<endl;
 cout<<"\n";

 in:

 cin>>x;
 cout<<"\n";

 if(x==1)
 {
     FILE *archivo;
     archivo=fopen("inventario.txt","w");
     printf("Escriba lo que desee adjuntar al inventario");
     char pal[10];
     int n=1;
     int y;
     for(y=0;y<=9;y++)
     {
         printf("\nObjeto %d:",n);
         scanf("%s",pal);
         fprintf(archivo,"%s\n",pal);
         n++;
     }
     return 0;

 }
 if(x==2)
 {
     FILE *archivo2;
     archivo2=fopen("inventario.txt","r");
     int c;
     while((c=fgetc(archivo2))!=EOF)
     {
         putchar(c);
     }
     system("pause");
     return 0;
 }
 if(x==3)
 {
      FILE *archivo;
     archivo=fopen("inventario.txt","a");
     printf("Escriba lo que desee adjuntar al inventario");
     char pal[10];
     int n=1;
     int y;
     for(y=0;y<=9;y++)
     {
         printf("\nObjeto %d:",n);
         scanf("%s",pal);
         fprintf(archivo,"%s\n",pal);
         n++;
     }
     return 0;
 }
 else
 {
     cout<<"Por favor escriba un numero entero entre 1 y 3 para poder acceder a alguna de las funciones disponibles."<<endl;
     system("pause");
     goto in;

 }

}
