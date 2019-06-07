//kullanıcıdan herbir öğrencinin 3 ayrı notunu ve okul numarasını alıp ogrencı numarasına gore ortalamasını soyleyen program


//  main.cpp
//  arrays
//
//  Created by Tugba on 9.05.2019.
//  Copyright © 2019 Tugba. All rights reserved.
//

#include <iostream>
using namespace std;

int main() {
  
  
    int mevcut;
    cout<< "sınıf mevcudunu giriniz."<< endl;
    cin>>mevcut;
    
    double ogrenciler_notlari[mevcut][4];
    for (int sayac=0; sayac<mevcut; sayac++) {
        int vize1_notu,vize2_notu,final_notu,numara;
        cout<<"ogrencı "<< sayac <<" için 1.vize notunu girinizz" << endl;
        cin>>vize1_notu;
        cout<<"ogrencı "<< sayac <<" için 2.vize notunu girinizz" << endl;
        cin>>vize2_notu;
        cout<<"ogrencı "<< sayac <<" için final notunu girinizz" << endl;
        cin>>final_notu;
        cout<<"ogrencı "<< sayac <<" okul numarası girinizz" << endl;
        cin>>numara;
        
        ogrenciler_notlari[sayac][0]=vize1_notu;
        ogrenciler_notlari[sayac][1]=vize2_notu;
        ogrenciler_notlari[sayac][2]=final_notu;
        ogrenciler_notlari[sayac][3]=numara;

       
    }
    int numara;
    cout << "Not ortalamasını öğrenmek istediğin öğrencinin numarasını gir: ";
    cin >> numara;
    
    
    for(int i=0; i<mevcut; i++){
        if( ogrenciler_notlari[i][3] == numara ) {
            
            //öğrenciyi bulduk. ortalamasını hesaplayalım
            double ortalama;
            ortalama = ( ogrenciler_notlari[i][0] * 25 / 100  ) + ( ogrenciler_notlari[i][1] * 25 / 100  ) + ( ogrenciler_notlari[i][2] * 50 / 100  );
            
            cout << ogrenciler_notlari[i][3] << " numaralı öğrencinin not ortalaması: " << ortalama << " dır." << endl;
        }
    }
    return 0;
}

