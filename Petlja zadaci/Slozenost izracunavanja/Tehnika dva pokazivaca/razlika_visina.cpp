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
    
    int r, n;
    cin >> r >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    int broj = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(a[j] - a[i] == r){
                broj++;
            }
        }
    }

    cout << broj << endl;

    return 0;
}