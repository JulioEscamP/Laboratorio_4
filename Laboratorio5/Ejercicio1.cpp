#include <iostream>
using namespace std;
int mcd(int n1, int n2);
int main(){
    int n1 , n2;
    cout<<"Calculadora de mcd para 2 numeros"<<endl<<endl;
    cout<<"Ingrese el numero mayor "<<endl;
    cin>>n1;
    cout<<"Ingrese el numero menor "<<endl;
    cin>>n2;
    cout << "El mcd de: "<<n1<<" y "<<n2<<" es "<< mcd(n1, n2)<<endl;

    return 0;
}

int mcd(int n1, int n2) {
    if (n2 == 0){
        return n1;
    }
        else{
        n2%=n1%n2;
    return n2;
        }
}
