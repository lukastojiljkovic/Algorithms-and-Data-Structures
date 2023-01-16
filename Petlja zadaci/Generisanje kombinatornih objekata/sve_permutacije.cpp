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

void ispisi(const vector<int>& permutacija){
    for(int x : permutacija){
        cout << x << " ";
    }
    cout << endl;
}

void obradi_permutacije(vector<int>& permutacija, int k){
    if(k == 1){
        ispisi(permutacija);
    }
    else{
        for(int i = 0; i < k; i++){
            swap(permutacija[i], permutacija[k-1]);
            obradi_permutacije(permutacija, k-1);
            swap(permutacija[i], permutacija[k-1]);
        }
    }
}

void obradi_permutacije(int n){
    vector<int> permutacija(n);
    for(int i = 1; i <= n; i++){
        permutacija[i-1] = i;
    }
    obradi_permutacije(permutacija, n);
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);
    
    int n;
    cin >> n;
    obradi_permutacije(n);

    return 0;
}