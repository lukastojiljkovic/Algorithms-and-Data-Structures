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
    vector<int> v(n);
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }
    int max = 0;
    int j = 0;
    for (int i = 0; i < n; i++){
        if (v[i] > max){
            max = v[i];
            j = i;
        }
    }
    int zbir_pre = 0;
    int zbir_posle = 0;
    for (int i = 0; i < j; i++){
        zbir_pre += v[i];
    }
    for (int i = j + 1; i < n; i++){
        zbir_posle += v[i];
    }
    cout << zbir_pre - zbir_posle << endl;
    

    return 0;
}