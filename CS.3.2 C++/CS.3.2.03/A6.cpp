#include <iostream>
using namespace std;

int rectangle_area(int, int);

int main(){
    int area {};
    area = rectangle_area(5,20);
    cout << "Area of the rectangle is " << area << ".";

    return 0;
}

int rectangle_area(int width, int length) {
    return length * width;
}