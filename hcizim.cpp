#include <iostream>
using namespace std;
int main() {
int sayi;
    do {
         cout << "Lütfen H harfinin eni için bir sayı giriniz." << endl;
         cin>>sayi;
    } while (sayi<5 || sayi>11);
   
    
    for (int i=1; i<=sayi; i++) {
        cout<<"*";
        for (int k=1; k<=(sayi-2); k++) {
            cout<< " ";
        }
        cout<<"*";
        cout<<"\n";
    
    }
    
    for (int j=1; j<=sayi; j++) {
        cout<<"*";
    }
    cout<<"\n";
    
    for (int i=1; i<=sayi; i++) {
        cout<<"*";
        for (int k=1; k<=(sayi-2); k++) {
            cout<< " ";
        }
        cout<<"*";
        cout<<"\n";
        
    }
     return 0;
}
