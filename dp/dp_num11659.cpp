//
//  dp_num11659.cpp
//  algorithm_baek
//
//  Created by 하동준 on 2021/08/11.
//

#include "bits/stdc++.h"
using namespace std;
#define FIO ios::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)

int n; int m;
int arr[100005];
int dp[1000005];
vector<pair<int, int>> section;

int dpsum(int num){
    if (num < 0) {
        return 0 ;
    }
    if (num == 0) {
        dp[num] = arr[num];
        return dp[num];
    }
    if (dp[num] != 0) {
        return dp[num];
    }
    dp[num] = dpsum(n-1) + arr[n];
    return dp[num];
}

int sectionSum(int start, int end){
    return dpsum(end) - dpsum(start);
}

int main(){
    FIO;
    cin>>n>>m;
    for (int i=0; i<n; i++) {
        cin>>arr[i];
    }
    int s =0; int e =0;
    for (int i=0; i<m; i++) {
        cin>>s>>e;
        section.push_back(make_pair(s, e));
    }
    for (int i =0; i<section.size(); i++) {
        cout<<sectionSum(section[i].first-1, section[i].second-1)<<endl;
    }
    
    
}
