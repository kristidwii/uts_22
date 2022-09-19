#include <iostream>
using namespace std;


int main() {
    int p,l,t,
    float volume;
    
    cout<<"Masukan Panjang : "; 
    cin>>p;
    cout<<"Masukan Lebar   : ";
    cin>>l;
    cout<<"Masukan Tinggi  : ";
    cin>>t;
    
    volume=p*l*t; 
    
    cout<<"hasil volume balok adalah  : "<<volume;
    return 0;

}