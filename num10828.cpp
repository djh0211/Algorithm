//
//  num10828.cpp
//  algorithm_baek
//
//  Created by 하동준 on 2021/07/11.
//

#include "bits/stdc++.h"
using namespace std;
#define FIO ios::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)

stack<int> sstack;
void op(){
    string command;
    cin>>command;
    
    if (command == "push") {
        int num;
        cin>>num;
        sstack.push(num);
    }else if(command == "top"){
        if(sstack.size() == 0){
            cout<<"-1"<<endl;   //it can be wrong
        }else{
            cout<<sstack.top()<<endl;
        }
    }else if(command == "size"){
        cout<<sstack.size()<<endl;
    }else if (command == "empty"){
        if (sstack.empty()) {
            cout<<"1"<<endl;
        }else{
            cout<<"0"<<endl;
        }
    }else if(command == "pop"){
        if (sstack.empty()) {
            cout<<"-1"<<endl;
        }else{
            cout<<sstack.top()<<endl;
            sstack.pop();
        }
    }
    
}

int main(){
    FIO;
    int line;
    cin>>line;
    
    for (int i = 0 ; i<line; i++) {
        op();
    }
    
    return 0;
}
