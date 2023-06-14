/*
 *** Sortiranje brojeva ***
Напиши програм који уређује (сортира) низ бројева неопадајуће 
(сваки наредни мора да буде већи или једнак од претходног).

 * Ulaz * 
 Са стандардног улаза се уноси број n (1≤n≤105) 
 а затим и n природних бројева мањих од 2n, сваки у посебном реду.

 * Izlaz * 
 На стандардни излаз исписати учитане бројеве у сортираном редоследу.

 * Primer * 
   Ulaz:
      5
      3
      1
      6
      8
      1
   Izlaz:
      1
      1
      3
      6
      8

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

void quick_sort(vector<int> &v) {
   int n = v.size();
   stack<pair<int, int>> st;
   st.emplace(0, n - 1);

   while(!st.empty()) {
      auto p = st.top();
      int l = p.first;
      int d = p.second;
      st.pop();

      if(d - l < 1) {
         continue;
      }

      int k = l;
      for (int i = l+1; i <= d; i++) {
         if(v[i] < v[l]) {
            swap(v[++k], v[i]);
         }
      }
      
      swap(v[k], v[l]);
      st.emplace(k+1, d);
      st.emplace(l, k-1);
   }
}

int main(int argc, char const *argv[]) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
   int n;
   cin >> n;
   vector<int> v(n);
   for(int i = 0; i < n; i++) {
      cin >> v[i];
   }
   quick_sort(v);

   for(int x : v) {
      cout << x << endl;
   }
    
    return 0;
}
