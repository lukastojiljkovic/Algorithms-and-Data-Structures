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

bool sledeca_varijacija(int n, vector<int>& v){
    int i;
    int k = v.size();
    for(i = k-1; i >= 0 && v[i] == n; i--){
        v[i] = 1;
    }
    if(i < 0){
        return false;
    }
    v[i]++;
    return true;
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);
    
    int k, n;
    cin >> k >> n;
    vector<int> a(k);
    for(int i = 0; i < k; i++) 
        cin >> a[i];
    if(sledeca_varijacija(n, a))
        ispisi(a);
    else
        cout << "-" << endl;

    return 0;
}