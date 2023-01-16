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

void objedini(vector<int>& a, vector<int>& b, vector<int>& c, int n, int m) {
    int i = 0, j = 0, k = 0;
    while (i < n && j < m)
        c[k++] = a[i] < b[j] ? a[i++] : b[j++];
    while (i < n) c[k++] = a[i++];
    while (j < m) c[k++] = b[j++];
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);
    
    int n, m;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    cin >> m;
    vector<int> b(m);
    for(int i = 0; i < m; i++){
        cin >> b[i];
    }

    vector<int> c(n + m);
    objedini(a, b, c, n, m);

    for(int i = 0; i < n + m; i++){
        cout << c[i] << " ";
    }
    cout << endl;

    return 0;
}