#include <iostream>
#include <vector>
#include "problem2.cpp"

using namespace std;


void printVector(const vector<int> &nums)
{
    cout << "[";
    for (int i = 0; i < nums.size(); ++i)
    {
        cout << nums[i];
        if (i != nums.size() - 1)
            cout << ", ";
    }
    cout << "]" << endl;
}

int main()
{
    Solution sol;


    vector<int> test1 = {0, 0, 0, 0, 0};
    cout << "Test 1 Original: ";
    printVector(test1);
    sol.moveZero(test1);
    cout << "Test 1 Result:   ";
    printVector(test1);
    cout << endl;

   
    vector<int> test2 = {5, 6, 7, 8, 9};
    cout << "Test 2 Original: ";
    printVector(test2);
    sol.moveZero(test2); // function call
    cout << "Test 2 Result:   ";
    printVector(test2);
    cout << endl;

    vector<int> test3 = {1, 2, 3, 4, 0};
    cout << "Test 3 Original: ";
    printVector(test3);
    sol.moveZero(test3);
    cout << "Test 3 Result:   ";
    printVector(test3);
    cout << endl;

    vector<int> test4 = {0, 9, 8, 7, 6};
    cout << "Test 4 Original: ";
    printVector(test4);
    sol.moveZero(test4);
    cout << "Test 4 Result:   ";
    printVector(test4);
    cout << endl;

   
    vector<int> test5 = {0, 1, 0, 2, 3, 0, 4, 0, 5};
    cout << "Test 5 Original: ";
    printVector(test5);
    sol.moveZero(test5);
    cout << "Test 5 Result:   ";
    printVector(test5);
    cout << endl;

    vector<int> test6 = { };
    cout << "Test 6 Original: ";
    printVector(test6);
    sol.moveZero(test6);
    cout << "Test 6 Result:   ";
    printVector(test6);
    cout << endl;

    vector<int> test7 = {0, 0, 0, 0, 0, 0};
    cout << "Test 7 Original: ";
    printVector(test7);
    sol.moveZero(test7);
    cout << "Test 7 Result:   ";
    printVector(test7);
    cout << endl;

    return 0;
}
