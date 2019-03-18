//
//  main.cpp
//  Deneme_Conditions
//
//  Created by Tugba on 16.03.2019.
//  Copyright © 2019 Tugba. All rights reserved.
//

#include <iostream>
using namespace std;
int main() {
    // insert code here...
    
    int x,y;
    cout<<"lütfen birinci sayıyı giriniz.\n"<<endl;
    cin>>x;
    cout<<"lütfen ikinci sayıyı giriniz.\n"<<endl;
    cin>>y;
   if(x==y){
         cout<<"sayılar eşittir."<<endl;
         cout<<"sayılar farklı değildir."<<endl;
    }
    else{
        cout<<"sayılar eşit değildir."<<endl;
        cout<<"sayılar farkldır."<<endl;
    }
   
    if(x>y){
        cout<<"birinci sayı ıkıncı sayıdan buyuktur."<<endl;
        cout<<"ikinci sayı birinci sayıdan buyuk değildir."<<endl;
    }
    else{
        cout<<"birinci sayı ıkıncı sayıdan buyuk değildir."<<endl;
        cout<<"ikinci sayı bırıncı sayıdan buyuktur."<<endl;
    }
    if(x<=y){
        cout<<"birinci sayı kucuk eşittir."<<endl;
        cout<<"ikinci sayı buyuk eşittir."<<endl;
    }
    else{
        cout<<"birinci sayı kucuk eşit değildir."<<endl;
        cout<<"ikinci sayı kucuk eşittir"<<endl;
    }
    
    
    return 0;
}
