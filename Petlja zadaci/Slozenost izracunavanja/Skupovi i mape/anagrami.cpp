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

vector<int> prebrojSlova(const string& s){
    vector<int> brojevi(26);
    for(char c : s){
        brojevi[c - 'a']++;
    }
    return brojevi;
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);
    
    int n;
    cin >> n;
    map<vector<int>, int> broj_reci;
    for(int i = 0; i < n; i++){
        string s;
        cin >> s;
        broj_reci[prebrojSlova(s)]++;
    }

    int max = 0;
    for(auto it : broj_reci){
        max = max > it.second ? max : it.second;
    }
    cout << max << endl;
    return 0;
}