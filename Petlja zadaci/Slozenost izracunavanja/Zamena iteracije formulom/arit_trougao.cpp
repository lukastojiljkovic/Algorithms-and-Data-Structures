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

long long zbirAritmetickogNiza(long long a1, long long d, long long n) {
  return n * a1 + d * (n-1) * n / 2;
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);
    
    long long k;
    cin >> k;
    long long a1 = (k - 1) * (k - 1) + 1;
    long long d = 1;
    long long n = 2 * k - 1;
    long long zbirRedaTrougla = zbirAritmetickogNiza(a1, d, n);
    cout << zbirRedaTrougla << endl;

return 0;
}