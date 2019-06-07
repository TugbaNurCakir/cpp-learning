//
//  main.cpp
//  sorting_Algorithms
//
//  Created by Tugba on 7.06.2019.
//  Copyright © 2019 Tugba. All rights reserved.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
  
    int dizi[9]={35,20,44,45,70,33,12,40,27};
    int min_indis,tmp;
    for (int i=0; i<9; i++) {
        min_indis=i;
        for (int k=i+1; k<9; k++) {
            if (dizi[k]<dizi[min_indis]) {
                min_indis=k;
            }
            
        }
        tmp=dizi[i];
        dizi[i]=dizi[min_indis];
        dizi[min_indis]=tmp;
    }
    cout << "Dizi sıralanmıştır. Şu şekildedir: "<< endl;
    for (int a=0; a<9; a++) {
        cout << dizi[a] << endl;
    }
  
    return 0;
}
