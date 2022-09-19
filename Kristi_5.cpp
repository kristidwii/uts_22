#include <iostream>
using namespace std;

int main() {
  
    //deklarasi variabel
    float kehadiran, tugas, uts ,uas ,nilai_akhir;
    char nilai_huruf;
    
    cout<<"program menghitung nilai akhir"<<endl;
    cout<<"------------------------------"<<endl;
    
    //proses input
    cout<<"masukan nilai kehadiran : ";
    cin>>kehadiran;
    
    cout<<"masukan nilai tugas     : ";
    cin>>nilai tugas;
    
    cout<<"masukan nilai uts       : ";
    cin>>nilai uts;
    
    cout<<"masukan nilai uas       : ";
    cin>>nilai uas;
    
    //rumus
    Nilai_akhir=((kehadiran*0.1)+(nilai tugas*0.2)+(nilai uts*0.3)+(nilai uas*0.4));
    
    if(nilai_akhir>=80){
        nilai_huruf='A';
    }else if (nilai_akhir>=70){
        nilai_huruf='B';
    }else if (nilai_akhir>=60){
        nilai_huruf='C';
    }else  {
        nilai_hutuf='E';
    }
    
    //proses output
    cout<<"nilai akhir : "nilai_akhir<<endl;
    cout<<"nilai huruf : "nilai_huruf<<endl;
   
}   