//
//  conquer_num1629.cpp
//  algorithm_baek
//
//  Created by 하동준 on 2021/08/04.
//

#include "bits/stdc++.h"
using namespace std;
#define FIO ios::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)

long long int a; long long int b; long long int c;

int main(){
    FIO;
    
    cin>>a>>b>>c;
    
    long long int d = pow(a, b);
    cout<<d%c;
}
