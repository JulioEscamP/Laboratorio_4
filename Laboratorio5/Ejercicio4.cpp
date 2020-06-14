#include <iostream>
using namespace std;
int dd,mm,aa;
bool ab(int aa);

int main(){
cout<<" Programa calendario"<<endl<<endl;
cout<<"1.Introduzca el dia"<<endl;
cin>>dd;
cout<<"2.Introduzca el mes"<<endl;
cin>>mm;
cout<<"3.Introduzca el ano"<<endl;
cin>>aa;
if(dd==30&&(mm==4||6||8||10||12)){
    dd=1;
    mm++;
    }
else if(dd==31&&(mm==1||3||5||7||9||11)){
    dd=1;
    mm++;
    }
else if(dd==29&&mm==2&&(ab(aa))==true){
    dd=1;
    mm++;
    }
else if(dd==28&&mm==2&&(ab(aa))==false){
    dd=1;
    mm++;
    }
else {
        dd++;
    }
if((mm==12)&&dd==1){
        mm=01;
    }
if(mm==1&&dd==1){
    aa++;
}

cout<<"Fecha dia siguiente:"<<dd<<"/"<<mm<<"/"<<aa<<endl;
cout<<ab(aa);
}

bool ab(int aa){
if(aa%400==0){
    cout<<"El ano es Bisiesto."<<endl;
        return true;
}
else if(aa%4==0&&aa%100!=0){
        cout<<"El ano es Bisiesto."<<endl;
        return true;
}
else{
    cout<<"El ano no es bisiesto"<<endl;
        return false;
    }
}
