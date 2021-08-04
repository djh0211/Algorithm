//
//  conquer_num2630.cpp
//  algorithm_baek
//
//  Created by 하동준 on 2021/08/04.
//
#include "bits/stdc++.h"
using namespace std;
#define FIO ios::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)

int n;
int paper[130][130];
int blue; int white;




void DFS(int x, int y, int Size)
{
    bool Zero, One;
    Zero = One = true;
    for (int i = x; i < x + Size; i++)
    {
        for(int j = y; j <y + Size; j++)
        {
            if (paper[i][j] == 1) Zero = false;
            if (paper[i][j] == 0) One = false;
        }
    }
 
    if (Zero == true) { white++; return; }
    if (One == true) { blue++; return; }
    
    DFS(x, y, Size / 2);
    DFS(x, y + Size / 2, Size / 2);
    DFS(x + Size / 2, y, Size / 2);
    DFS(x + Size / 2, y + Size / 2, Size / 2);
}



int main(){
    FIO;
    cin>>n;
    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            cin>>paper[i][j];
        }
    }
    
    DFS(0,0,n);
    cout<<white<<endl;
    cout<<blue<<endl;
    
    
    
    
}
