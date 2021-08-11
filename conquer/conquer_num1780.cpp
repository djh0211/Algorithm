//
//  conquer_num1780.cpp
//  algorithm_baek
//
//  Created by 하동준 on 2021/08/04.
//

#include "bits/stdc++.h"
using namespace std;
#define FIO ios::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)

int result[3];
int paper[2200][2200];

// 단위 종이 내 모든 칸들이 모두 같은지 아닌지 판단하는 함수
bool check(int row, int col, int num) {
    // 시작점
    int start = paper[row][col];
    for (int i = row; i < row + num; i++) {
        for (int j = col; j < col + num; j++) {
            if (start != paper[i][j])
                return false;
        }
    }
    return true;
}

// 9분할로 나눠보는 함수
void divide(int row, int col, int num) {

    // 지금 단위 종이 내 모든 칸들의 값이 같을 경우
    if (check(row, col, num)) {
        result[paper[row][col]]++;
    }
    else {
        // 새로운 단위사이즈를 만든다.
        int size = num / 3; // 처음에 num 27이었다면 다음 단위 정사각형은 한 변의 길이가 9
        
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                divide(row + size * i, col + size * j, size);
            }
        }
    }
}


int main() {

    int N;
    scanf("%d", &N);

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {

            int input;
            scanf("%d", &input);
            input++; // -1,0,1 을 각각 0,1,2로 표현
            paper[i][j] = input;
        }
    }
    divide(0, 0, N);
    printf("%d\n%d\n%d", result[0], result[1], result[2]);

}


