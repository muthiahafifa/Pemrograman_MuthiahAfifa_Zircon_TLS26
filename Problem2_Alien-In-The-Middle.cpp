/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;

int main() {
    char message[1000];

    cout << "Enter message (uppercase letters): ";
    cin >> message;

    int i = 1;
    char previous = message[0];

    while (message[i] != '\0') {
        char current = message[i];

        int currentValue = current - 'A' + 1;
        int previousValue = previous - 'A' + 1;

        int newValue = currentValue + previousValue;

        if (newValue > 26) {
            newValue -= 26;
        }

        message[i] = char('A' + newValue - 1);

        previous = current;
        i++;
    }

    cout << "Encrypted message: " << message << endl;

    return 0;
}