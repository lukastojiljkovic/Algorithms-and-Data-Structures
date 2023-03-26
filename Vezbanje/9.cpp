/*

Написати програм којим се приказују декадни записи свих природних бројева 
који у бинарном систему имају највише n бинарних цифара и немају две узастопне нуле.

 * Улаз * 
Прва линија стандардног улаза садржи природан број n (1≤n≤20).

 * Излаз * 
На стандардном излазу приказати тражене бројеве у растућем поретку, 
сваки број у посебној линији.

 * Пример * 

Улаз
3

Излаз
1
2
3
5
6
7

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

bool hasConsecutiveZeros(int n) {
    int prev = n & 1;
    n >>= 1;
    while (n > 0) {
        int curr = n & 1;
        if (prev == 0 && curr == 0) {
            return true;
        }
        prev = curr;
        n >>= 1;
    }
    return false;
}

int main(int argc, char const *argv[]) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;
    for (int i = 1; i < (1 << n); i++) {
        if (!hasConsecutiveZeros(i)) {
            cout << i << endl;
        }
    }
    return 0;
}