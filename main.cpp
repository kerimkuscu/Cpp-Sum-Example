#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int main(int argc, char** argv) {
    
    float number1, number2, sum;
    
    cout << "Please entered number 1 = ";
    cin >> number1;
    
    cout << "Please entered number 2 = ";
    cin >> number2;
    
    sum = number1 + number2;
    
    cout << number1 << " + " << number2 << " = " << sum;
    
	return 0;
}
