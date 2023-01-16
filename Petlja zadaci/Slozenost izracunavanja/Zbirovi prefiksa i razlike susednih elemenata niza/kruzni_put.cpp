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
    vector<int> litri(n);
    vector<int> rastojanje(n);
    for(int i = 0; i < n; i++){
        cin >> rastojanje[i];
        cin >> litri[i];
    }

    for(int i = 0; i < n; i++){
        int k = i;
        int gorivo = litri[k];
        int j;
        for(j = 0; j < n && rastojanje[k] <= gorivo; j++){
            gorivo -= rastojanje[k];
            k = (k + 1) % n;
            gorivo += litri[k];
        }
        if(j == n){
            if(i != 0){
                cout << i << endl;
                break;
            }
            if(i == 0){
                cout << "-1" << endl;
                break;
            }
        }
    }

    return 0;
}