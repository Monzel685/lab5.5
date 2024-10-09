#include <iostream>

using namespace std;

int binomialCoeff(int i, int j) {
    if (j == 0 || j == i)
        return 1;
    return binomialCoeff(i - 1, j - 1) + binomialCoeff(i - 1, j);
}

void printPascalsTriangle(int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            cout << binomialCoeff(i, j) << " ";
        }
        cout << endl;
    }
}

int main() {
    int n;
    cout << "n=  ";
    cin >> n;

    printPascalsTriangle(n);

    return 0;
}
