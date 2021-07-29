//
//  dfs_num1260.cpp
//  algorithm_baek
//
//  Created by 하동준 on 2021/07/28.
//

#include "bits/stdc++.h"
using namespace std;
#define FIO ios::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)

void dfs(vector<int>* graph, int start, bool* visited) {
    if (visited[start] != true) {
        visited[start] = true;
        cout << start << ' ';
        for (auto it = graph[start].begin(); it != graph[start].end(); it++) {
            if (visited[*it] != true) {
                dfs(graph, *it, visited);   //함수의 재귀 호출 이용
            }
        }
    }
    else return;
}

void bfs(vector<int>* graph, int start, int n) {
    bool* visited = new bool[n + 1];
    for (int i = 0; i < n + 1; i++) visited[i] = false;

    queue<int> queue;

    visited[start] = true;
    queue.push(start);
    cout << start << ' ';

    if (graph[start].empty()) {  //연결된 간선이 없는 경우 출력 후 바로 리턴
        cout << '\n';
        return;
    }

    while(!queue.empty()) {
        start = queue.front();
        queue.pop();

        if (graph[start].empty()) {  //연결된 간선이 없는 경우 출력 후 바로 리턴
            cout << start << '\n';
            return;
        }

        for (auto it = graph[start].begin(); it != graph[start].end(); it++) {
            if (visited[*it] != true) {
                visited[*it] = true;
                queue.push(*it);
                cout << *it << ' ';
            }
        }
    }

    cout << '\n';
}

int main() {
    cin.tie(0); cout.tie(0); ios::sync_with_stdio(false);

    int n, m, start;
    cin >> n >> m >> start;

    int u, v;
    vector<int>* graph = new vector<int>[n + 1];

    for (int i = 0; i < m; i++) {
        cin >> u >> v;

        graph[u].push_back(v);
        graph[v].push_back(u);
    }

    for (int i = 1; i <= n; i++) {
        sort(graph[i].begin(), graph[i].end());
    }

    bool* visited = new bool[n + 1];
    for (int i = 0; i < n + 1; i++) visited[i] = false;

    dfs(graph, start, visited);
    cout << '\n';
    bfs(graph, start, n);

    return 0;
}
