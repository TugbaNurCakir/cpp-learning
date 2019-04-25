#include <iostream>
using namespace std;
int main() {
int en;
    do {
        cout<< "T harfinin eni için bir sayı giriniz." << endl;
        cin>>en;
        
    } while (en<5 || en>11 || en%2==0);
    
    for (int i=1; i<=en; i++) {
        cout<<"*";
    }
    cout<<"\n";
    
    for (int k=1; k<=(en-1)/2 ; k++) {
        for (int m=1; m<=(en-1)/2; m++) {
            cout<<" ";
        }
        cout<<"*";
        cout<<"\n";
    }
   
    return 0;
}
