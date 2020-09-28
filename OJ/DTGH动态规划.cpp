/*************************************************************************
	> File Name: DTGH动态规划.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年04月22日 星期三 20时03分42秒
 ************************************************************************/

#include<iostream>
using namespace std;

int  n, all, w[105], v[105], ans[105][10000];

int main() {
    cin >> all >> n;
    for(int i = 1; i <= n; i++) {
        cin >> w[i] >> v[i];
    }
    for (int i = 1; i <= n; i++) {
        for(int j = 1; j <= all; j++) {
            if (j < w[i]) {
                ans[i][j] = ans[i - 1][j];
            } else {
                ans[i][j] = max(ans[i - 1][j],v[i] + ans[i - 1][j - w[i]]);
            }
        }
    }
    cout << ans[n][all] << endl;

    return 0;
}
