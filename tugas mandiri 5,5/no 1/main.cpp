#include<iostream>

using namespace std;

int main(){

 int jam_masuk;
 int jam_keluar,lama;

 cout<<" Jam Masuk = ";
 cin>>jam_masuk;

 cout<<" Jam Keluar = ";
 cin>>jam_keluar;

  if(jam_keluar>= jam_masuk){
    lama= jam_keluar-jam_masuk;
  }
  else{
    lama= (12+jam_keluar)- jam_masuk ;
  }
 cout<<" Lama Bekerja = "<<lama<<" "Jam<<endl;
 }
