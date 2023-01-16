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

using namespace std;

int prva_neg_temp(int n, int i){
    if(i > n){
        return -1;
    }
    int m; cin >> m;
    return m < 0 ? i : prva_neg_temp(n, i+1);
}

int prva_neg_temp(int n){
    return prva_neg_temp(n, 1);
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);
    
    int n;
    cin >> n;
    cout << prva_neg_temp(n) << endl;
    return 0;
}