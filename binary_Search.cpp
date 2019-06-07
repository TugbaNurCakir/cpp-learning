//
//  main.cpp
//  searchAlgoritms
//
//  Created by Tugba on 6.06.2019.
//  Copyright © 2019 Tugba. All rights reserved.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
   // kullanıcıdan 15 değer aldıktan sonra bu değerlerin dizide olup olmadıgını ikili algoritması ile listeleyen program.
    //binary search...
    
    int array[11]={2,13,42,60,61,78,83,88,94,99,103};
    int bulunma_durumu=0;
    int first=0, last=10;
    int mid;
    int kontrol_edilecekler_listesi[15];
    
    cout << "kontrol etmek istediğiniz sayıları giriniz." <<endl;
    for (int sayac=0; sayac<15; sayac++){
    
        cout<< "kontrol edilecek sayıların Listesini oluşturmak için sayı giriniz. "<<endl;
        int aranan_sayi;
        cin>>aranan_sayi;
        kontrol_edilecekler_listesi[sayac]=aranan_sayi;
        
    }
    
    for (int sayac=0; sayac<15; sayac++) {
        while (first<=last) {
            mid=(first+last)/2;
            if (array[mid]==kontrol_edilecekler_listesi[sayac]) {
                bulunma_durumu=1;
                cout<< kontrol_edilecekler_listesi[sayac] << "bulunmaktadır." << endl;
                break;
                
            }
            else if (kontrol_edilecekler_listesi[sayac]<array[mid]){
                last=mid-1;
            }
            else{
                first=mid+1;
            }
            
        }
        if (bulunma_durumu==0) {
            cout << kontrol_edilecekler_listesi[sayac]<< "yoktur." << endl;
            
        }
        bulunma_durumu=0;
        first=0;
        last=10;
        
        
    }
   
    return 0;
}
