#include <iostream>
using namespace std;


int secim;
double sayi1;
double sayi2;

int main(){
    cout << "ATM" << endl;
    cout << "1.Cikarma" << endl;
    cout << "2.Toplama" << endl;
    cout << "3.Carpma" << endl;
    cout << "4.Bolme" << endl;
    cout << "5.Cikis" << endl;
    // islem yapma

    cin >> secim;

    if (secim == 1){
        cout << "1.Sayi Giriniz." << endl;
        cin >> sayi1;
        cout << "2.Sayi Giriniz." << endl;
        cin >> sayi2;

        cout << "Cevap:"  << sayi1 - sayi2 << endl;
    }

    else if (secim == 2){
        cout << "1.Sayi Giriniz." << endl;
        cin >> sayi1;
        cout << "2.Sayi Giriniz." << endl;
        cin >> sayi2;

        cout << "Cevap:"  << sayi1 + sayi2 << endl;
    }

    else if (secim == 3){
        cout << "1.Sayi Giriniz." << endl;
        cin >> sayi1;
        cout << "2.Sayi Giriniz." << endl;
        cin >> sayi2;

        cout << "Cevap:"  << sayi1 * sayi2 << endl;
    }

    else if (secim == 4) {
        cout << "1.Sayi Giriniz." << endl;
        cin >> sayi1;
        cout << "2.Sayi Giriniz." << endl;
        cin >> sayi2;

        cout << "Cevap:"  << sayi1 / sayi2 << endl;
    }
    
    else if (secim == 5) {
        exit(0);
    }

}
