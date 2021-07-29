
//
//  dfs_num1260.cpp
//  algorithm_baek
//
//  Created by 하동준 on 2021/07/28.
//

#include "bits/stdc++.h"
using namespace std;
#define FIO ios::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)

vector<int> graph[1005];
bool visited[1005];
queue<int> q;

void dfs(int x){
    if (visited[x] == false) {
        visited[x] = true;
        cout<<x<<" ";
    }
    for (int i = 0; i<graph[x].size(); i++) {
        int y = graph[x][i];
        if (visited[y] == false) {
            dfs(y);
        }
    }
}

void bfs(int start) {
    q.push(start); // 첫 노드를 queue에 삽입
    visited[start] = true; // 첫 노드를 방문 처리

    // 큐가 빌 때까지 반복
    while (!q.empty()) {
        // 큐에서 하나의 원소를 뽑아 출력
        int x = q.front();
        q.pop();
        cout << x << ' ';
        // 해당 원소와 연결된, 아직 방문하지 않은 원소들을 큐에 삽입
        for (int i = 0; i < graph[x].size(); i++) {
            int y = graph[x][i];
            if (!visited[y]) {
                q.push(y);
                visited[y] = true;
            }
        }
    }
}

int main(){
    FIO;
    
    int N;int M;int V;
    
    cin>>N>>M>>V;
    
    int p1; int p2;
    for (int i =0; i<M; i++) {
        cin>>p1>>p2;
        graph[p1].push_back(p2);
        graph[p2].push_back(p1);
    }
    for (int i = 0; i < N; i++) {
        sort(graph[i].begin(), graph[i].end());
    }
    for (int i = 0; i < N; i++) {
        visited[i] = false;
    }
    
    dfs(V);
    for (int i = 0; i < N; i++) {
        visited[i] = false;
    }
    cout<<endl;
    bfs(V);
    
    
}
