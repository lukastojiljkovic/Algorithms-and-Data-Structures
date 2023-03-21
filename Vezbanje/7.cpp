/*

Програм препознаје следеће наредбе 
које се извршавају над колекцијом података 
(у којој се могу јавити и дупликати):

 * i x — insert — у колекцију бројева умеће се вредност x
 * m — maximum — на стандардни излаз се исписује највећи елемент који се тренутно налази у колекцији
 * r — remove — из колекције се избацује највећи елемент
Напиши програм који чита и извршава низ оваквих наредби 
(наравно, водити рачуна о ефикасности).

Улаз
Свака линија стандардног улаза садржи једну наредбу.

Излаз
На стандардни излаз се исписује резултат 
извршавања свих наредби.

 * Пример * 

 * Улаз * 
i 3
i 7
i 4
m
i 8
m
r
r
m
 * Излаз * 
7
8
4

*/

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
#include <cstring>
using namespace std;

/*  definisanje elemenata   */
int roditelj(int i) {
    return (i-1) / 2;
}
int levoDete(int i) {
    return 2*i + 1;
}
int desnoDete(int i) {
    return 2*i + 2;
}
int najveci(const vector<int>& hip) {
    return hip[0];
}

void ubaci(vector<int>& hip, int x) {  // ubacivanje elemenata u hip
    hip.push_back(x);                  // element dodajemo na kraj
    pomeriNavise(hip, hip.size() - 1); // pomeramo navise dok se uslov hipa ne zadovolji
}

void izbaciNajveci(vector<int>& hip) { // izbacivanje najveceg elementa iz hipa
    hip[0] = hip.back();               // poslednji element izbacujemo iz hipa
    hip.pop_back();                    // upisujemo ga na pocetnu poziciju
    pomeriNanize(hip, 0);              // pomeramo pocetni element naniza dok ne zadovoljimo uslov hipa
}

void pomeriNavise(vector<int>& hip, int k) { // element na poziciji k se pomera navise
    int r = roditelj(k);                     // razmenom sa roditeljem, dok se uslov hipa ne ispuni
    while(k > 0 && hip[k] > hip[r]) {
        swap(hip[k], hip[r]);
        k = r;
        r = roditelj(k);
    }
}

void pomeriNanize(vector<int>& hip, int k) { // el na poz k se pomera nanize, razmenom sa decom dok se uslov hipa ne ispuni
    int roditelj = k;
    int veceDete = levoDete(k);              // pretpostavljamo da je levo dete vece
    while(veceDete < hip.size()) {           // dok god čvor ima dece
        int desno = veceDete + 1;
        if(desno < hip.size() && hip[desno] > hip[veceDete]) { // poredimo da li je desno dete vece od levog
            veceDete = desno;
        }
        if(hip[roditelj] >= hip[veceDete]) { // ako je roditelj veci ili jednak od oba deteta, uslov hipa je zadovoljen
            break;
        }
        swap(hip[veceDete], hip[roditelj]); // menjamo roditelja i vece dete
        roditelj = veceDete;                // nastavljamo obradu od veceg deteta
        veceDete = levoDete(roditelj);
    }
}

int main(int argc, char const *argv[]) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    vector<int> hip;
    char c;
    while(cin >> c) { // biranje opcije
        if(c == 'i') {
            int x;
            cin >> x >> ws;
            ubaci(hip, x);
        } else if(c == 'm') {
            cout << najveci(hip) << endl;
        } else if(c == 'r') {
            izbaciNajveci(hip);
        }
    }
    
    return 0;
}
