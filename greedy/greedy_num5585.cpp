//
//  greedy_num5585.cpp
//  algorithm_baek
//
//  Created by 하동준 on 2021/07/30.
//

//500 100 50 10 5 1

#include "bits/stdc++.h"
using namespace std;
#define FIO ios::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)

int coin[] = {500,100,50,10,5,1};
void func(int& money, int change, int& count) {
    if (money >= change) {
        count += money / change; money %= change;
        
    }
    
}


int main(){
    FIO;
    

    int product;
    int count = 0;
    cin>>product;
    
    product = 1000 - product;
    for (int i = 0; i<6; i++) {
        func(product, coin[i], count);
    }
    cout<<count<<endl;
    
    
    
    
    
}
