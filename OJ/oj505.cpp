/*************************************************************************
	> File Name: oj505.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年05月13日 星期三 16时57分39秒
 ************************************************************************/

#include<iostream>
#include<algorithm>
using namespace std;
int n;
string str[100005];
bool cmp(string a, string b) {
    return a + b > b + a;
}
int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> str[i];
    }
    sort(str, str  +n, cmp);
    for (int i = 0; i < n; i++) {
        cout << str[i];
    }
    cout << endl;

    return 0;
}
