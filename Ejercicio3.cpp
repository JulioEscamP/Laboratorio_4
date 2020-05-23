#include <iostream>
using namespace std;
int num1;
int main(){
    cout<<"Programa que verifica si un numero es positivo: "<<endl;
cout<<"Escriba el numero: "<<endl;
cin>> num1;

if (num1 >0){
    cout<< "El numero es positivo :)"<<endl;
}
else if (num1==0){
    cout<< "El numero es cero :l"<<endl;
}
else{
    cout<<"El numero es negativo :("<<endl;
}
return 0;
}
