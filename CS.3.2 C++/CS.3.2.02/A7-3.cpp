    #include <iostream>
    using namespace std;

    int main ()
    {
        for (int n=10; n>0; n--) 
        {
            if (n == 5)
                goto mylabel; 
            cout << "no. ";

        mylabel:
            cout << n << ", ";
        }
        cout << "liftoff!\n";

        return 0;
    }