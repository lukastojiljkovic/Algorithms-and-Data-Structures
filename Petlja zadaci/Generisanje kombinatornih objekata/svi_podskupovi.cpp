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

void ispisi(const vector<int>& a, int n){
    for(int i = 0; i < n; i++){
        cout << a[i] << " ";
    }
    cout << endl;
}

void svi_podskupovi(const vector<int>& a, int i, int j, vector<int>& p){
    if(i == a.size())
        ispisi(p, j);
    else{
        svi_podskupovi(a, i + 1, j, p);
        p[j] = a[i];
        svi_podskupovi(a, i + 1, j + 1, p);
    }
}

void svi_podskupovi(const vector<int>& a){
    vector<int> p(a.size());
    svi_podskupovi(a, 0, 0, p);
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);
    
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++){ 
        cin >> a[i];
    }
    svi_podskupovi(a);

    return 0;
}