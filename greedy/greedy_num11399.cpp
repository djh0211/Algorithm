//
//  greedy_num11399.cpp
//  algorithm_baek
//
//  Created by 하동준 on 2021/08/06.
//

#include "bits/stdc++.h"
using namespace std;
#define FIO ios::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)

int n; int t;
int ans;
vector<int> vec;

int main(){
    FIO;
    cin>>n;
    for (int i=0; i<n; i++) {
        cin>>t;
        vec.push_back(t);
    }
    sort(vec.begin(), vec.end());
    for (int i=0; i<vec.size(); i++) {
        ans = ans + (vec.size() - i) * vec[i];
    }
    cout<<ans<<endl;
    
}
