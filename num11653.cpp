//
//  num11653.cpp
//  algorithm_baek
//
//  Created by 하동준 on 2021/07/12.
//

#include "bits/stdc++.h"
using namespace std;
#define FIO ios::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)

#define MAX 10000000

vector<int> vec;

void prog(int input){
    int temp = input;
        
    for (int i = 2; i<=input; i++){
        while (input % i == 0) {
            temp = input / i;
            input = temp;
            vec.push_back(i);
        }
    }
}

int main(){
    FIO;
    int input;
    cin>>input;
    prog(input);
    
    sort(vec.begin(), vec.end());
    
    for (int i = 0; i < vec.size(); i++){
        cout << vec[i]<<endl;
    }
    
    
}
