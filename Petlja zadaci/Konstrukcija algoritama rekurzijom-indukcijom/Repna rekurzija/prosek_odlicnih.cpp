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

double prosek_odlicnih(int n, double zbir, int broj){
    if(n == 0){
        return zbir / broj;
    }
    else {
        double tekuci;
        cin >> tekuci;
        if(tekuci >= 4.5){
            return prosek_odlicnih(n - 1, zbir + tekuci, broj + 1);
        }
        else {
            return prosek_odlicnih(n - 1, zbir, broj);
        }
    }
}

double prosek_odlicnih(int n){
    return prosek_odlicnih(n, 0.0, 0);
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);
    
    int n;
    cin >> n;
    double prosek = prosek_odlicnih(n);

    if(isfinite(prosek)){
        cout << setprecision(2) << fixed << prosek << endl;
    }
    else{
        cout << "-" << endl;
    }


    return 0;
}