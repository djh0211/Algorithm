//
//  greedy_num2217.cpp
//  algorithm_baek
//
//  Created by 하동준 on 2021/08/11.
//

#include "bits/stdc++.h"
using namespace std;
#define FIO ios::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)

int n;
vector<int> vec;
long int temp;

void prog(){
    for (int i=1; i<=vec.size(); i++) {
        long int w = (i)*vec[i-1];
        temp = max(temp, w);
    }
}

int main(){
    FIO;
    cin>>n;
    int m = 0;
    for (int i=0; i<n; i++) {
        cin>>m;
        vec.push_back(m);
    }
    sort(vec.begin(), vec.end(), greater<int>());
    
    prog();
    
    cout<<temp<<endl;
}
