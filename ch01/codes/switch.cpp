// switch.cpp
#include<cstdio>
using namespace std;

int main() {
    int op;
    scanf("%d", &op);
    switch (op) {
        case 1:
            printf("You choose 1\n");
            break;
        case 2:
            printf("You choose 2\n");
            break;
        case 3:
            printf("You choose 3\n");
            break;
        default:
            printf("You don't choose 1~3\n");
            break;
    }
    return 0;
}