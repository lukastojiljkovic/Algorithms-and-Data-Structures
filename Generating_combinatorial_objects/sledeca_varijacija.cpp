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
#include <numeric>
using namespace std;

void ispisi(const vector<int>& varijacija) {
    for(int x : varijacija) {
        cout << x << " ";
    }
    cout << endl;
}

bool sledeca_varijacija(int n, vector<int>& varijacija) {
    int i;
    int k = varijacija.size();
    for(i = k-1; i >= 0 && varijacija[i] == n; i--) {
        varijacija[i] = 1;
    }
    if(i < 0) {
        return false;
    }
    varijacija[i]++;
    return true;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    int k, n;
    cin >> k >> n;
    vector<int> varijacija(k);
    for(int i = 0; i < k; i++) { 
        cin >> varijacija[i];
    }
    if(sledeca_varijacija(n, varijacija)) {
        ispisi(varijacija);
    }
    else {
        cout << " - " << endl;
    }
    
    return 0;
}
