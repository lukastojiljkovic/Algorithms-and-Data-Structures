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

typedef int stap;

enum tip_naredbe {POZIV, ISPIS};

struct element_steka {
    tip_naredbe naredba;
    stap sa, pom, na;
    int n;
};

element_steka poziv(stap sa, stap pom, stap na, int n) {
    element_steka rez;
    rez.naredba = POZIV;
    rez.sa = sa; rez.pom = pom; rez.na = na; rez.n = n;
    return rez;
}

element_steka ispis(stap sa, stap na) {
    element_steka rez;
    rez.naredba = ISPIS;
    rez.sa = sa; rez.na = na;
    return rez;
}

void Hanoj(int n, int sa, int pom, int na) {
    int i = 0;
    stack<element_steka> s;
    s.push(poziv(sa, pom, na, n));
    while (!s.empty()) {
        element_steka e = s.top(); s.pop();
        if (e.naredba == POZIV) {
            if (e.n > 0) {
                s.push(poziv(e.pom, e.sa, e.na, e.n - 1));
                s.push(ispis(e.sa, e.na));
                s.push(poziv(e.sa, e.na, e.pom, e.n - 1));
            }
        } else if (e.naredba == ISPIS) {
            i++;
            cout << "Sa tornja " << e.sa << " na toranj " << e.na << " disk velicine " << e.n + 1 << "." << endl;
        }
    }
    cout << endl;
    cout << "Broj koraka koji su bili potrebni za resavanje problema: " << i << endl;
}

void Hanoj(int n) {
    Hanoj(n, 1, 2, 3);
}

int main() {
    cout << "Unesite broj diskova: ";
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;
    cout << endl;
    Hanoj(n);

    return 0;
}