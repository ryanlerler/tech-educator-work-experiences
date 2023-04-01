#include <string.h>
#include <iostream>
#include <ctype.h>

using namespace std;

void identify_alpha_numeric(char a[])
{
    int count_alpha = 0, count_digit = 0;
    for (int i=0; a[i] != '\0'; i++){
        if (isalpha(a[i]))
            count_alpha++;

        if (isdigit(a[i]))
            count_digit++;            
    }
    printf("The number of alphabets are %d\n", count_alpha);
    printf("The number of digits are %d", count_digit);
}

int main()
{
    cout << "Enter a sentence: ";
    char a[] {};
    cin >> a;
    identify_alpha_numeric(a);
}