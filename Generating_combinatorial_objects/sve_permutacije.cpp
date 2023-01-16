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

void print(const vector<int>& permutacija) {
    for(int x : permutacija) {
        cout << x << " ";
    }
    cout << endl;
}

bool sledeca_permutacija(vector<int>& a) {
    int n = a.size();
    int i = n-2;
    while(i >= 0 && a[i] > a[i+1]) {
        i--;
    }
    if(i < 0) {
        return false;
    }
    int j = n-1;
    while(a[j] < a[i]) {
        j--;
    }
    swap(a[i], a[j]);
    for(j = n-1, i++; i < j; i++, j--) {
        swap(a[i], a[j]);
    }
    return true;
}

void sve_permutacije(int n) {
    vector<int> permutacija(n);
    for(int i = 0; i < n; i++) {
        permutacija[i] = i+1;
    }
    do {
        print(permutacija);
    } while(sledeca_permutacija(permutacija));
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    int n;
    cin >> n;
    sve_permutacije(n);
    
    return 0;
}
