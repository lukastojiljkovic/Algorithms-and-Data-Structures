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
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    int x, y;
    cin >> x >> y;

    sort(a.begin(), a.end());

    int i = 0;
    while(i < x){
        cout << a[i++] << " ";
    }
    cout << endl;
    while(i < y){
        cout << a[i++] << " ";
    }
    cout << endl;
    while(i < n){
        cout << a[i++] << " ";
    }
    cout << endl;

    return 0;
}