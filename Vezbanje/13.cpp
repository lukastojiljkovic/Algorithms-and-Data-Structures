/*

 *** Sve kombinacije ***
 Комбинације дужине k од n елемената подразумевају да се врши одабир k елемената скупа {1,…,n}, 
 слично као што се, на пример, у игри лото бира 7 од 39 куглица. 
 Напиши програм који за дате вредности k и n набраја и исписује све комбинације, 
 поређане по лексикографском редоследу.

  * Ulaz * 
  Prva linija standardnog ulaza sadrzi broj k (1≤k≤n) a naredna broj n (2≤n≤20)

  * Izlaz * 
  На стандардни излаз исписати све комбинације. 
  Свака комбинација треба да буде представљена низом бројева сортираним строго растуће, 
  а све комбинације треба да буду поређане у лексикографском редоследу.

  * Primer * 
  :: Ulaz ::
    3
    5
  :: Izlaz ::
    1 2 3
    1 2 4
    1 2 5
    1 3 4
    1 3 5
    1 4 5
    2 3 4
    2 3 5
    2 4 5
    3 4 5

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

void print(const vector<int> &v) { // print combination to standard output
    for(int x : v) {
        cout << x << " ";
    }
    cout << endl;
}

void process (vector<int> &v, int i, int n) {
    int k = v.size();
    if(i == k) {
        print(v);
        return;
    }
    int beginning = i == 0 ? 1 : v[i-1]+1;
    int end = n - k + i + 1;
    for (int j = beginning; j <= end; ++j) {
        v[i] = j;
        process(v, i+1, n);
    }
}

void process(int k, int n) { // counts all combinations with k length
    vector<int> v(k);
    process(v, 0, n);
}

int main(int argc, char const *argv[]) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    int n, k;
    cin >> k >> n;
    process(k, n);
    
    return 0;
}
