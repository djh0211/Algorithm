//
//  num2869.cpp
//  algorithm_baek
//
//  Created by 하동준 on 2021/07/14.
//

#include "bits/stdc++.h"
using namespace std;
#define FIO ios::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)


void prog(long long int a, long long int b, long long int v){
    if ((v-b)%((a-b)) == 0) {
        cout<<(v-b)/((a-b))<<endl;
    }else if ((v-b)%((a-b)) != 0){
        cout<<((v-b)/((a-b)))+1<<endl;
    }
}

int main(){
    FIO;
    long long int a;
    long long int b;
    long long int v;
    
    cin>>a>>b>>v;
    
    prog(a, b, v);
    
    
}
