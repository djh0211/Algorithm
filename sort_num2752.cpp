//
//  sort_num2752.cpp
//  algorithm_baek
//
//  Created by 하동준 on 2021/07/22.
//

#include "bits/stdc++.h"
using namespace std;
#define FIO ios::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)

vector<int> vec;

int main(){
    FIO;
    
    int a;
    for(int i =0; i<3; i++){
        cin>>a;
        vec.push_back(a);
    }
    
    sort(vec.begin(),vec.end());
    
    for (int i = 0; i<vec.size(); i++) {
        cout<<vec[i]<<" ";
    }
    
    
}
