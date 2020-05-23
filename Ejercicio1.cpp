#include <iostream>
using namespace std;
int num1,num2;
int main(){
    cout<<"Programa que verifica si un numero es divisible entre otro. "<<endl;
cout<<"Escriba el dividendo: "<<endl;
cin>> num1;
cout<<"Escriba el divisor: "<<endl;
cin>> num2;
num1%=num2;
if (num1 ==0){
    cout<< "El numero es divisible entre "<<num2<<" :)"<<endl;
}
else{
    cout<<"El numero no es divisible entre "<<num2<<" :("<<endl;
}
return 0;
}
