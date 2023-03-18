/*

Напиши програм који организује елементе низа тако да прво иду сви парни елементи, 
а затим непарни, при чему међусобни редослед парних и непарних елемената није битан. 
Елементе прво учитати у низ, а затим тај низ трансформисати у линеарном времену 
(само једним пролазом кроз низ).

* Улаз *
У првој линији стандардног улаза унети природан број n (1≤n≤50000) - број елемената низа, 
а у наредној линија унети n природних бројевава у границама од 1 до 1000.

* Излаз *

На станардни излаз исписати елементе низа уређене на тражени начин, 
раздвојене са по једним размаком.

* Пример *

Улаз
10
2 5 3 6 1 8 9 10 11 4

Излаз
2 6 8 10 4 5 3 1 9 11
Ово је само један од могућих излаза. Могућ је, на пример, и излаз
2 4 10 6 8 1 9 3 11 5
или излаз
2 6 8 10 4 3 9 5 11 1

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

int main(int argc, char const *argv[]){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    // unos podataka
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int l = 0, d = n-1;
    while(l < d) {
        if(a[l] % 2 == 0) { // broj je paran
            l++;            // pomeramo se na naredni element
        } else if(a[d] % 2 != 0) { // broj nije paran
            d--;                   // pomeramo se na prethodni element
        } else {
            swap(a[l++], a[d--]); // na mestu l je neparan, na d je paran, razmenjujemo ih
        }                         // pomeramo se po oba kraja
    }

    for(int i = 0; i < n; i++) { // ispisi rezultat
        cout << a[i] << " ";
    }
    cout << endl;
    
    return 0;
}
