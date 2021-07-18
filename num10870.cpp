//
//  num10870.cpp
//  algorithm_baek
//
//  Created by 하동준 on 2021/06/30.
//

#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <vector>
#include <cctype>

using namespace std;

int GetNumber(){
    int input;
    cin>>input;
    
    if (cin.fail()){
        cout << "Wrong Number. Retry!" << endl; // 에러 메시지 출력
        cin.clear(); // 오류스트림을 초기화
        cin.ignore(256, '\n'); // 입력버퍼를 비움
        return GetNumber(); // 함수를 재호출한다
    }
    if(0<=input and input<20){
        return input;
    }
    else{
        cout << "Wrong Number. Retry!" << endl; // 에러 메시지 출력
        cin.clear(); // 오류스트림을 초기화
        cin.ignore(256, '\n'); // 입력버퍼를 비움
        return GetNumber(); // 함수를 재호출한다
    }
}
int Fibo(int num){
    if(num==0)
        return 0;
    if(num == 1)
        return 1;
    else if(num == 2)
        return 1;
    else return Fibo(num-1)+Fibo(num-2);
        
}

int main(){
    int input;
    cin>>input;

    int result = Fibo(input);
    cout<<result<<endl;
    
}
