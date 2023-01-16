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
using namespace std;

const int N = 20, M = 20;
const int BELA = 0, CRNA = 1, OBELEZENO = -1;

bool UMatrici(int x, int y, int m, int n){
    return x >= 0 && x < m && y >= 0 && y < n;
}

void Obelezi(int x0, int y0, int a[N][M], int m, int n){
    stack<pair<int, int>> obeleziti;
    obeleziti.emplace(x0, y0);
    while(!obeleziti.empty()){
        auto p = obeleziti.top(); obeleziti.pop();
        int x = p.first, y = p.second;
        a[x][y] = OBELEZENO;
        int dx[] = {-1, 0, 1, 0};
        int dy[] = {0, 1, 0, -1};
        for(int i = 0; i < 4; i++){
            int x1 = x + dx[i], y1 = y + dy[i];
            if(UMatrici(x1, y1, m, n) && a[x1][y1] == BELA){
                obeleziti.emplace(x1, y1);
            }
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);
    
    int m, n;
    cin >> m >> n;
    int a[M][N];
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            cin >> a[i][j];
        }
    }

    int oblast = 0;
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            if(a[i][j] == BELA){
                Obelezi(i, j, a, m, n);
                oblast++;
            }
        }
    }

    cout << oblast << endl;

    return 0;
}