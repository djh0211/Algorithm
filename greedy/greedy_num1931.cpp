//
//  greedy_num1931.cpp
//  algorithm_baek
//
//  Created by 하동준 on 2021/08/06.
//


#include "bits/stdc++.h"
using namespace std;
#define FIO ios::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)

int n;
int ans;
vector<pair<int, int>> vec;


bool compare(pair<int, int>a, pair<int, int>b) {
    if (a.second == b.second) {
        return a.first < b.first;
    }
    else {
        return a.second < b.second;
    }
}

void greedy(){
    int now=0;
    for (int i=0; i<vec.size(); i++) {
        if (now <= vec[i].first) {
            ans++;
            now = vec[i].second;
        }
    }
}

int main(){
    FIO;
    cin>>n;
    int start=0;
    int end=0;
    for (int i=0; i<n; i++) {
        cin>>start>>end;
        vec.push_back(make_pair(start, end));
        
    }
    sort(vec.begin(), vec.end(), compare);
    greedy();
    
    cout<<ans<<endl;
    
    
}
