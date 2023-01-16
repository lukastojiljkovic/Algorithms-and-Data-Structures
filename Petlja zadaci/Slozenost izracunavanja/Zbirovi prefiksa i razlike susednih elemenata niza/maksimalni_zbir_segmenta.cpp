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
    
    int zbir_prefiksa = 0;
    int min_zbir_prefiksa = zbir_prefiksa;
    int max = 0;
    for(int i = 0; i < n; i++){
        int x; cin >> x;
        zbir_prefiksa += x;
        int zbir_segmenta = zbir_prefiksa - min_zbir_prefiksa;
        if(zbir_segmenta > max)
            max = zbir_segmenta;
        if(zbir_prefiksa < min_zbir_prefiksa)
            min_zbir_prefiksa = zbir_prefiksa;
    }
    cout << max << endl;

    return 0;
}