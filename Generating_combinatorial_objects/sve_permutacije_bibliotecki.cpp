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

void obradi(const vector<int>& permutacija) {
    for(int x : permutacija) {
        cout << x << " ";
    }
    cout << endl;
}

void obradi(int n) {
    vector<int> permutacija(n);
    iota(begin(permutacija), end(permutacija), 1);
    do {
        obradi(permutacija);
    } while(next_permutation(begin(permutacija), end(permutacija)));
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    int n;
    cin >> n;
    obradi(n);
    
    return 0;
}
