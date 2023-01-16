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

void ispisi(const vector<int>& kombinacija){
    for(int x : kombinacija)
        cout << x << " ";
    cout << endl;
}

void sve_kombinacije(vector<int>& kombinacija, int i, int n){
    int k = kombinacija.size();
    if(i == k){
        ispisi(kombinacija);
        return;
    }
    int pocetak = i == 0 ? 1 : kombinacija[i-1]+1;
    int kraj = n + i - k + 1;

    for(int x = pocetak; x <= kraj; x++){
        kombinacija[i] = x;
        sve_kombinacije(kombinacija, i+1, n);
    }
}

void sve_kombinacije(int k, int n){
    vector<int> kombinacija(k);
    sve_kombinacije(kombinacija, 0, n);
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);
    
    int k, n;
    cin >> k >> n;
    sve_kombinacije(k, n);

    return 0;
}