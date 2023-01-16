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

void interval(int n, double a, double razlika){
    if(n > 0){
        cout << setprecision(5) << showpoint << fixed << a << endl;
        interval(n - 1, a+razlika, razlika);
    }
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);
    
    int n; 
    double a, b;
    cin >> n >> a >> b;
    double razlika = abs(b - a) / (n - 1);
    interval(n, a, razlika);

    return 0;
}