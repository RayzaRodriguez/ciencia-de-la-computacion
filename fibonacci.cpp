#include<iostream>
using namespace std;

int fibo(int n)
{
    if(n<2)
       return n;
    else
       return fibo(n - 2) + fibo(n - 1);
}

int main()
{
    int i, num ;
    cout<<"Ingrese la cantidad de numeros fibonacci que desea: ";
    cin>>num;
    cout<<"Su lista es: "<<endl;
    for(i=0; i<num; i++)
    {
        cout<< fibo(i)<<" ";
    }

    return 0;
}
