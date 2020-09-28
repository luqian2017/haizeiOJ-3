/*************************************************************************
	> File Name: oj404.c
	> Author: 
	> Mail: 
	> Created Time: 2020年03月18日 星期三 19时26分10秒
 ************************************************************************/

#include<stdio.h>
#include<iostream>
#include<queue>
using namespace std;

struct node {
    int x,y;
};
int n, m, k, sx, sy,ans = 1;
char mmap[3005][3005];
int dir[4][2] = {0,1,1,0,0,-1,-1,0};
int check[3005][3005];
queue<node> que;


void func(int x, int y) {
    for(int i = 0; i < 4; i++) {
        int tx = x + dir[i][0];
        int ty = y + dir[i][1];
        if (check[tx][ty] == 0 && mmap[tx][ty] != mmap[x][y] && mmap[tx][ty]) {
            ans ++;
            check[tx][ty] = 1;
            que.push({tx,ty});
            func(tx,ty);

        }
    }

}

int main () {
    scanf("%d%d%d",&n,&m,&k);
    for(int i = 1; i <= n; i++) {
        scanf("%s",&mmap[i][1]);
    }
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= m; j++) {
            if (check[i][j] == 0) {
                ans = 1;
                check[i][j] = 1;
                que.push({i,j});
                func(i,j);
                while (!que.empty()) {
                    node temp = que.front();
                    que.pop();
                    check[temp.x][temp.y] = ans;
                }
            }
        }
    }

    for(int i = 0; i < k; i++) {
        int a,b;
        cin >> a >> b;
        cout << check[a][b]<<endl;

    }
    return 0;
}