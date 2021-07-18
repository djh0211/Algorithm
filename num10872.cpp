//
//  num10872.cpp
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
    if(0<=input and input<=12){
        return input;
    }
    else{
        cout << "Wrong Number. Retry!" << endl; // 에러 메시지 출력
        cin.clear(); // 오류스트림을 초기화
        cin.ignore(256, '\n'); // 입력버퍼를 비움
        return GetNumber(); // 함수를 재호출한다
    }
}

int Factorial(int num){
    if (num <= 1) return 1;
 
    return num * Factorial(num - 1);


}

int main(){
    int input = GetNumber();
    int result = Factorial(input);
    cout<<result<<endl;
    return 0;

    
}


