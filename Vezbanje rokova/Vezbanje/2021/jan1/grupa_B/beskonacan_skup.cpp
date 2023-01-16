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

void skup(int n, int k) {
    priority_queue<int, vector<int>, greater<int>> pq;
    pq.push(n);
    for(int i = 0; i < k; i++) {
        int x = pq.top();
        pq.pop();
        cout << x << ' ';
        pq.push(2 * x);
        pq.push(4 * x - 3);
    }
    cout << endl;
}

int main(int argc, char const *argv[]) {
    ios_base::sync_with_stdio(false); cin.tie(0);

    int n, k;
    cin >> n >> k;
    skup(n, k);

    return 0;
}
