#include <stdio.h>
#include <iostream>

using namespace std;

int main()
{
    int j,x=0,temp,v,sum=0,may;
    cout<<"Ingrese el tamaño del arreglo: ";
    cin>>j;
    int lista[j];
    for(x=0;x<j;x++)
    {
        cout<<"Ingrese valor "<<x+1<<": ";
        cin>>lista[x];
    }
    temp=lista[0];
    v=j/2;
    may=lista[0];
    for(x=0;x<v;x++)
    {
        lista[x]=lista[j-1];
        lista[j-1]=temp;
        temp=lista[x+1];
        j--;
    }
    for(x=0;x<(j+v);x++)
    {
        cout<<lista[x]<<" ";
    }
    for(x=0;x<(j+v);x++)
    {
        sum+=lista[x];
    }
    cout<<"\nLa suma del arreglo es: "<<sum<<endl;
    for(x=0;x<(j+v);x++)
    {
        if(may<lista[x])
            may=lista[x];
    }
    cout<<"El mayor del arreglo es: "<<may;
    return 0;
}
/*int main()
{
    int lista[179];
    int x,cont,y;
    for(x=2;x<=1000;x++)
    {
        cont=0;
        for(y=1;y<1000;y++)
        {
            if(((x/y)==1) || ((x/y)==x))
                cont++;
        }
        if(cont<3)
            lista[x-2]=x;
    }

    for(x=0;x<179;x++)
    {
        cout<<lista[x]<<" ";
    }
}*/


