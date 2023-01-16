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

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
// ucitavamo broj koji treba rastaviti na proste cinioce
    int n;
    cin >> n;
    int f = 2; // prvi potencijalni prost cinilac je 2
// dok se broj deljenjem sa svojim prostim ciniocima ne svede na 1
    while (n > 1) {
        while (n % f == 0) {   // dok je n deljivo sa f
            cout << f << " ";    //   prijavljujemo pronadeni prost cinilac
            n /= f;              //   delimo broj njime
        } 
        f = f + 1;             //   prelazimo na sledeceg kandidata
    }
    cout << endl;

    return 0;
}
