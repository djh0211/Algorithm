//
//  num2309.cpp
//  algorithm_baek
//
//  Created by 하동준 on 2021/07/01.
//

#include "bits/stdc++.h"
using namespace std;

#define FIO ios::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)




int main(){
    FIO;
    
    vector <int> vecList;
    int buffer;
    int sum9 = 0;
    for(int i=0;i<9;i++){
        cin>>buffer;
        vecList.push_back(buffer);
        sum9 = sum9 + buffer;
    }
    sort(vecList.begin(), vecList.end());
    
    vector<vector<int>> vecCase;
    int sum7 = sum9;
    
    for (int i=0; i<=8; i++) {
        for(int j=0;j<=8;j++){
            if (i != j) {
                sum7 = sum7 - vecList[i] - vecList[j];
                if (sum7 == 100) {
                    if (i>j) {
                        vecCase.push_back({i,j});
                    }
                }
                sum7 = sum9;
            }
        }
    }
    
    cout<<endl;
    
    if (vecCase.size() != 0) {
        for (int i=0; i<=8; i++) {
            if (i != vecCase[0][0] and i != vecCase[0][1]) {
                cout<<vecList[i]<<endl;
            }
        }
    }
    
    
    
    
    
    
}
