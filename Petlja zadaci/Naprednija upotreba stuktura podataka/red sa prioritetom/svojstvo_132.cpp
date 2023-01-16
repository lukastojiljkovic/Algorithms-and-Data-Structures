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

bool svojstvo132(const vector<int>& a, int n) {
    for(int i = 0; i < n; i++) {
        for(int j = i+1; j < n; j++) {
            for(int k = j+1; k < n; k++) {
                if(a[i] < a[j] && a[i] < a[k] && a[j] > a[k]) {
                    return true;
                }
            }
        }
    }
    return false;
}

void svojstvo132(int n) {
    vector<int> a(n);
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    cout << (svojstvo132(a, n) ? "da" : "ne") << endl;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    int n;
    cin >> n;
    svojstvo132(n);
    
    return 0;
}
