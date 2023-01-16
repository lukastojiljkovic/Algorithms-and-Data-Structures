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

void print(const vector<int>& varijacija) {
    for(int x : varijacija) {
        cout << x << " ";
    }
    cout << endl;
}

void sve_varijacije(int n, vector<int>& varijacija, int m) {
    if(m == varijacija.size()) {
        print(varijacija);
    }
    else {
        for(int nn = 1; nn <= n; nn++) {
            varijacija[m] = nn;
            sve_varijacije(n, varijacija, m+1);
        }
    }
}

void sve_varijacije(int k, int n) {
    vector<int> varijacija(k);
    sve_varijacije(n, varijacija, 0);
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    int n, k;
    cin >> n >> k;
    sve_varijacije(k, n);
    
    return 0;
}
