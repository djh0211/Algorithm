//
//  num4673.cpp
//  algorithm_baek
//
//  Created by 하동준 on 2021/07/31.
//

#include "bits/stdc++.h"
using namespace std;
#define FIO ios::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)

#define N 10001

bool arr[N];
 
//셀프넘버 판별 함수.
int solution(int n){
    int sum = n;    //자기 자신을 먼저 더해주고
 
    while(1){   // 각 자리수의 숫자를 더해야하므로 1의 자리를 계속 더해준다.
 
        if(n == 0) break; //0이 되면 break
        sum += n%10;      //1의 자리 더해주기
        n = n/10;         //한자리씩 없애기
 
    }
 
    return sum;
}
 
 
int main(void){
 
    for(int i=1; i<N; i++){
        int idx = solution(i);
 
        if(idx <= N){
            arr[idx] = true;    //셀프넘버 아닌 수 true 로 변경
        }
 
    }
 
    //출력
    for(int i=1; i<N; i++){
        if(!arr[i]) printf("%d\n", i);
    }
 
    return 0;
}


