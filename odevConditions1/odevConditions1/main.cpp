//
//  main.cpp
//  odevConditions1
//
//  Created by Tugba on 17.03.2019.
//  Copyright © 2019 Tugba. All rights reserved.
//

#include <iostream>
using namespace std;
int main() {
    // insert code here...
    
    int x,y,z;
    
    cout<<"birinci sayıyı giriniz.";
    cin>>x;
    cout<<"ikinci sayıyı giriniz.";
    cin>>y;
    cout<<"ücuncu sayıyı gırınız.";
    cin>>z;
    
    int enbuyuk = x;
    
    if(y>enbuyuk)
        enbuyuk=y;
        
    if (z>enbuyuk)
        enbuyuk = z;
    
    int enkucuk = x;
    
    if(y<enkucuk)
        enkucuk= y;
    
    if(z<enkucuk)
        enkucuk=z;
    
    cout<<"enbuyuk:"<<enbuyuk<<endl;
    cout<<"enkucuk:"<<enkucuk<<endl;
    
    return 0;
}
