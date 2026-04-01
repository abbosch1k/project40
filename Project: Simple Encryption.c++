#include <iostream>
using namespace std;

int main() {
    string text;
    int shift;

    cin >> text >> shift;

    for (char &c : text)
        c = c + shift;

    cout << text;
}
