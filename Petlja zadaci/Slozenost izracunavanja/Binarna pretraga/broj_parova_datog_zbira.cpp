#include <iostream>
#include <iomanip>
#include <algorithm>
#include <vector>
#include <queue>
#include <string>
#include <cmath>
#include <map>
using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	long long s;
	int n;
	cin >> s >> n;
	vector<long long> a(n);
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	
	sort(a.begin(), a.end());

	int br = 0;
	for(int i = 0; i <= n; i++){
		if(binary_search(a.begin() + i, a.end(), s - a[i]))
			br++;
	}

	cout << br << endl;

	return 0;
}