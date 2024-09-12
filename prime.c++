#include <iostream>
#include <cmath>
using namespace std;

int main (){
    int number;
    bool isPrime = true;

    cout << "Please insert a number: ";
    cin >> number;

    if (number < 2) {
        cout << number << " is not a prime number." <<endl;
        return 0;
    }
    for (int i = 2; i <= number /2; i++) {
        if (number % i == 0) {
            cout << number << " is not a prime number, because it is divisible by " << i << endl;
            isPrime = false;
            break;
        }
    }

    if (isPrime) {
        cout << number << " is a prime number." <<endl;
    }
    
}