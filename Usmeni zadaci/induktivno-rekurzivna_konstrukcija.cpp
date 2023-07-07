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

int min2(int a, int b) {
   return a < b ? a : b;
}

int minNiza(const vector<int>& a) {
   int m = a[0];
   for(int i = 1; i < a.size(); i++) {
      m = min2(m, a[i]);
   }
   return m;
}

// dokaz korektnosti iterativnih algoritama - invarijanta petlje
int main(int argc, char const *argv[]) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    vector<int> a{3, 5, 4, 1, 6, 2, 7};
    cout << minNiza(a) << endl;
    
    return 0;
}
