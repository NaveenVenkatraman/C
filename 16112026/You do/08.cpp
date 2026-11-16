/*
Round up the number of tables
Problem Statement: Each classroom table seats four students. Read the
number of students from 1 to 100, and return the minimum number of
tables needed. Use std::ceil from <cmath> inside your function and
ensure the division keeps any fractional part. Label the library and userdefined calls.
Function to use: int tablesNeeded(int students);
Test Cases:
Input 1: 13
Output 1: 4
Input 2: 16
Output 2: 4
Input 3: 1
Output 3: 1
*/

#include <iostream>
#include <cmath>

using namespace std;

int tablesNeeded(int students) {

    return ceil(students / 4.0);
}

int main() {

    int students;

    cout << "Enter number of students: ";
    cin >> students;

    
    int result = tablesNeeded(students);

    cout << "Tables needed: " << result;

    return 0;
}