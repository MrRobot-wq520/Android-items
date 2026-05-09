#include <iostream>
using namespace std;

int sifre = 123456;
int secim;

int main(){
    cout << "sifre kontrol projesi" << endl;
    cout << "1.Giris yap" << endl;

    cin >> secim;

    if(secim == 1){
        cout << "Lutfen sifre giriniz;" << endl;
        cin >> sifre;
    }

    else if(sifre == 123456){
        cout << "Sifre yanlis" << endl;
        return 0;
    }

    else{
        cout << "hatali secim";
    }

    
}
