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

void ispisi(const vector<int>& v, int k){
    for(int i = 0; i < k; i++){
        cout << v[i] << " ";
    }
    cout << endl;
}

bool sledeci_podskup(vector<int>& podskup, int& k, int n){
    if(k == 0){
        podskup[k++] = 1;
        return true;
    }
    if(podskup[k-1] < n){
        podskup[k] = podskup[k-1] + 1;
        k++;
        return true;
    }
    k--;
    if(k == 0){
        return false;
    }
    podskup[k-1]++;
    return true;
}

void svi_podskupovi(int n){
    vector<int> podskup(n);
    int k = 0;
    do{
        ispisi(podskup, k);
    }while(sledeci_podskup(podskup, k, n));
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);
    
    int n;
    cin >> n;
    svi_podskupovi(n);

    return 0;
}