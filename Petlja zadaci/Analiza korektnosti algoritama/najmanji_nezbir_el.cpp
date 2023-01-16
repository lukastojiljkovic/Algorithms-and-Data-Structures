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
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int zbir = 0;
    for (int i = 0; i < n; i++) {
        if(zbir + 1 < a[i]){
            break;
        }
        zbir += a[i];
    }
    cout << zbir + 1 << endl;

    return 0;
}