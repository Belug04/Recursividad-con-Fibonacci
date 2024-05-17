#include <iostream>

using namespace std;
int fibonacci(int numero)
{
    if(numero <= 1)
    {
        return numero;
    }
    else
    {
       return fibonacci(numero - 1) + fibonacci(numero - 2);

    }
}
int main()
{
    int indice;
    cout<<"Ingrese indice: "<<endl;
    cin>>indice;
    for(int i=0; i<indice; i++)
    {
        cout<< fibonacci(i)<< " ";
    }
    return 0;
}
