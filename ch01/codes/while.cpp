// while.cpp
#include<cstdio>
using namespace std;

int main() {
    int sum = 0;
    int i = 0;
    while (i < 10) {
        int x;
        scanf("%d", &x);
        sum += x;
        ++i;
    }
    printf("%d\n", sum);
    return 0;
}