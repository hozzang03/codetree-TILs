#include <iostream>
using namespace std;

int days_in_month(int month) {
    int days_in_months[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
    return days_in_months[month - 1];
}

int main() {
    int m1, d1, m2, d2;
    cin >> m1 >> d1 >> m2 >> d2;

    int total_days = 0;

    if (m1 == m2) {
        total_days = d2 - d1 + 1;
    } else {
        total_days += days_in_month(m1) - d1 + 1;
        for (int i = m1 + 1; i < m2; i++) {
            total_days += days_in_month(i);
        }
        total_days += d2;
    }

    cout << total_days << endl;
    return 0;
}