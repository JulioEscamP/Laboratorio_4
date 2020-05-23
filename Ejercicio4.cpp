#include <iostream>
#include <string>
using namespace std;
int main(){
    int L;
string wea;
    cout<<"Programa que verifica si la palabra es mayor a 10 caracteres"<<endl;
    cout<<"Ingrese la palabra"<<endl;
    cin>>wea;

    L = wea.length()%2;
if (wea.length()==10){
        cout<<"Su palabra tiene cabalito 10 caracteres :D y es par";
}

else if (L==0 && wea.length()>10){
    cout<<"Su palabra tiene mas de 10 caracteres :) y es par";
}
else if (L>0 && wea.length()>10){
    cout<<"Su palabra tiene mas de 10 caracteres :) y es impar";
}
else if (L>0 && wea.length()<10){
    cout<<"Su palabra tiene menos de 10 caracteres y es impar";
}
else if (L==0 && wea.length()<10){
    cout<<"Su palabra tiene menos de 10 caracteres y es par";
}

return 0;
}
