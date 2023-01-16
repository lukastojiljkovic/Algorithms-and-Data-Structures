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

void eratosten(vector<bool>& prost, int n) {
    prost.resize(n+1, true);
    prost[0] = prost[1] = false;
    for(int i = 2; i*i <= n; i++){
        if(prost[i]){
            for(int j = i*i; j <= n; j += i){
                prost[j] = false;
            }
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);
    
    long long a, b;
    cin >> a >> b;

    vector<bool> prost;
    eratosten(prost, b);

    int zbir = 0, broj = 0;
    for(int i = a; i <= b; i++){
        if(prost[i]){
            zbir = (zbir + i) % 1000000;
            broj++;
        }
    }
    cout << broj << " " << zbir << endl;

    return 0;
}