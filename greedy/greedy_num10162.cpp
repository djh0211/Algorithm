//
//  greedy_num10162.cpp
//  algorithm_baek
//
//  Created by 하동준 on 2021/08/13.
//

#include "bits/stdc++.h"
using namespace std;
#define FIO ios::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)

int t;
int a=300; int b=60; int c=10;
int ans[3];

void prog(){
    int temp = t;
    
    if (t%10 != 0) {
        cout<<-1<<endl;
        return;
    }
    temp = t/a;
    t = t - temp*a;
    ans[0] = temp;
    
    temp = t/b;
    t = t - temp*b;
    ans[1] = temp;
    
    temp = t/c;
    t = t - temp*c;
    ans[2] = temp;
    
    for (int i=0; i<3; i++) {
        cout<<ans[i]<<" ";
    }
    
}

int main(){
    FIO;
    cin>>t;
    prog();
}
