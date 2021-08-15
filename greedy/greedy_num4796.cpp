//
//  greedy_num4796.cpp
//  algorithm_baek
//
//  Created by 하동준 on 2021/08/15.
//

#include "bits/stdc++.h"
using namespace std;
#define FIO ios::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)

int L; int P; int V;
vector<int> lvec;
vector<int> pvec;
vector<int> vvec;
vector<int> ans;
int temp;
int mok;
int na;

void prog(){
    for (int i=0; i<lvec.size(); i++) {
        mok = vvec[i]/pvec[i];
        na = vvec[i]%pvec[i];
        temp = mok * lvec[i];
        if (na >= lvec[i]) {
            temp = temp + lvec[i];
        }else{
            temp = temp + na;
        }
        ans.push_back(temp);
    }
}

int main(){
    FIO;
    while (true) {
        cin>>L>>P>>V;
        if (L==0 and P==0 and V==0) {
            break;
        }
        lvec.push_back(L);
        pvec.push_back(P);
        vvec.push_back(V);
    }
    prog();
    for (int i=0; i<ans.size(); i++) {
        cout<<"Case "<<i+1<<": "<<ans[i]<<endl;
    }
}
