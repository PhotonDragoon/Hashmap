// Hashmapfinal.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>
#include <sstream>
#include <unordered_map>
#include <string>
using namespace std;

int main()
{
    ifstream myfile;
    myfile.open("large100k.txt");
    int integer, x, t;
    string a;
    unordered_map<int, bool> values;
    while (myfile >> integer)
    {
        values[integer] = true;
    }
    bool flag = true;
    while (flag == true)
    {
        cout << "Input x: ";
        cin >> x;
        cout << "Input t: ";
        cin >> t;
        if (values.count(x) == true && values.count(t - x) == true)
        {
            cout << "Yes";
        }
        else
        {
            cout << "No";
        }
        cout << endl;
        cout << "Do you want to try another?(type y for yes, n for no): ";
        cin >> a;
        if (a == "y")
        {
            flag = true;
        }
        else
        {
            break;
        }
    }
}