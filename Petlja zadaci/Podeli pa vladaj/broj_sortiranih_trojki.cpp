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

void izbroj(vector<int>& a, int l, int d, vector<int>& atmp, vector<int>& manjihlevo, vector<int>& manjihlevotmp, vector<int>& vecihdesno, vector<int>&vecihdesnotmp){
    if(d - l >= 1){
        int s = l + (d - l) / 2;
        izbroj(a, l, s, atmp, manjihlevo, manjihlevotmp, vecihdesno, vecihdesnotmp);
        izbroj(a, s+1, d, atmp, manjihlevo, manjihlevotmp, vecihdesno, vecihdesnotmp);
        int i = l, i0 = l, j = s+1, j0 = s+1, k = 0;
        while(i <= s || j <= d){
            if(i <= s && (j > d || a[i] <= a[j])){
                manjihlevotmp[k] = manjihlevo[i];
                while(j0 <= d && a[j0] <= a[i]){
                    j0++;
                }
                vecihdesnotmp[k] = vecihdesno[i] + (d - j0 + 1);
                atmp[k++] = a[i++];
            }
            else{
                while (i0 < i && a[i0] < a[j]){
                    i0++;
                }
                manjihlevotmp[k] = (i0 - l) + manjihlevo[j];
                vecihdesnotmp[k] = vecihdesno[j];
                atmp[k++] = a[j++];
            }
        }
        copy(begin(atmp), next(begin(atmp), d-l+1), next(begin(a), l));
        copy(begin(manjihlevotmp), next(begin(manjihlevotmp), d-l+1), next(begin(manjihlevo), l));
        copy(begin(vecihdesnotmp), next(begin(vecihdesnotmp), d-l+1), next(begin(vecihdesno), l));
    }
}

void izbroj(vector<int>& a, vector<int>& manjihlevo, vector<int>& vecihdesno){
    vector<int> atmp(a.size());
    vector<int> manjihlevotmp(a.size());
    vector<int> vecihdesnotmp(a.size());
    izbroj(a, 0, a.size() - 1, atmp, manjihlevo, manjihlevotmp, vecihdesno, vecihdesnotmp);
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);
    
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    vector<int> manjihlevo(n, 0), vecihdesno(n, 0);
    izbroj(a, manjihlevo, vecihdesno);
    const int mod = 1e9;
    int sortiranihtrojki = 0;
    for(int i = 1; i < n-1; i++){
        sortiranihtrojki = (sortiranihtrojki + manjihlevo[i]*vecihdesno[i]) % mod;
    }
    cout << sortiranihtrojki << endl;

    return 0;
}
