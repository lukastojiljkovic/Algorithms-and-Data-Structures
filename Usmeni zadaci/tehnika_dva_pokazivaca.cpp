/*
Dva niza ucenika, velicine n i m. 
Za svaki niz i svakog ucenika broj poena u sortiranom nizu. 
Formirati treci niz sa svim poenima.
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
#include <functional>
using namespace std;

void objedini(vector<int>& a, int n, vector<int>& b, int m, vector<int>& c) {
    int i = 0, j = 0, k = 0;
    while(i < n && j < m) { // unosimo iz oba niza u treci po velicini
        c[k++] = (a[i] < b[j]) ? a[i++] : b[j++];
    }
    while(i < n) { // ostatak iz prvog niza
        c[k++] = a[i++];
    }
    while(j < m) { // ostatak iz drugog niza
        c[k++] = b[j++];
    }
}
//* pretpostavka je da su nizovi sortirani
int main(int argc, char const *argv[]) {
   ios_base::sync_with_stdio(false);
   cin.tie(0);
    
   int n, m;
   cin >> n;
   vector<int> a(n); // prvi niz
   for(int i = 0; i < n; i++) {
       cin >> a[i];
   }
   cin >> m;
   vector<int> b(m); // drugi niz
   for(int i = 0; i < m; i++) {
       cin >> b[i];
   }
   vector<int> c(n + m);
   objedini(a, n, b, m, c); // spajanje u treci niz
   for(auto x : c) { // ispis rezultata
       cout << x << " ";
    }
    cout << endl;
    
    return 0;
}
