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

void ispisi(vector<int> &varijacija){
    for(int x : varijacija){
        cout << x << " ";
    }
    cout << endl;
}

void varijacije(int n, int k, vector<int> &varijacija){
    if(k == 0){
        ispisi(varijacija);
    }
    else{
        for(int i = 1; i <= n; i++){
            varijacija[varijacija.size() - k] = i;
            varijacije(n, k - 1, varijacija);
        }
    }
}

void varijacije(int n, int k){
    vector<int> varijacija(k);
    varijacije(n, k, varijacija);
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);
    
    int n, k;
    cin >> n >> k;

    varijacije(n, k);

    return 0;
}