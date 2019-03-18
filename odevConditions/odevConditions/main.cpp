//
//  main.cpp
//  odevConditions
//
//  Created by Tugba on 16.03.2019.
//  Copyright © 2019 Tugba. All rights reserved.
//

#include <iostream>
using namespace std;
int main() {
    // insert code here...
   
    int x,y,z;
    cout<<"birinci sayıyı giriniz."<<endl;
    cin>>x;
    cout<<"ikinci sayıyı giriniz."<<endl;
    cin>>y;
    cout<<"üçüncü sayıyı giriniz."<<endl;
    cin>>z;
    
    if((x>y && x<z) || (x>z && x<y)x ) { // b----a----c c-----a----b
        cout<<" a, b ve c sayıları arasındadır. "<<endl;
    }
    else{
        cout<<"a, b ve c sayıları arasında değildir."<<endl;
    }
    if(x==y && x<z){
        cout<<"x, y'ye eşittir ve zden kucuktur."<<endl;
    }
    else{
        cout<<"x y'ye eşit değildir veya zden kucuk değildir."<<endl;
    }
    if(x>y || x>z){
        cout<<"x y den veya zden buyuktur."<<endl;
    }
    else{
        cout<<"x y den ve zden buyuk değildir veya eşittir."<<endl;
    }
    if(x==y && x==z){
        cout<<"uc sayı birbirine eşittır."<<endl;
    }
    else{
        cout<<"uc sayı birbirine eşit değildir."<<endl;
    }


    
    return 0;
}
