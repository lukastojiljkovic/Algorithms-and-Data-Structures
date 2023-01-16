#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <iomanip>
#include <cmath>

using namespace std;


int main(){
	ios_base::sync_with_stdio(false); cin.tie(0);
	
	long long n;
	cin >> n;
	
	vector<int> binary(32);
	
	int i = 0;
	while(n){
		binary[i] = n % 2;
		n /= 2;
		i++;
	}
	
	for(int j = 31; j >= 0; j--){
		cout << binary[j];
	}
	cout << endl;
	
	return 0;
}