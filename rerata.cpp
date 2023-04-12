#include <iostream>
using namespace std;

void hitungRerata() {
    int N;
    cin >> N;

    double total = 0;

    for (int i = 0; i < N; i++) {
        double data;
        cin >> data;
        total += data;
    }

    double rerata = total / N;

    cout << rerata << endl;
}
