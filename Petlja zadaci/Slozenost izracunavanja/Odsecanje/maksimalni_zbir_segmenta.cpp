#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#include <string>
#include <cmath>

using namespace std;

int main(){

	int n;
	cin >> n;

	vector<int> b(n);
	for (int i = 0; i < n; i++){
		cin >> b[i];
	}
	
	int max = 0, i = 0;
	while(i < n){
		int z = 0;
		int j;
		for(j = i; j < n; j++){
			z += b[j];
			if(z < 0)
				break;
			if(z > max)
				max = z;
		}
		i = j + 1;
	}

	cout << max << endl;

	return 0;
}