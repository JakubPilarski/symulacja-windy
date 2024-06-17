#include <iostream>
#include "winda.h"
using namespace std;
int main() {
int ml,mp,l,p,wl;
    cout<<"STWORZ SWOJA WINDE"<<endl<< "Na ile pieter moze wjechac?:";
    cin>> mp;
    cout<<endl<< "ile maksimum ludzi moze wsiasc?:";
    cin>> ml;
    cout << endl;
    Winda w(ml, mp);
        cout<<"Ile osob wsiada?:";
        cin>> l;
        cout<<endl<<"Na ktore pietro chca wjechac?:";
        cin >> p;
        cout<< endl;
        w.wsiada(l);
        w.wybor(p);
        w.show();
        while(1){
        cout<<"Ile osob wysiada?:";
        cin>>wl;
        cout<<"Ile osob wsiada?:";
        cin>> l;
        cout<<endl<<"Na ktore pietro chca wjechac?:";
        cin>> p;
        cout<< endl;
        w.wysiada(wl);
        w.wsiada(l);
        w.wybor(p);
        w.show();

    }
}
