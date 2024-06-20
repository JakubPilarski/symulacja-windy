#include <iostream>
#include "winda.h"
using namespace std;
int main() {
int ml,mp,l,p,wl,bl,x;

    cout<<"STWORZ SWOJA WINDE"<<endl<< "Na ile pieter moze wjechac?:";
    cin>> mp;
    cout<<endl<< "ile maksimum ludzi moze wsiasc?:";
    cin>> ml;
    cout << endl;
    Winda w(ml, mp);
    int bp = w.pietro();
    while(1){
            while (bp!=0){
                bl = w.ludziee();
        cout<<"Ile osob wysiada?:";
        cin>>wl;
        if( wl>bl)
        {
            cout<<"Nie ma tylu ludzi w windzie"<<endl;
        }
        else
        {
            w.wysiada(wl);
            break;
        }
            }while (1){
                bl = w.ludziee();
        cout<<"Ile osob wsiada?:";
        cin>> l;
                x = l + bl;
                if ( x > ml){
                    cout<< "Nie ma tyle miejsca "<< endl;
                }
                else{
         w.wsiada(l);
         break;
                }
           }
            while (1){
        cout<<endl<<"Na ktore pietro chca wjechac?:";
        cin>> p;
        cout<< endl;
        if(p>mp||p<0)
        {
            cout<<"NIE MA TAKIEGO PIETRA"<<endl;
        } else {
            w.wybor(p);
            break;
        }
            }
            w.show();



    }
}
