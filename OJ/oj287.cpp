/*************************************************************************
	> File Name: oj287.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年07月23日 星期四 17时03分27秒
 ************************************************************************/

#include<iostream>
#include <set>
using namespace std;

typedef pair<int, int> PII;

int main() {
    int n, t = 0, a;
    int sum = 0;
    cin >> n;
    set<PII> s;
    for (int i = 0; i < n; i++) {
        cin >> a;
        s.insert(PII(a, t++));
    }
    for (int i = 0; i < n - 1; i++) {
        int a = s.begin()->first;
        s.erase(s.begin());
        int b = s.begin()->first;
        s.erase(s.begin());
        sum += a + b;
        s.insert(PII(a + b, t++));
    }

    cout << sum << endl;
    return 0;
}
