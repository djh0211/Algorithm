//
//  num1764.cpp
//  algorithm_baek
//
//  Created by 하동준 on 2021/08/08.
//

#include "bits/stdc++.h"
using namespace std;
#define FIO ios::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)

int n; int m;
vector<string> ans;
vector<string> listen;

int main(){
    FIO;
    cin>>n>>m;
    string temp;
    for (int i=0; i<n; i++) {
        cin>>temp;
        listen.push_back(temp);
    }
    for (int i=0; i<m; i++) {
        cin>>temp;
        if (find(listen.begin(), listen.end(), temp) != listen.end()) {
            ans.push_back(temp);
        }
    }
    sort(ans.begin(), ans.end());
    
    cout<<ans.size()<<endl;
    for (int i=0; i<ans.size(); i++) {
        cout<<ans[i]<<endl;
    }
    
    
}
