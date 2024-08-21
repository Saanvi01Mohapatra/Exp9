#include <iostream>
using namespace std;

int main() {
    int num = 5;          
    int multiplier = 3;   
    int *ptr = &num;  
    cout << "Original value of num: " << *ptr << endl;
    *ptr = (*ptr) * multiplier;
    cout << "New value of num after multiplication: " << *ptr << endl;
    return 0;
}