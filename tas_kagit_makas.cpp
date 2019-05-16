#include <iostream>
#include <cstdlib>
#include <ctime>
int main () {
    using namespace std;
    
    
    srand(time(NULL));
    int randomIndex = (rand() % 3);
    
    char oyun[3] ={'t', 'k', 'm'};
    string isim;
    char pc_secim;
    char user_secim;
    cout << "lütfen isminizi girer misiniz :  ";
    cin>> isim;
    
    pc_secim = oyun[randomIndex];
    cout << "bilgisayar secimini yaptı";
    cout << ", sıra sende "<< isim << endl;
    
    
    cout << "lütfen secim yapınız: ";
    cin>> user_secim;
    cout << "pcnin secimi: " << pc_secim << endl;
    
    if (pc_secim== 't') {
        if (user_secim== 't')
            cout << "Berabere" << endl;
        else if (user_secim== 'k')
            cout << isim << "kazanadı." << endl;
        else if (user_secim== 'm')
            cout << "bilgisayar kazandı." << endl;
        else
            cout << "bilinmeyen hata. " << endl;
        
    }
    
    else if (pc_secim== 'k') {
        if (user_secim== 'k')
            cout << "Berabere" << endl;
        else if (user_secim== 'm')
            cout << isim << "kazanadı." << endl;
        else if (user_secim== 't')
            cout << "bilgisayar kazandı." << endl;
        else
            cout << "bilinmeyen hata. " << endl;
        
    }
    else if  (pc_secim== 'm') {
        if (user_secim== 'm')
            cout << "Berabere" << endl;
        else if (user_secim== 't')
            cout << isim << "kazanadı." << endl;
        else if (user_secim== 'k')
            cout << "bilgisayar kazandı." << endl;
        else
            cout << "bilinmeyen hata. " << endl;
        
    }
  
    return 0;
}
