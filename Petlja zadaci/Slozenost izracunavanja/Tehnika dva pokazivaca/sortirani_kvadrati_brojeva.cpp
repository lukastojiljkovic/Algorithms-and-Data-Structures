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

int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);
    
    int n;
    cin >> n;
    vector<long long> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    vector<unsigned long long> b(n);
    for(int i = 0; i < n; i++){
        b[i] = a[i] * a[i];
    }
    sort(b.begin(), b.end());

    for(int i = 0; i < n; i++){
        cout << b[i] << " ";
    }
    cout << endl;

    return 0;
}