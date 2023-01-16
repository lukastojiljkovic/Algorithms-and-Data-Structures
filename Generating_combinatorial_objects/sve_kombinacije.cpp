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

void print(const vector<int>& kombinacija) {
    for(int x : kombinacija) {
        cout << x << " ";
    }
    cout << endl;
}

void sve_kombinacije(vector<int>& kombinacija, int i, int n_min, int n_max) {
    int k = kombinacija.size();
    if(i == k) {
        print(kombinacija);
    }
    if(n_max - n_min + 1 < k - i) {
        return;
    }
    kombinacija[i] = n_min;
    sve_kombinacije(kombinacija, i+1, n_min+1, n_max);
    sve_kombinacije(kombinacija, i, n_min+1, n_max);
}

void sve_kombinacije(int k, int n) {
    vector<int> kombinacija(k);
    sve_kombinacije(kombinacija, 0, 1, n);
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    int k, n;
    cin >> k >> n;
    sve_kombinacije(k, n);
    
    return 0;
}
