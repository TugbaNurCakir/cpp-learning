//
//  main.cpp
//  Nested_Loops
//
//  Created by Tugba on 25.04.2019.
//  Copyright © 2019 Tugba. All rights reserved.
//

#include <iostream>
using namespace std;
int main() {
    
    
    int sayi1;
    int sayi2;
    
    cout<< "   Çarpım Tablosuna Hoşgeldiniz" <<endl;
    cout<<"\n";
    
    cout<< ">>>>>>>-----*****......****-----<<<<<<<" <<endl;
    cout<<"\n";
    
    cout<< "Lütfen çarpmak istediğiniz sayıları giriniz" <<endl;
    
    do{
        cout<< "Birinci sayıyı giriniz: ";
        cin>>sayi1;
        cout<< "İkinci sayıyı giriniz: ";
        cin>>sayi2;
    }while (sayi1<=0 || sayi2<=0);
    
    for (int i=1; i<=sayi1; i++) {
        for (int k=1; k<=sayi2; k++) {
            cout<< i << "x" << k << "=" << i*k << "\t\t";
            
        }
        cout<<"\n";
    }
   
    return 0;
}
