//
//  num2839.cpp
//  algorithm_baek
//
//  Created by 하동준 on 2021/07/14.
//

#include "bits/stdc++.h"
using namespace std;
#define FIO ios::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)

void prog(int quantity){
    int max5 = quantity/5;
    
    for (int i = max5; i >= 0; i--) {
        if((quantity - 5*i) % 3 == 0){
            cout << (i + ((quantity - 5*i) / 3)) <<endl;
            return;
        }else if(i == 0 and (quantity - 5*i) % 3 != 0){
            cout<<-1<<endl;
        }
    }
}

int main(){
    FIO;
    
    int quantity;
    cin>>quantity;
    
    prog(quantity);
    
    
}
