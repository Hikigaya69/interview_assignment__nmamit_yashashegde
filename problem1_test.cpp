#include <iostream>
#include <vector>
#include <climits>
#include "problem1.cpp"

using namespace std;

void printArray(const vector<int> &arr)
{
    if (arr.size() >=40)
    {
        cout << "too large to display (0 to " << arr.size() << " elements)";
        return;
    }

    cout << "[";
    for (size_t i = 0; i < arr.size(); ++i)
    {
        cout << arr[i];
        if (i < arr.size() - 1)
            cout << ", ";
    }
    cout << "]";
}

int main()
{
    Solution sol;

    vector<int> test1 = {3, 2, 3, 9};                      // true
    vector<int> test2 = {1, 2, 3, 4};                      // false
    vector<int> test3 = {1, 2, 3, -1};                     // false
    vector<int> test4 = {1, 2, -3, 4};                     // false
    vector<int> test5 = {1, 1, 1, 3, 3, 4, 3, 2, 4, 2};    // true
    vector<int> test6 = {0, 0, 0, 1};                      // true
    vector<int> test7 = {-1, -2, -3, -4, -5, -6};          // false
    vector<int> test8 = {INT_MAX, INT_MIN, 0, 1, INT_MAX}; // true
    vector<int> test9 = {999, 1000, 1001, 1002, 999};      // true
    vector<int> test10 = {100, 200, 300, 400, 500};        // false
    vector<int> test11 = {-1000, -999, -998, -997, -997};  // true
    vector<int> test12 = {42, 42};                         // true
    vector<int> test13 = {};                               // false
    vector<int> test14 = {123456};                         // false

    vector<int> test15;
    for (int i = 1; i <= 10000; ++i)
        test15.push_back(i); // false

    vector<int> test16 = test15;
    test16.push_back(1); // true

    cout << "Test 1: ";
    printArray(test1);
    cout << " -> " << (sol.containsDuplicate(test1) ? "true" : "false") << endl;
    cout << "Test 2: ";
    printArray(test2);
    
    cout << " -> " << (sol.containsDuplicate(test2) ? "true" : "false") << endl;
    cout << "Test 3: ";
    printArray(test3);
    cout << " -> " << (sol.containsDuplicate(test3) ? "true" : "false") << endl;
    cout << "Test 4: ";
    printArray(test4);
    cout << " -> " << (sol.containsDuplicate(test4) ? "true" : "false") << endl;
    cout << "Test 5: ";
    printArray(test5);
    cout << " -> " << (sol.containsDuplicate(test5) ? "true" : "false") << endl;
    cout << "Test 6: ";
    printArray(test6);
    cout << " -> " << (sol.containsDuplicate(test6) ? "true" : "false") << endl;
    cout << "Test 7: ";
    printArray(test7);
    cout << " -> " << (sol.containsDuplicate(test7) ? "true" : "false") << endl;
    cout << "Test 8: ";
    printArray(test8);
    cout << " -> " << (sol.containsDuplicate(test8) ? "true" : "false") << endl;
    cout << "Test 9: ";
    printArray(test9);
    cout << " -> " << (sol.containsDuplicate(test9) ? "true" : "false") << endl;
    cout << "Test 10: ";
    printArray(test10);
    cout << " -> " << (sol.containsDuplicate(test10) ? "true" : "false") << endl;
    cout << "Test 11: ";
    printArray(test11);
    cout << " -> " << (sol.containsDuplicate(test11) ? "true" : "false") << endl;
    cout << "Test 12: ";
    printArray(test12);
    cout << " -> " << (sol.containsDuplicate(test12) ? "true" : "false") << endl;
    cout << "Test 13: ";
    printArray(test13);
    cout << " -> " << (sol.containsDuplicate(test13) ? "true" : "false") << endl;
    cout << "Test 14: ";
    printArray(test14);
    cout << " -> " << (sol.containsDuplicate(test14) ? "true" : "false") << endl;
    cout << "Test 15: ";
    printArray(test15);
    cout << " -> " << (sol.containsDuplicate(test15) ? "true" : "false") << endl;
    cout << "Test 16: ";
    printArray(test16);
    cout << " -> " << (sol.containsDuplicate(test16) ? "true" : "false") << endl;

    cout << "\n End of test cases\n";
    return 0;
}
