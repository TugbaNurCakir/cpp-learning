//parametre alan ve void olmayan fonksiyon ornegi (2 sayi arasindaki degerlerin toplamini bulan fonksiyon)

int sayilar_toplami(int a, int b){

    int toplam;
    for (int i=a; i<b; i++) {
        toplam = toplam + i;
        
    }
    return toplam;
}
int main(){
    int sayi;
    int sayi1;
    do {
        cout << "sayilari giriniz." << endl;
        cin>> sayi;
        cin>> sayi1;
    } while (sayi>=sayi1);
   
    
    int sonuc;
    sonuc =sayilar_toplami(sayi, sayi1);
    cout << "sayilarin toplami" << sonuc << endl;
}


// parametre alan fonksiyon ornegi.(us alma ornegi)

int us_alma(int a, int b){
    int us=1;
    for (int i=1; i<=b; i++) {
        us = us * a;
    }
    return us;
}
int main(){
    
    int sayi1;
    int sayi2;
    do {
        
        cout << " Sayilari giriniz." << endl;
        cin>> sayi1;
        cin>> sayi2;
        
        
    } while (sayi1<=0 || sayi2<=0 );
  
    int cevap;
    cevap =us_alma(sayi1, sayi2);
    cout << "islem sonucu: " << cevap << endl;
    
    
}



