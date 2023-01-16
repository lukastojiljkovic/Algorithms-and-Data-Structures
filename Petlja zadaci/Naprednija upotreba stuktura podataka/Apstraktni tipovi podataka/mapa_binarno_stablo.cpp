#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cmath>
#include <map>
#include <queue>
#include <iomanip>
#include <unordered_map>
#include <vector>
#include <stack>
#include <utility>
#include <numeric>
using namespace std;

struct cvor{
    string kljuc;
    int vrednost;
    cvor *levo, *desno;
};

cvor* napravi_cvor(const string& kljuc, int vrednost){
    cvor* novi = new cvor();
    novi->kljuc = kljuc;
    novi->vrednost = vrednost;
    novi->levo = novi->desno = nullptr;
    return novi;
}

cvor* ubaci(cvor* koren, const string& kljuc, int vrednost){
    if(koren == nullptr){
        return napravi_cvor(kljuc, vrednost);
    }
    if(kljuc < koren->kljuc){
        koren->levo = ubaci(koren->levo, kljuc, vrednost);
    }
    else if(kljuc > koren->kljuc){
        koren->desno = ubaci(koren->desno, kljuc, vrednost);
    }
    else{
        koren->vrednost = vrednost;
    }
    return koren;
}

cvor* pronadji(cvor* koren, const string& kljuc){
    if(koren == nullptr){
        return nullptr;
    }
    if(kljuc < koren->kljuc){
        return pronadji(koren->levo, kljuc);
    }
    else if(kljuc > koren->kljuc){
        return pronadji(koren->desno, kljuc);
    }
    return koren;
}

bool pronadji(cvor* koren, const string& kljuc, int& vrednost){
    cvor* c = pronadji(koren, kljuc);
    if(c == nullptr){
        return false;
    }
    vrednost = c->vrednost;
    return true;
}

void obrisi_drvo(cvor* koren){
    if(koren != nullptr){
        obrisi_drvo(koren->levo);
        obrisi_drvo(koren->desno);
        delete koren;
    }
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);
    
    cvor* koren = nullptr;
    char c;
    while(cin >> c){
        if(c == 'w'){
            string k;
            int v;
            cin >> k >> v >> ws;
            koren = ubaci(koren, k, v);
        }
        else if(c == 'r'){
            string k;
            cin >> k >> ws;
            int v;
            if(pronadji(koren, k, v)){
                cout << v << endl;
            }
            else{
                cout << "-" << endl;
            }
        }
    }
    obrisi_drvo(koren);

    return 0;
}
