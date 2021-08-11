//
//  brute_num2798.cpp
//  algorithm_baek
//
//  Created by 하동준 on 2021/08/01.
//

#include "bits/stdc++.h"
using namespace std;
#define FIO ios::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)

int n; int m;
int in;
vector<int> vec;
int sum;
int ans;

int main(){
    FIO;
    
    cin>>n>>m;
    for (int i =0; i<n; i++) {
        cin>>in;
        vec.push_back(in);
    }
    sort(vec.begin(), vec.end());
    ans = 0;
    for (int i=0; i<n; i++) {
        for (int j = i+1; j<n; j++) {
            for (int k = j+1; k<n; k++) {
                if (vec[i]+vec[j]+vec[k] <= m) {
                    sum=vec[i]+vec[j]+vec[k];
                    ans = max(sum, ans);
                }
            }
        }
    }
    cout<<ans<<endl;
    
    
}
