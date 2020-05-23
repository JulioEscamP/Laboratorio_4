#include <iostream>
using namespace std;
int num1;
int main(){
    cout<<"Programa que verifica si un numero es par o impar. "<<endl;
cout<<"Escriba el numero: "<<endl;
cin>> num1;
num1%=2;
if (num1 ==0){
    cout<< "El numero es par :)"<<endl;
}
else{
    cout<<"El numero no es par :("<<endl;
}
return 0;
}
