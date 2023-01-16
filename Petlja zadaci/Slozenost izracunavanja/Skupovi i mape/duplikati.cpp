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
    map<int, int> a;
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        a[x]++;
    }
    cout << a.size() << endl;

    return 0;
}