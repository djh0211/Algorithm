//
//  greedy_num1789.cpp
//  algorithm_baek
//
//  Created by 하동준 on 2021/08/14.
//

#include "bits/stdc++.h"
using namespace std;
#define FIO ios::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)

long int s;
long int ans;
long int temp;

void prog(){
    for (long int i=1; i<=4294967295; i++) {
        if (temp+i > s) {
            cout<<ans<<endl;
            return;
        }
        if (temp+i == s) {
            ans++;
            cout<<ans<<endl;
            return;
        }
        temp = temp + i;
        ans++;
    }
}

int main(){
    FIO;
    cin>>s;
    
    prog();
    
}
