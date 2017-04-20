#include <stdio.h>
#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int n;
    cout<<"Ingrese un numero: ";
    cin>>n;

    switch (n)
    {
    case 0:
        cout<<"cero";
        break;
    case 1:
        cout<<"uno";
        break;
    case 2:
        cout<<"dos";
        break;
    case 3:
        cout<<"tres";
        break;
    case 4:
        cout<<"cuatro";
        break;
    case 5:
        cout<<"cinco";
        break;
    case 6:
        cout<<"seis";
        break;
    case 7:
        cout<<"siete";
        break;
    case 8:
        cout<<"ocho";
        break;
    case 9:
        cout<<"nueve";
        break;
    case -1:
        cout<<"Salio del programa";

    default:
        cout<<"Numero no permitido";
        break;

    }


    return 0;
}
