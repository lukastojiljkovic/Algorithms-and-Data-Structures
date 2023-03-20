/*

Посматрајмо низ бројева чији су прости чиниоци само 2, 3 и 5 
(сваки чинилац може да се јави нула и више пута). 
То су бројеви 1, 2, 3, 4, 5, 6, 8, 9, 10, 12, 15, 16, 18, … 
Напиши програм који одређује n-ти члан овог низа (бројање креће од 0).

 * Улаз * 
Са стандардног улаза се учитава број n (0≤n≤10000).

 * Излаз * 
На стандардни излаз исписати тражени n-ти члан низа.

 * Пример 1 * 
Улаз
7
Излаз
9

 * Пример 2 * 
Улаз
500
Излаз
944784

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

void deljivo_235(int n) {
    vector<long long> a2, a3, a5;
    a2.push_back(2);
    a3.push_back(3);
    a5.push_back(5);
    long long t = 1;
    int i2 = 0, i3 = 0, i5 = 0;
    for(int i = 0; i < n; i++) {
        t = min({a2[i2], a3[i3], a5[i5]});
        // ubacivanje elemenata deljivih sa 2, 3, 5 u odvojene nizove
        a2.push_back(2*t);
        a3.push_back(3*t);
        a5.push_back(5*t);
        while(i2 < a2.size() && a2[i2] == t) {
            i2++;
        }
        while(i3 < a3.size() && a3[i3] == t) {
            i3++;
        }
        while(i5 < a5.size() && a5[i5] == t) {
            i5++;
        }
    }
    cout << t << endl;
}

int main(int argc, char const *argv[]) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    int n; cin >> n;
    deljivo_235(n);
    
    return 0;
}
