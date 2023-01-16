#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#include <string>

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);

	int n, x;
	cin >> n;
	long long zbir = 0;
	long long suma = ((long long)n) * (n+1) / 2;

	for(int i = 0; i < n; i++){
		cin >> x;
		zbir += x;
	}
	cout << suma - zbir << endl;

	return 0;
}