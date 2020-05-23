#include <iostream>
#include <string>
using namespace std;
string pala;

int main(){
cout<<"Programa que verifica si la palabra inicia como termina"<<endl;
cout<<endl;
cout<<"Ingrese la palabra"<<endl;
cin>> pala;

int ult=pala.length();
if (pala.at(ult-1)==pala.at(0)){
    cout<< "Terminan igual :D, terminan con: "<<endl;
    cout<< pala[0]<<endl;
    cout<< pala.at(ult-1)<<endl;
}
else {
    cout<< "las palabras no terminan igual :(, terminan con: "<<endl;
    cout<< pala[0]<<endl;
    cout<< pala.at(ult-1)<<endl;
}
return 0;
}
