#include <iostream>
#include <iomanip>
#include <algorithm>
#include <vector>
#include <queue>
#include <string>
#include <cmath>
#include <map>

using namespace std;

void cik_cak(vector<int> a){
	int l = 0, d = a.size() - 1;
	vector<int> b(a.size());
	for(int i = 0; i < a.size(); i++){
		if(i % 2 == 0)
			b[l++] = a[i];
		else
			b[d--] = a[i];
	}
	for(int i = 0; i < b.size(); i++)
		cout << b[i] << endl;
}

int main(){

	int n;
	cin >> n;
	vector<int> a(n);
	for(int i = 0; i < n; i++)
		cin >> a[i];
	
	sort(a.begin(), a.end());
	cik_cak(a);

	return 0;
}