//
//  conquer_num1992.cpp
//  algorithm_baek
//
//  Created by 하동준 on 2021/08/03.
//

#include "bits/stdc++.h"
using namespace std;
#define FIO ios::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
#define MAX 66
char a[MAX][MAX];

string solve(int n, int i, int j) {
    //2*2 까지가 아니고 1개단위까지 다 쪼갠다. 같은지 다른지 비교해야되니깐.
    if (n == 1) {
        return string(1, a[i][j]); //다쪼갰으면 그 자리의 수를 반환해서 a,b,c,d 만드는것.
    }
    string a = solve(n / 2, i, j);
    string b = solve(n / 2, i, j + n / 2);
    string c = solve(n / 2, i + n / 2, j);
    string d = solve(n / 2, i + n / 2, j + n / 2);
    //위의 과정들에 의해서 a,b,c,d가 다 나왔으면 비교해줘야될것이다.
    if (a == b && a == c && a == d && a.length() == 1) { //모두 같으면
        return a;//하나만 return한다. 즉 압축되었다는 의미
    }
    else { //압축되지않으면
        return "(" + a + b + c + d + ")"; //괄호로 합친 문자열을 return
    }
}

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    cout << solve(n, 0, 0);
    return 0;
}
