/*************************************************************************
	> File Name: ep38.c
	> Author: 
	> Mail: 
	> Created Time: 2019年12月24日 星期二 18时22分05秒
 ************************************************************************/

#include<stdio.h>
#include<math.h>
int digit(int n) {
    if(n == 0) return 1;
    return floor(log10(n)) + 1;
}
int calc(int x) {
    long long ans = 0,n = 1;
    while(digits(ans) < 9) {
        ans *= pow(10,digits(x * n));
        ans += n * x;
        n++;
    }
    if(digits(ans) != 9) return 0;
    int num[10] = {1,0};
    int tmp = ans;
    while(tmp) {
        if(num[tmp % 10]) return 0;
        num[tmp % 10] ++;
        tmp /= 10;
    }
    return ans;
}
int main() {
    long long ans = 0;
    for(int i = 1; i < 10000; i++) {
        int tmp = calc(i);
        if(tmp > ans) ans = tmp;
    }
    printf("%lld\n",ans);
    return 0;
}
