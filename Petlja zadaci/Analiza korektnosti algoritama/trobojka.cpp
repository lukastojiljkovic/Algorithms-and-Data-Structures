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

int main(){

    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int A, B;
    cin >> A >> B;

    int l, i;
    l = 0;
    i = 0; 
    int d = a.size();

    while(i < d){
        if(a[i] < A)
            swap(a[i++], a[l++]);
        else if(a[i] <= B)
            i++;
        else
            swap(a[i], a[--d]);
    }
    i = 0;
    while(i < a.size() &&  a[i] < A)
        cout << a[i++] << " ";
    cout << endl;
    while(i < a.size() && a[i] <= B)
        cout << a[i++] << " ";
    cout << endl;
    while(i < a.size())
        cout << a[i++] << " ";
    cout << endl;

    return 0;
}