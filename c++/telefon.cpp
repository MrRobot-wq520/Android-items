#include <iostream>
using namespace std;

int secim;
string mesaj;
int numara;

int main(){
    while (true)
    {
        cout << "Telefon" << endl;
        cout << "1.Mesaj yaz" << endl;
        cout << "2.Arama yap" << endl;
        cout << "3.Rehber" << endl;
        cout << "4.cikis" << endl;

        cout << "Secim:";
        cin >> secim;
       
        
        switch (secim)
        {
        case 1:
            cout << "Mesaj girin." << endl;
            cin >> mesaj;
            cout << "Gonderildi!" << endl;
            break;
        

        case 2:
            cout << "Numara:";
            cin >> numara;    
            cout << "Arandi" << endl;
            break;
        case 3:
            cout << "Rehber" << endl;
            cout << "- ChatGPT" << endl;
            break;

        case 4:
            exit(0);       

        default:
            cout << "Hatali secim";
        }
    }
    
}