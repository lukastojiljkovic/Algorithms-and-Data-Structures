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

void print(vector<int>& permutacija) {
    for(int x : permutacija) {
        cout << x << endl;
    }
}

void sledeca_permutacija() {
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    if(next_permutation(begin(a), end(a))) {
        print(a);
    }
    else {
        cout << "ne postoji" << endl;
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    sledeca_permutacija();
    
    return 0;
}
