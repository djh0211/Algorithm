//
//  sort_num2750.cpp
//  algorithm_baek
//
//  Created by 하동준 on 2021/07/22.
//

#include "bits/stdc++.h"
using namespace std;
#define FIO ios::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)

vector<int> vec;

void quicksort(int start, int end){
    if (start>=end) {
        return;
    }
    int pivot = start;
    int i = start + 1;
    int j = end;
    int temp;
    
    while (i <= j) {
        while(vec[i] <= vec[pivot] && i <= end) {
            i++;
        }
        while (vec[j] >= vec[pivot] && j > start) {
            j--;
        }
        if (i > j) {
            temp = vec[j];
            vec[j] = vec[pivot];
            vec[pivot] = temp;
        }else{
            temp = vec[i];
            vec[i] = vec[j];
            vec[j] = temp;
        }
    }
    quicksort(start, j-1);
    quicksort(j+1, end);
}

int main(){
    FIO;
    
    int line;
    cin>>line;
        
    int input;
    for(int i=0; i<line;i++){
        cin>>input;
        vec.push_back(input);
        
    }
    quicksort(0, line-1);
    
    for (int i = 0; i<vec.size(); i++) {
        cout<<vec[i]<<endl;
    }
    
    
}
