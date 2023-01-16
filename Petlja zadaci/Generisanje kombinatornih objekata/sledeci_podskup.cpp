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
using namespace std;

bool sledeci_podskup(vector<int>& podskup, int n){
    if(podskup.empty()){
        podskup.push_back(1);
        return true;
    }
    if(podskup.back() < n){
        podskup.push_back(podskup.back() + 1);
        return true;
    }
    podskup.pop_back();
    if(podskup.empty()){
        return false;
    }
    podskup.back()++;
    return true;
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);
    
    int n;
    cin >> n;
    vector<int> podskup;
    int x;
    while(cin >> x){
        podskup.push_back(x);
    }
    if(sledeci_podskup(podskup, n)){
        for(int x : podskup){
            cout << x << " ";
        }
        cout << endl;
    }
    else{
        cout << "-" << endl;
    }

    return 0;
}