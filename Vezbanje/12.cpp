/*

 *** Сви подскупови лексикографски ***

Напиши програм који исписује све подскупове скупа {0,…,n−1} 
у лексикографском редоследу.

 * Улаз * 
 Са стандардног улаза се учитава број n (1≤n≤15).

 * Излаз *
 На стандардни излаз исписати тражене подскупове, сваки у посебном реду. 
 Сваки се подскуп представља растуће сортираним низом својих елемената.

 * Пример *
 Улаз
    3
 Излаз
     0
     0 1
     0 1 2
     0 2
     1
     1 2
     2

*/

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
#include <cstring>
#include <functional>
using namespace std;

bool sledeci_podskup(vector<int> &podskup, int &k, int n) {
    if(k == 0) {
        podskup[k++] = 1;
        return true;
    }
    if(podskup[k-1] < n) {
        podskup[k] = podskup[k-1] + 1;
        k++;
        return true;
    }
    k--;
    if(k == 0) {
        return false;
    }
    podskup[k-1]++;
    return true;
}

void print (vector<int> &podskup, int k) {
    for (int i = 0; i < k; i++) {
        cout << podskup[i] << " ";
    }
    cout << endl;
}

void svi_podskupovi(int n) {
    vector<int> podskup(n);
    int k = 0;
    do {
        print(podskup, k);
    } while (sledeci_podskup(podskup, k, n));
}

int main(int argc, char const *argv[]) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    int n;
    cin >> n;
    svi_podskupovi(n);
    
    return 0;
}
