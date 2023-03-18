/*

Написати програм који учитава низ целих бројева а затим га трансформише тако да 
елементи буду подељени у три дела у зависности од задатих вредности A и B. 
У првом делу су елементи мањи од задате вредности A (вредности из интервала [−∞,A)), 
у другом елементи већи или једнаки задатој вредности A и мањи или једнаки задатој вредности B 
(вредности из интервала [A,B]), а у трећем елементи већи од задате вредности B 
(вредности из интервала (B,+∞)). Није битно у ком се редоследу налазе елементи унутар делова. 
Учитати елементе у низ, а затим реорганизовати редослед елемената у том низу 
(не користити помоћне низове).

 * Улаз * 
У једној линији стандардног улаза налази се број елемената низа, N, а затим се, 
у наредној линији налазе елементи низа раздвојени размацима. 
У последње две линије се налазе цели бројеви A и B одвојени празнином, и при томе је A<B.

 * Излаз * 
Исписати елементе резултујућег низа на стандардни излаз 
(могуће је исписати елементе сваке од три групе у посебном реду, 
раздвојене размацима, а могуће је исписати и цео низ у једном реду или у више редова).

 * Пример * 

Улаз

10
1 3 5 4 8 5 7 2 3 6
3
5

Излаз

1 2
5 4 3 5 3
7 6 8

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

vector<int> unosNiza() {
    int n; cin >> n; // unos velicine niza
    vector<int> a(n);
    for(int i = 0; i < n; i++) { // unos niza
        cin >> a[i];
    }
    return a;
}

void ispisNiza(const vector<int>& a, int A, int B) {
    int i = 0;
    while (i < a.size() && a[i] < A) { // ispis elemenata (-inf, A)
        cout << a[i++] << " ";
    } cout << endl;
    while (i < a.size() && a[i] <= B) { // ispis elemenata [A, B]
        cout << a[i++] << " ";
    } cout << endl;
    while (i < a.size()) { // ispis elemenata (B, +inf)
        cout << a[i++] << " ";
    } cout << endl;
}

void podelaNiza(vector<int>& niz, int A, int B) {
    int l = 0, i = 0, d = niz.size();
    while (i < d) { // prolazak svih elemenata niza
        if (niz[i] < A) { // menjamo tekuci el sa el iz intervala [A, B]
            swap(niz[i++], niz[l++]);
        } else if (niz[i] <= B) { // tekuci el ostaje na svom mestu
            i++;
        } else { // menjamo tekuci el sa poslednjim elementima
            swap(niz[i], niz[--d]);
        }
    }
}

int main(int argc, char const *argv[]) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    vector<int> a = unosNiza(); // ucitavanje elemenata niza
    int A, B; cin >> A >> B; // unos intervala
    podelaNiza(a, A, B); // reorganizacija el niza po intervalima
    ispisNiza(a, A, B); // ispis reorganizovanog niza
    
    return 0;
}
