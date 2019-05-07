// bir sayının karesini hesaplamak. (paremetre alan)

int kare_hesaplama(int sayi) {
    
    int kare= sayi*sayi;
    cout<< "Girdiginiz sayinin karesi: " << kare << endl;
    return kare;
}
int main(){
    cout<< "Lütfen karesini hesaplamak istediginiz sayiyi giriniz." <<endl;
    int sayii;
    cin>> sayii;
    kare_hesaplama(sayii); //function call
}


// parametre almayan fonksiyon.

void merhabaDunya(){
    cout << "Herkese Merhaba" << endl;
    }
int main(){
    
    merhabaDunya(); //function call

return 0;
}


