//
//  num1012.cpp
//  algorithm_baek
//
//  Created by 하동준 on 2021/08/04.
//

#include "bits/stdc++.h"
using namespace std;
#define FIO ios::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)

int field[52][52];
bool visited[52][52];

int t;
int m; int n; int k;
int dx[] = {1,0,-1,0};
int dy[] = {0,1,0,-1};

vector<int> ans;
int temp;
queue<pair<int, int>> q;

void dfs(int x, int y){
    visited[y][x] = true;
    
    for (int i=0; i<4; i++) {
        int newx = x+dx[i];
        int newy = y+dy[i];
        if (newx>=0 and newx<m and newy>=0 and newy<n and field[newy][newx] == 1 and visited[newy][newx] == false) {
            dfs(newx, newy);
        }

    }
}

int main(){
    FIO;
    cin>>t;
    int row; int col;
    for (int i=0; i<t; i++) {
        cin>>m>>n>>k;
        temp = 0;
        memset(field,0,sizeof(field));
        memset(visited,false,sizeof(visited));
        
        for (int j=0; j<k; j++) {
            cin>>col>>row;
            field[row][col] = 1;
        }
        
        for (int j=0; j<n; j++) {
            for (int k=0; k<m; k++) {
                if (field[j][k] == 1 and visited[j][k] == false) {
                    
                    dfs(k,j);
                    temp++;
                }
            }
        }
        ans.push_back(temp);
    }
    
    for (int i=0; i<t; i++) {
        cout<<ans[i]<<endl;
    }
    
    
}
