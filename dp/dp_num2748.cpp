//
//  dp_num2748.cpp
//  algorithm_baek
//
//  Created by 하동준 on 2021/08/08.
//

#include "bits/stdc++.h"
using namespace std;
#define FIO ios::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)

long long int dp[92];
int line;

long long int fibonnaci(int n){
    if (n == 1 or n == 2) {
        return 1;
    }
    if (dp[n] != 0) {
        return dp[n];
    }else{
        dp[n] = fibonnaci(n-1) + fibonnaci(n-2);
    }
    return dp[n];
}

int main(){
    FIO;
    cin>>line;
    cout<<fibonnaci(line)<<endl;
    
    
}
