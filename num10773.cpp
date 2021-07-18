//
//  num10773.cpp
//  algorithm_baek
//
//  Created by 하동준 on 2021/07/11.
//

#include "bits/stdc++.h"
using namespace std;
#define FIO ios::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)

int sum = 0;
stack<int> sstack;

void op(){
    int num;
    cin>>num;
    
    if (num == 0) {
        if (!sstack.empty()) {
            sstack.pop();
        }
    }else{
        sstack.push(num);
        
    }
}



int main(){
    FIO;
    
    int line;
    cin>>line;
    
    for (int i = 0; i<line;i++){
        op();
    }
    
    while (!sstack.empty()) {
        sum = sum + sstack.top();
        sstack.pop();
    }
    cout<<sum<<endl;
    
    
}
