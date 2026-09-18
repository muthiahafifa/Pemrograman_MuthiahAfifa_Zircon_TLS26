/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;

int main() {
    int n, k;

    cout << "Enter number of astronauts (N): ";
    cin >> n;

    cout << "Enter initial (K): ";
    cin >> k;

    if (n < 1 || k < 2) {
        cout << "Invalid input." << endl;
        return 0;
    }

    int* astronauts = new int[n];

    for (int i = 0; i < n; i++) {
        astronauts[i] = i + 1;
    }

    int remaining = n;
    int current = 0;

    cout << "Elimination order: ";

    while (remaining > 1) {
        int index = (current + k - 1) % remaining;
        int eliminated = astronauts[index];

        cout << eliminated;

        if (remaining > 2) {
            cout << " ";
        }

        if (eliminated % 2 == 0) {
            k += 2;
        } else {
            k -= 1;

            if (k < 2) {
                k = 2;
            }
        }

        for (int i = index; i < remaining - 1; i++) {
            astronauts[i] = astronauts[i + 1];
        }

        remaining--;

        if (remaining > 0) {
            current = index % remaining;
        }
    }

    cout << "\nLast astronaut: " << astronauts[0] << endl;

    delete[] astronauts;

    return 0;
}