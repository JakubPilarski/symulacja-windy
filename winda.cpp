#include <iostream>
#include "winda.h"
using namespace std;
int Winda::pietra = 0;
int Winda::ludzie= 0;
Winda::Winda() {
    maxludzi=0;
    maxpietro=0;
}
int Winda::pietro(){
    return pietra;
}
int Winda::ludziee(){
    return ludzie;
}
Winda::Winda(int ml, int mp) {
    maxludzi =ml;
    maxpietro =  mp;
}

void Winda::wybor(int p) {
    if(maxpietro < p || p<0)
    {
        cout<<"NIE MA TAKIEGO PIETRA"<<endl;
    }
    else{
        pietra = p;
    }
}

void Winda::show() {
    cout<<"Winda jest na "<< pietra<<" pietrze, jest w niej "<< ludzie<< " ludzi"<< endl;
}

void Winda::wsiada(int l) {
    if(ludzie + l> maxludzi){
        cout<<"Winda jest juz pelna"<<endl;
    }
    else{
        ludzie= ludzie +l;
    }
}

void Winda::wysiada(int l) {
    if(ludzie==0){
        cout<<"Winda jest pusta"<< endl;
        return;
    }
    if ( ludzie - l < 0 ){
        ludzie = 0;
    }
    else{
        ludzie = ludzie -l;
    }
}