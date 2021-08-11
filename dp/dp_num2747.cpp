//
//  dp_num2747.cpp
//  algorithm_baek
//
//  Created by 하동준 on 2021/08/08.
//
#include "bits/stdc++.h"
using namespace std;
#define FIO ios::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
int line;
int memo[100];

int Fibo(int n){
    if (n<=1) {
        return n;
    }else if(n==2){
        return 1;
    }else{
        if (memo[n] > 0) {
            return memo[n];
        }
        memo[n] = Fibo(n-2) + Fibo(n-1);
        return memo[n];
    }
}

int main(){
    FIO;
    cin>>line;
    
    cout<<Fibo(line)<<endl;
    
    
}
