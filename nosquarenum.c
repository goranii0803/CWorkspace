#include <stdio.h>
int main () {
    int a,b,i,j=0,cout=0;
    scanf("%d %d", &a, &b);
    for (i=1;i<=b;i++) {
        j = i*i;
        for (a;a<=b;a++) {
            if (a%j != 0) {
                cout +=1;
            }
        a=0;
        }
    }
    printf("%d",cout);
}
//실행 안됨
//2024.4.29 실행 안됨