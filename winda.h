//
// Created by Student on 14.06.2024.
//

#ifndef UNTITLED26_WINDA_H
#define UNTITLED26_WINDA_H
class Winda {
private:
    int maxludzi;
    int maxpietro;
    static int pietra;
    static int ludzie;
public:
    static int pietro();
    Winda();
    Winda(int ml, int mp);
    void wybor( int p );
    void show ();
    void wsiada(int l);
    void wysiada (int l);

};
#endif //UNTITLED26_WINDA_H
