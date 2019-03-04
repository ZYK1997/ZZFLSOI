// for.cpp
#include<cstdio>
using namespace std;

int main() {
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        int x;
        scanf("%d", &x);
        sum += x;
    }
    printf("%d\n", sum);
    return 0;
}