/*

У школи малих жутих мрава наставник је прегледао контролни задатак. 
Прво је прегледао ђаке који су радили групу А, а затим оне који су радили групу Б, 
средио је резултате за сваку групу и мраве поређао на основу броја поена који су освојили. 
Напиши програм који му помаже да од уређеног списка ученика који су радили задатке 
из групе А и од уређеног списка ученика који су радили задатке из групе Б 
добије јединствен уређен списак свих ученика.

Улаз
Са стандардног улаза се уноси број ђака m који су радили групу А (5≤m≤25000), 
а затим неопадајуће сортиран низ поена тих ђака 
(елементи су у једној линији, раздвојени са по једним размаком). 
Након тога се уноси број n ђака који су радили групу Б (5≤n≤25000), 
a затим неопадајуће сортиран низ поена тих ђака 
(елементи су у једној линији, раздвојени са по једним размаком).

Излаз
На стандардни излаз исписати неопадајуће сортирани низ поена свих ђака заједно, 
раздвојене са по једним размаком.

Пример

Улаз
4
1 3 5 7
3
2 4 5

Излаз
1 2 3 4 5 5 7

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

vector<int> objedini(const vector<int>& a, const vector<int>& b) {
    vector<int> c(a.size() + b.size());
    for(int i = 0; i < a.size(); i++) {
        c[i] = a[i];
    }
    for(int i = 0; i < b.size(); i++) {
        c[a.size() + i] = b[i];
    }
    return c;
}

int main(int argc, char const *argv[]){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int m;
    cin >> m;
    vector<int> b(m);
    for(int i = 0; i < m; i++) {
        cin >> b[i];
    }

    vector<int> c = objedini(a, b);

    sort(c.begin(), c.end());
    for(auto x : c) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}