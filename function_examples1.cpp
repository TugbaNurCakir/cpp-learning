// C++ile fonksiyon kullanarak 4 islem yaptırma programı.
double toplama_islemi(double sayi1, double sayi2){
    return sayi1+sayi2;
    
}
double cikarma_islemi(double sayi1,  double sayi2){
    return sayi1-sayi2;
    
}
double carpma_islemi(double sayi1, double sayi2) {
    return sayi1*sayi2;
    
}

double bolme_islemi(double sayi1, double sayi2){
    return sayi1/sayi2;

}
int main() {
    double sayi1, sayi2;
    cout << "Birinci sayiyi giriniz: " ;
    cin>> sayi1;
    cout << "Ikinci sayiyi giriniz: ";
    cin>> sayi2;
    
    cout << "Toplama isleminin sonucu: " << toplama_islemi(sayi1, sayi2) << endl;
    cout << "Cikarma isleminin sonucu: " << cikarma_islemi(sayi1, sayi2) << endl;
    cout << "Carpma isleminin sonucu: " << carpma_islemi(sayi1, sayi2) << endl;
    cout << "Bolme isleminin sonucu: " << bolme_islemi(sayi1, sayi2) << endl;
    
    
    // Fonksiyon kullanarak dikdörtgenin alanını ve çevresini hesaplayan program.
    /*
    
    int alan_hesaplama(int kenar1, int kenar2){

    int alan;
    alan = kenar1*kenar2;
    return alan;
}
int cevre_hesaplama(int kenar1, int kenar2){
    
    int cevre;
    cevre = (kenar2 + kenar1) *2;
    return cevre;
}
    int kenar1,kenar2;
        do {

            cout << "Kisa kenari giriniz. :";
            cin>> kenar1;
            cout << "Uzun kenari giriniz. :";
            cin>> kenar2;

        } while (kenar1<=0 || kenar2<=0);

        cout << "Dikdörtgenin cevresi:  "<< cevre_hesaplama(kenar1, kenar2) << endl;
        cout << "Dikdörtgenin alani  :  "<< alan_hesaplama(kenar1, kenar2) << endl;

}

// Fonksiyon kullanarak girilen iki sınav notunun ortalamasını hesaplayan program.

 double not_ort_hesaplama(double not1, double not2){
    double ortalama;
    ortalama = (not1+not2) / 2;
    
    return ortalama;
}
/*
    int a,b;
    
    do {
        cout << "Birinci sinav notunuzu giriniz.  :";
        cin>> a;
        cout << "İkinci sinav notunuzu giriniz.   :";
        cin>> b;
    } while (a<0 || b<0);
   
    
    int ort = not_ort_hesaplama(a, b);
    cout << "Ortalamaniz : " << ort << endl;
 
*/ 
    
//Fonksiyon kullanarak Vize(yuzde 40i etkiliyor) ve Final(yuzde 60i etkiliyor) notu girilen öğrencinin ortalamasını hesaplayan program.
/*
double ort_hesaplama(int vize_notu, int final_notu){
    double ortalama;
    ortalama = (vize_notu * 0.4) + (final_notu * 0.6);
    return ortalama;
    
}

    int a,b;
    
    do {
        cout << "Vize notunuzu giriniz.:  " ;
        cin>> a;
        cout << "Final notunuzu giriniz.:  " ;
        cin>> b;
    } while (a<0 || b<0);
    
    int sonuc = ort_hesaplama(a, b);
    cout << "Ortalamaniz: " << sonuc << endl;
    */
    
/*
    bool asal_bulma(int sayi){

    int sayac=0;
    for (int i=2; i<sayi; i++) {
        if (sayi % i == 0) {
            sayac++;
            break;
        }
        
    }
    if (sayac==0)
        return true;
    else
        return false;
    
}
/*
    int aranan_sayi;
    do {
        cout << "Asal olup olmadıgnı bulmak istediginiz sayiyi giriniz.: ";
        cin>> aranan_sayi;
        
    } while (aranan_sayi <= 1);
    
    if (asal_bulma(aranan_sayi)) {
        cout << "sayi asaldir" << endl;
    }
    else
        cout << "sayi asal degildir" << endl;
    
*/

// Fonksiyon kullanarak girilen sayının tek veya cift sayi oldugunu bulan program.
/*
bool tek_cift_bulma(int sayi){
    if (sayi % 2 == 0) {
        return true;
    }
    else
        return false;
}

/*
    
    int aranan_sayi;
    cout << "Kontrol etmek istediginiz sayiyi giriniz.: " ;
    cin>> aranan_sayi;
    
    if (tek_cift_bulma(aranan_sayi)) {
        cout << "Sayi cifttir." << endl;
    }
    else
        cout << "Sayi tektir." << endl;
    
    
    
*/
    
//Fonksiyonlari kullanarak kullanicidan 10 adet sayi isteyerek girilen bu sayilardan kacar adet oldugunu bulan program.
/*
bool tek_cift_bulma(int sayi){
    
    if (sayi % 2 == 0) {
        return true;
    }
    else
        return false;
    
}
/*
    int sayi;
    int tek_adedi=0,cift_adedi=0;
    for (int i=1; i<=10; i++) {
        cout << "sayi giriniz." << endl;
        cin>> sayi;
        
        if (tek_cift_bulma(sayi)) {
            cift_adedi++;
        }
        else
            tek_adedi=tek_adedi+1;
        
    }
   
    cout << "Girdiginiz sayilardan su kadari cifttir: " << cift_adedi << endl;
    cout << "Girdiginiz sayilardan su kadari tektir: " << tek_adedi << endl;

    
*/



}
