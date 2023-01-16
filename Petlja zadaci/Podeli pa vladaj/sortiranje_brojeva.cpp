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

void quick_sort(vector<int>& a, int l, int d){
    if(l < d){
        swap(a[l], a[l + rand() % (d - l + 1)]);
        int k = l;
        for(int i = l+1; i <= d; i++){
            if(a[i] <= a[l]){
                swap(a[i], a[++k]);
            }
        }
        swap(a[l], a[k]);
        quick_sort(a, l, k-1);
        quick_sort(a, k+1, d);
    }
}

void quick_sort(vector<int>& a){
    quick_sort(a, 0, a.size() - 1);
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);
    
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    quick_sort(a);
    for(int i = 0; i < n; i++){
        cout << a[i] << endl;
    }

    return 0;
}
