/
//  main.cpp
//  arrays
//
//  Created by Tugba on 9.05.2019.
//  Copyright © 2019 Tugba. All rights reserved.
//

#include <iostream>
using namespace std;

int main() {

    int dizi[9]={35,20,44,45,70,33,12,40,27};
    int degistirme_oldumu=0;
    for (int i=0; i<8; i++) {
        for (int k=0; k<8-i; k++) {
            if (dizi[k]>dizi[k+1]) {
                int tmp; // gecici bir değişken atadık yer değişebilmeleri için.
                tmp=dizi[k+1];
                dizi[k+1]=dizi[k];
                dizi[k]=tmp;
                degistirme_oldumu=1;
            }
        }
        if (degistirme_oldumu==0) {
            break;
        }
    }
    cout << "dizi sırasıyla sıralanmıştır. Şu şekildedir: " << endl;
    for (int i=0; i<9; i++) {
        cout << dizi[i] << endl;
    }
    
    
    return 0;
}

