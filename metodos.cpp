#include <stdio.h>
#include <iostream>

using namespace std;

int suma(const int lista[],const int length)
{
    int sum=0;
    for(int x=0;x<length; sum+=lista[x++]);
    return sum;
}

int promedio(const int lista[],const int length)
{
    int sum=suma(lista,length);
    return sum/length;
}

int invertir(int lista[],int length)
{
    int temp=lista[0];
    int v=length/2;
    int y=length;
    for(int x=0;x<v;x++)
    {
        lista[x]=lista[length-1];
        lista[length-1]=temp;
        temp=lista[x+1];
        length--;
    }
    cout<<"la lista invertida es: ";
    for(int x=0;x<y;x++)
    {
        cout<<lista[x]<<" ";
    }

}

int ordenar(int lista[],int length)
{
    int i,j,temp;
    for(i=1;i<length;i++)
    {
        temp=lista[i];
        j=i-1;
        while(j>0 && lista[j]>temp)
        {
            lista[j+1]=lista[j];
            j--;
        }
        lista[j+1]=temp;
    }

    cout<<"la lista ordenada es: ";
    for(int x=0;x<length;x++)
    {
        cout<<lista[x]<<" ";
    }
}

int main()
{
    int n;
    cout<<"Ingrese el tamaño del arreglo: ";
    cin>>n;
    int lista[n];
    for(int x=0;x<n;x++)
    {
        cout<<"Ingrese valor "<<x+1<<": ";
        cin>>lista[x];
    }
    //cout<<"la suma es: "<<suma(lista,n);
    //cout<<"el promedio es: "<<promedio(lista,n);
    //cout<<invertir(lista,n);
    cout<<ordenar(lista,n);

    return 0;
}

