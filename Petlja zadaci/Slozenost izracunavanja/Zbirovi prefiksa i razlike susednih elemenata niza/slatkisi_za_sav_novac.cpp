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
    int k;
    cin >> k;
    vector<int> poz(k);
    vector<int> pare(k);
    for(int i = 0; i < k; i++){
        cin >> poz[i];
        cin >> pare[i];
    }
    int brojac = 0;
    for(int i = 0; i < k; i++){
        int pozicija = poz[i];
        int novac = pare[i];
        brojac = 0;
        for(int j = 0; j < n - poz[i] + 1; j++){
            if(novac > 0){
                novac = novac - a[pozicija + j];
                brojac++;
            }
        }
        cout << brojac - 1 << endl;
    }

    return 0;
}