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

int bin_u_dek(const vector<bool>& b) {
    int d = 0;
    for(bool x : b) {
        d = 2*d + (x ? 1 : 0);
    }
    return d;
}

void generisi(vector<bool>& tekuci, int poz) {
    if(poz == tekuci.size()) {
        cout << bin_u_dek(tekuci) << endl;
        return;
    }
    if(poz > 0 && tekuci[poz - 1] != false) {
        tekuci[poz] = false;
        generisi(tekuci, poz + 1);
    }
    tekuci[poz] = true;
    generisi(tekuci, poz + 1);
}

void generisi(int n) {
    for(int br_bin_cif = 1; br_bin_cif <= n; br_bin_cif++) {
        vector<bool> tekuci(br_bin_cif);
        generisi(tekuci, 0);
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    int n;
    cin >> n;
    cout << endl;
    generisi(n);

    return 0;
}
