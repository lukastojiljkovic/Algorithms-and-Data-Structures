#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#include <string>
#include <cmath>

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);

	int n, m = 0;
	cin >> n >> m;

	long long kolona = n * n * (n - 1) / 2 + m * n; // vertikalno
	long long vrsta = (n-1) * n / 2 + m*n*n; // horizontalno

	if(vrsta >= 1000000000)	
		cout << vrsta % 1000000000 << endl;
	else
		cout << vrsta << endl;

	if(kolona >= 1000000000)
		cout << kolona % 1000000000 << endl;
	else
		cout << kolona << endl;
	return 0;
}