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

bool binarna_pretraga(vector<int> &a, int x){
    int p = 0, k = a.size() - 1;
    while(p <= k){
        int s = (p + k) / 2;
        if(a[s] == x) return true;
        if(a[s] < x) p = s + 1;
        else k = s - 1;
    }
    return false;
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);
    
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++)
        cin >> a[i];
    
    int x, br = 0;
    while(cin >> x){
        if(binarna_pretraga(a, x))
            br++;
    }
    cout << br << endl;

    return 0;
}