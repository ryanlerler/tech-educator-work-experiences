#include <iostream>
using namespace std;

int main() {
    int num = 5;
    int *ptr;
    ptr = &num;

    printf("num = %d\n", num);
    printf("Address of num = %p\n", &num);
    printf("ptr = %p\n", ptr);
    printf("While using pointer num = %d", *ptr);
}