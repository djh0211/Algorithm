//
//  dfs_num7576.cpp
//  algorithm_baek
//
//  Created by 하동준 on 2021/08/02.
//

#include "bits/stdc++.h"
using namespace std;
#define FIO ios::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)

int n; int m;//세로 가로
int tomato[1005][1005];
int days[1005][1005];//
bool visited[1005][1005] = {false,};

int dx[] = {1,0,-1,0};
int dy[] = {0,1,0,-1};

queue<pair<int, int>> q;

void bfs(){
    while (!q.empty()) {
        int i = q.front().first;
        int j = q.front().second;
        tomato[i][j] = 1;
        q.pop();
        
        for (int k = 0; k<4; k++) {
            int newi = i+dy[k];
            int newj = j+dx[k];
            if (newi>=0 and newi<n and newj>=0 and newj<m and visited[newi][newj] == false and tomato[newi][newj] == 0) {
                q.push(make_pair(newi, newj));
                visited[newi][newj] = true;
                days[newi][newj] = days[i][j] + 1;

            }
        }
        
    }
    
}

int main(){
    FIO;
    cin>>m>>n;
    
    for (int i =0; i<n; i++) {
        for (int j =0; j<m; j++) {
            cin>>tomato[i][j];
            
            if (tomato[i][j] == 1) {
                q.push(make_pair(i, j));
                visited[i][j] = true;
            }
        }
    }
    bfs();
    int temp=0;
    int ans=0;
    bool status = false;
    
    for (int i =0; i<n; i++) {
        for (int j =0; j<m; j++) {
            if(tomato[i][j] == 0){
                status = true;
            }
        }
    }
    if (status) {
        cout<<-1<<endl;
    }else{
        for (int i =0; i<n; i++) {
            for (int j =0; j<m; j++) {
                temp = days[i][j];
                ans = max(temp, ans);
            }
        }
        cout<<ans<<endl;
    }
    
}
