#include <iostream>
using namespace std;
int main() {
int sayi1;
    do{
        
        cout<< "Birinci sayıyı giriniz: ";
        cin>>sayi1;
       
    }while (sayi1<=0);
    
    for (int i=0; i<sayi1; i++) {
        for (int m=0; m<i; m++) {
            cout << " ";
        }
        
        for (int k=0; k<(sayi1-i); k++) {
            cout << "*";
        }
        cout << "\n";
    }
    
    
    
    return 0;
}
