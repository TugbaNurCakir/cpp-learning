
#include <iostream>
using namespace std;
void faktoriyel(int sayi){
    
    int factorial=1;
    
    for (int i=2; i<=sayi; i++) {
        factorial *=i;
    }
    cout << "Faktöriyel: " << factorial << endl;
}

int main(){
    int a;
    cout << "Sayiyi giriniz." << endl;
    cin>> a;
    

    faktoriyel(a);


    return 0;
}
