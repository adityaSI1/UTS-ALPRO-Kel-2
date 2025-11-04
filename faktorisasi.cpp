#include <iostream>
using namespace std;

int main() {
    int n;
    long long faktorial = 1;

    cout << "Masukkan bilangan: ";
    cin >> n;

    if (n < 0) {
        cout << "Faktorial tidak dapat dihitung untuk bilangan negatif." << endl;
    } else {
        for (int i = 1; i <= n; i++) {
            faktorial *= i;
        }
        cout << "Faktorial dari " << n << " adalah: " << faktorial << endl;
    }

    return 0;
}
