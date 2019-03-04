// do_while.cpp
#include<cstdio>
using namespace std;

int main() {
    int sum = 0;
    int i = 0;
    do {
        int x;
        scanf("%d", &x);
        sum += x;
        ++i;
    } while (i < 10);
    printf("%d\n", sum);
    return 0;
}