//
//  greedy_num1715.cpp
//  algorithm_baek
//
//  Created by 하동준 on 2021/08/14.
//

#include "bits/stdc++.h"
using namespace std;
#define FIO ios::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)

long long int n;
priority_queue<long long int, vector<long long int>,greater<int>> pq;
long long int ans;
long long int first;
long long int second;

void prog(){
    while (pq.size() != 1) {
        first = pq.top();
        pq.pop();
        second = pq.top();
        pq.pop();
        pq.push(first+second);
        ans = ans + first+second;
    }
}
void prog2(){
    if (n==1) {
        cout<<0<<endl;
        return;
    }
    prog();
    cout<<ans<<endl;
}

int main(){
    FIO;
    cin>>n;
    long long int a = 0;
    for (long long int i=0; i<n; i++) {
        cin>>a;
        pq.push(a);
    }
    prog2();
    
    
    
}

