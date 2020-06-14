#include <iostream>
using namespace std;
bool ab(int n);
int n;
int main(){
cout<<"Funcion que calcula si un ano es bisiesto"<<endl<<endl;
cout<<"Ingrese el ano"<<endl;
cin>>n;
cout<<ab(n)<<endl;

}
bool ab(int n){
if(n%400==0){
    cout<<"El ano es Bisiesto."<<endl;
        return true;
}
else if(n%4==0&&n%100!=0){
        cout<<"El ano es Bisiesto."<<endl;
        return true;
}
else{
    cout<<"El ano no es bisiesto"<<endl;
        return false;
    }
}
