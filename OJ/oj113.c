/*************************************************************************
	> File Name: oj113.c
	> Author: 
	> Mail: 
	> Created Time: 2020年01月18日 星期六 19时53分20秒
 ************************************************************************/

#include<stdio.h>
int main() {
    int y ,m;
    scanf("%d%d",&y,&m);
    switch(m) {
        case 1 : printf("31");break;
        case 2 : if( y % 400 == 0 || (y % 4 == 0 && y % 100 != 0) ) printf("29");else printf("28");break;
        case 3 : printf("31"); break;
        case 4 : printf("30"); break;
        case 5 : printf("31"); break;
        case 6 : printf("30"); break;
        case 7 : printf("31"); break;
        case 8 : printf("31"); break;
        case 9 : printf("30"); break;
        case 10 : printf("31"); break;
        case 11 : printf("30"); break;
        case 12 : printf("31"); break;

    }
    return 0;
}