//
//  dfs_num9663.cpp
//  algorithm_baek
//
//  Created by 하동준 on 2021/08/03.
//

#include "bits/stdc++.h"
using namespace std;
#define FIO ios::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)

int n;
bool queen[15][15];
vector<pair<int, int>> vec;
int ans;


bool isPossible(int i, int j){
    // 위 검사
    int x = i-1; int y = j;
    while(x>=0){
        if(queen[x][y]) return false;
        x--;
    }
    // 왼쪽 위 대각선 검사
    x = i-1; y = j-1;
    while(x>=0 && y>=0){
        if(queen[x][y]) return false;
        x--;
        y--;
    }
    // 오른쪽 위 대각선 검사
    x = i-1; y = j+1;
    while(x>=0 && y<n){
        if(queen[x][y]) return false;
        x--;
        y++;
    }
    return true;
}

void dfs(int row){
    if (row == n) {
        ans++;
    }
    for (int j=0; j<n; j++) {
        if (queen[row][j] == false and isPossible(row, j) == true) {
            queen[row][j] = true;
            dfs(row+1);
            queen[row][j] = false;
        }
    }
}

int main(){
    FIO;
    
    cin>>n;
    dfs(0);
    
    cout<<ans<<endl;
    
}
