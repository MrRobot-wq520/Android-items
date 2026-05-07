#include <iostream> 
using namespace std;

int bakiye = 1000;
int secim;
int yatirilan_miktar;
int cekilenmiktar;

int main(){
while (true){
    cout << "ATM" << endl;

    cout << "1.Para yatir" << endl;

    cout << "2.Bakiye sorgula" << endl;
    
    cout << "3.Para cek" << endl;

    cout << "4.Cikis" << endl;

    cout << "Secim Girin;";

    cin >> secim;

    if (secim == 1){
        cout << "Yatirilacak miktar girin" << endl;

        cin >> yatirilan_miktar;

        bakiye = bakiye + yatirilan_miktar;

        cout << "Yatirildi!" << endl;
    }

    else if(secim == 2){
        cout << bakiye << endl;
    }

    else if(secim == 3){
    cout << "Cekilecek Miktar Girin: ";
    cin >> cekilenmiktar;

    if(cekilenmiktar > bakiye){
        cout << "yetersiz bakiye" << endl;
    }
    else{
        bakiye = bakiye - cekilenmiktar;
    }
}

    else if (secim == 4){
        break;
    }

}
    
    
}
