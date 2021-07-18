//
//  num1965.cpp
//  algorithm_baek
//
//  Created by 하동준 on 2021/07/12.
//

#include "bits/stdc++.h"
using namespace std;
#define FIO ios::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)

vector<int> arr;
vector<int> dp;

int main(){
    FIO;

    int line;
    cin>>line;
    int ans = 0;
    
    for (int i = 0; i<line; i++) {
        int num;
        cin>>num;
        arr.push_back(num);
        dp.push_back(0);
    }
    dp[0] = 1;
    for (int i = 1; i < line; i++) {
            for (int j = 0; j < i; j++) {
                if (arr[i] > arr[j]) dp[i] = max(dp[i], dp[j]);
            }
            dp[i]++;
            ans = max(ans, dp[i]);
        }
    
    cout<<ans<<endl;

   

}
