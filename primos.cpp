#include<stdio.h>
#include<iostream>

using namespace std;

int main()
{
    int i,x,cont,y,cont2=0;
    int lista[10000];
    cout<<"Ingrese el limite: ";
    cin>>i;

    for(x=2;x<i;x++)
    {
        cont=0;
        for(y=1;y<=x;y++)
            {
                if(x%y==0)
                {
                    cont++;
                }
            }
        if(cont==2)
        {
            lista[cont2]=x;
            cont2++;
        }
    }
    for(x=0;x<cont2;x++)
        cout<<lista[x]<<" ";

    return 0;
}
