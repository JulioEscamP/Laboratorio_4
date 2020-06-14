#include <iostream>
using namespace std;
int hh,mm,ss;

int main(){
cout<<" Programa que dice la hora"<<endl<<endl;
cout<<"1.Introduzca la hora (formato 24h)"<<endl;
cin>>hh;

cout<<"2.Introduzca los minutos"<<endl;
cin>>mm;

cout<<"3.Introduzca los segundos"<<endl;
cin>>ss;
if(ss==59){
    ss=00;
    }
else{
    ss++;
    }
if(mm==59&&ss==00){
        mm=00;
    }
    else if(ss==00){
        mm++;
    }
if(hh==24&&mm==00){
    hh=00;
}
else if(mm==00){
    hh++;
}

cout<<hh<<":"<<mm<<":"<<ss<<endl;
}
