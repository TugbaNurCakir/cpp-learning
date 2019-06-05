#include <iostream>
using namespace std;

int main() {
   double notlar[10] = {3.04, 88.99, 77.88, 99, 34, 50, 1, 56.09, 0.0};
   /*
     for (int sayac=0; sayac<10; sayac++) {
        if (notlar[sayac] >= 30 && notlar[sayac] <= 50 )  {
            cout << notlar[sayac] << endl;
        }
    }
     */
    /*
    for (int sayac=0; sayac<=9; sayac++) {
    
        int sayi;
        cout << "Lütfen bir sayi giriniz." << endl;
        cin>> sayi;
        int sonuc;
        sonuc=sayi+10;
        cout<< sayi << " + 10  = " << sonuc << endl;
        
    }
    */
    
    /*
   
    double ogrencilerin_notlari[10];
    int toplam = 0;
    for (int sayac=0; sayac<10; sayac++) {
        
        int sayi;
        cout << "Notlari giriniz." << endl;
        cin>> sayi;
        
        ogrencilerin_notlari[sayac] = sayi;
        toplam = toplam + sayi;
    }
    int ort;
    ort = toplam / 10 ;
    cout << "ortalamaniz : " << ort << endl;

 */
    /*
    // karakter arrayi // \t 4 tane boşluk bırakır.
    
    char karakterler[5] = {'t', 'u', 'g', 'b', 'a'};
    
    cout << "Ismim : " ;
    
    for (int sayac=0; sayac<5; sayac++) {
        
        cout << karakterler[sayac] << "\t" ;
    }
    
    cout << endl;
    */
   
   /*
    //dizideki tüm elemanları yazdırmak
    for (int sayac=0; sayac<5; sayac++) {
        cout << karakterler[sayac]<< endl;
    }
    
    
   */
   
    /*
    //dizideki belirli elemanları yazdırmak(dizideki u ve b harflerini yazdırmak.)
   double sinif_notlari[10] = {3.04, 88.99, 77.88, 99, 34, 50, 1, 56.09, 0.0};
    for (int sayac=0; sayac<9; sayac++) {
        if (sinif_notlari[sayac]>50) {
            cout<< sinif_notlari[sayac] <<endl;
        }
    }
    */
    
    
    // girilen 10 sayıyı anda yazdırma.
    /*
    double sayilar_dizisi[10];
    for (int sayac=0; sayac<10; sayac++) {
        int sayi;
        cout<<"sayi giriniz"<<endl;
        cin>> sayi;
        
        sayilar_dizisi[sayac]=sayi;
    }
    for (int sayac=0; sayac<10; sayac++) {
        cout<< sayilar_dizisi[sayac]<< endl;
    }
     */
    /*
    //sınıfın not ortalamasını hesaplayan program
    int toplam=0;
    int mevcut;
    cout<<"lütfen mevcut giriniz.: ";
    cin>> mevcut;
    double nots[mevcut];
    for (int sayac=0; sayac<mevcut; sayac++) {
        cout<<"not giriniz."<<endl;
        int nott;
        cin>> nott;
        nots[sayac]=nott;
   
    }
    for (int i=0; i<mevcut; i++) { // ya da (i<=mevcut-1) -> condition
        toplam=toplam+nots[i];
    }
    cout<<"sınıfın ortalaması: ";
    cout << toplam/mevcut << endl;
   
    */
    return 0;
}

