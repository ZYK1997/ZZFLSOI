// implicit_conversion.cpp
#include<cstdio>
using namespace std;

int main() {
    double a = 3;           // int converted to double
    int b(3.998);           // double converted to int
    double tmp = 7.2e12;
    int c = tmp;            // result not defined in C++

    printf("%lf\n%d\n%d\n", a, b, c);

    return 0;
}