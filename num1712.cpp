//
//  num1712.cpp
//  algorithm_baek
//
//  Created by 하동준 on 2021/07/13.
//

#include "bits/stdc++.h"
using namespace std;
#define FIO ios::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)

void prog(long long int a, long long int b, long long int c){
    if (c-b == 0) {
        cout<<-1<<endl;
        return;
    }
    long long int left = a/(c-b);
    if (left < 0) {
        cout<<-1<<endl;//can be wrong
    }else{
        cout<<left+1<<endl;
    }
    
}

int main(){
    FIO;
    long long int a;
    long long int b;
    long long int c;
    
    cin>>a>>b>>c;
    
    prog(a, b, c);

    
}
