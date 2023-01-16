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
using namespace std;

void ispisi(vector<int>& v){
    for(int x : v){
        cout << x << " ";
    }
    cout << endl;
}

void obradi(vector<int>& v, int n, int i, int min){
    if(i == v.size()){
        ispisi(v);
        return;
    }
    if(min > n)
        return;
    v[i] = min;

    obradi(v, n, i+1, min);
    obradi(v, n, i, min+1);
}

void obradi(int k, int n){
    vector<int> v(k, 1);
    obradi(v, n, 0, 1);
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);
    
    int k, n;
    cin >> k >> n;
    obradi(k, n);

    return 0;
}