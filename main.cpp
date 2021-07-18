

#include "bits/stdc++.h"

typedef long long ll;
using namespace std;

#define FIO ios::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
#define NUM 1005
#define MAX 10005

int main(int argc, const char * argv[]) {   FIO;//입출력 가속
    int n = 9, sum = 100;
    vector<int>person;
    vector<int>dp;
    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        person.push_back(x);
    }
    
    sort(person.begin(), person.end());
    
    for(int i=0; i<n; i++){
        int tmp1 = person[i];
        for(int j=0; j<n; j++){
            int tmp2 = person[j];
            for(int k=0; k<n; k++){
                if(person[k] != tmp1 || person[k] != tmp2){
                    sum -= person[k];
                    dp.push_back(person[k]);
                    if(sum == 0 && (dp.size() == 7)){
                        for(int i=0; i<7; i++)
                            cout<<dp[i]<<"\n";
                        return 0;
                    }
                }
            }
            sum = 100;
            dp.clear();
        }
        sum = 100;
        dp.clear();
    }
    
    return 0;
}
