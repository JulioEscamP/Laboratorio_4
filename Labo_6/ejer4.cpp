#include <iostream>
using namespace std;
int read(int arr1[],int arr2[]);
int sum(int arr1[],int arr2[]);
int arr3[3];

int main(){
    cout<<"Programa que lee dos arrays para sumarlos"<<endl<<endl;
int arr1[3]={2,2,13};
int arr2[3]={4,7,0};
int arr3[3];
read(arr1,arr2);
sum(arr1,arr2);
return 0;
}

int read(int arr1[],int arr2[]){
cout<<"Arrays:"<<endl;

for(int i=0;i<3;++i){
cout<<arr1[i]<<" ";
}
cout<<endl<<endl;
for(int n=0;n<3;++n){
cout<<arr2[n]<<" ";
}
}

int sum(int arr1[],int arr2[]){
cout<<endl<<"suma:"<<endl;
for(int a=0;a<3;++a){
arr3[a]=arr1[a]+arr2[a];
cout<<arr3[a]<<" ";
}
}
