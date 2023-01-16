#include <iostream>
#include <iomanip>
#include <algorithm>
#include <vector>
#include <queue>
#include <string>



using namespace std;

int main(){
	
	long long n;
    cin >> n;

    double rez = 0;
    long long k, p;
    while(cin >> k >> p){
        rez = n*(2*k + (n-1)*p) / 2;
        cout << fixed << setprecision(2) << showpoint << rez/1000 << endl;
    }

	return 0;
}