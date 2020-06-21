#include <iostream>
using namespace std;

int main(){
int arre[10]={1,1,1,2,2,3,4,4,4,4};
int num;
int cont=0;

cout<<"Programa que indica cuantas veces se repite un numero entre 1 y 4"<<endl;
cout<<"introduzca numero"<<endl;
cin>>num;

for(int j=0;j<10;++j){
if (num==arre[j]){
cout<<"El numero se encuentra en la posicion: "<<j<<endl;
++cont;
}
}
cout<<"El numero se encuentra: "<<cont<<" veces";

return 0;
}
