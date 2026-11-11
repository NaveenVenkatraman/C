#include <iostream>
using namespace std;

int main() {
    int totalDays = 1200;
    int years = totalDays / 365;
    int remaining = totalDays % 365;
    int months = remaining / 30;
    int days = remaining % 30;
    cout << years << " years, " << months << " months, " << days << " days" << endl;
    return 0;
}
