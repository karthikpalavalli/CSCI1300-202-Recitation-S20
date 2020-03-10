#include<iostream>

using namespace std;

int main(){
    int seconds, remainingSeconds;

    cout << "Enter the number of seconds: " << endl;
    cin >> seconds;

    int hours = seconds / 3600;
    remainingSeconds = seconds % 3600;

    cout << hours << " " << remainingSeconds << endl;

    return 0;
    
}