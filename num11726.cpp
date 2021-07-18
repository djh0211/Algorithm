//
//  num11726.cpp
//  algorithm_baek
//
//  Created by 하동준 on 2021/07/01.
//

#include "bits/stdc++.h"
using namespace std;
#define NUM 1005
#define FIO ios::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
int dp[NUM][2];

int main(){
    FIO;
    
    int n;
    cin>>n;
    dp[1][0] = 1;
    dp[2][0] = 1;
    dp[2][1] = 1;
    dp[3][0] = 2;
    dp[3][1] = 1;
    
    for(int i=4; i<=1000; i++){
        dp[i][0] = (dp[i-1][0]+dp[i-1][1])%10007;
        dp[i][1] = (dp[i-2][0]+dp[i-2][1])%10007;
    }
    
    cout<<(dp[n][0]+dp[n][1])%10007;
}
