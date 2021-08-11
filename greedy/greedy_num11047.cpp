//
//  greedy_num11047.cpp
//  algorithm_baek
//
//  Created by 하동준 on 2021/08/06.
//

#include "bits/stdc++.h"
using namespace std;
#define FIO ios::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
int n; int k;
vector<int> vec;
int ans;

void greedy(){
    for (int i=0; i<vec.size(); i++) {
        int temp = k/vec[i];
        ans = ans + k/vec[i];
        k = k - temp * vec[i];
    }
}

int main(){
    FIO;
    cin>>n>>k;
    int won;
    for (int i=0; i<n; i++) {
        cin>>won;
        vec.push_back(won);
    }
    reverse(vec.begin(), vec.end());
    
    greedy();
    cout<<ans<<endl;
    
}
