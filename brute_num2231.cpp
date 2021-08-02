//
//  brute_num2231.cpp
//  algorithm_baek
//
//  Created by 하동준 on 2021/08/01.
//

#include "bits/stdc++.h"
using namespace std;
#define FIO ios::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)

int main(){
    FIO;
    
    int num;
        int sum;
        int part;
     
        cin >> num;
     
        for (int i = 1; i < num; ++i) {
            sum = i;
            part = i;
     
            while (part) {
                sum += part % 10;
                part /= 10;
            }
     
            if (num == sum) {
                cout << i << endl;
                return 0;
            }
        }
     
        cout << "0" << endl;
     
        return 0;
}
