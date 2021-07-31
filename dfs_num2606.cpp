//
//  dfs_num2606.cpp
//  algorithm_baek
//
//  Created by 하동준 on 2021/07/30.
//
#include "bits/stdc++.h"
using namespace std;
#define FIO ios::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)

int num;
int line;
vector<int> graph[105];
bool check[105];
int cnt;



void dfs(int start){
    check[start] = true;
    for (int i =0; i<graph[start].size(); i++) {
        int y = graph[start][i];
        if (check[y] == false) {
            dfs(y);
            cnt++;
        }
    }
}

int main(){
    cin>>num>>line;
    int a; int b;
    for (int i = 0; i<105; i++) {
        check[i] = false;
    }
    for (int i =0; i < line; i++) {
        cin>>a>>b;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }
    for (int i =0; i<105; i++) {
        sort(graph[i].begin(), graph[i].end());
    }
    dfs(1);
    cout<<cnt<<endl;
    
    
}
