#include<iostream>

using namespace std;

int main()
{
    int value = 10;

    if (value < 25){
        int value = 25;
    }

    else{
        int value = 50;
    }

    cout << "The value after executing the above statements: " << value << endl;

    return 0;
}

