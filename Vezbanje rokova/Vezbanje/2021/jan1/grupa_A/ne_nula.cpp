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
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(0);
    
    int n;
    int x;
    cin >> n;

    map<int , int> broj_pojavljivanja;
    int br_parova = 0;

    for(int i = 0; i < n; i++) {
        cin >> x;
        br_parova += broj_pojavljivanja[-x];
        broj_pojavljivanja[x]++;
    }

    int uk_br_par = n * (n - 1) / 2;
    cout << uk_br_par - br_parova << endl;
    

    return 0;
}
