//
//  cin-string.cpp
//  practice
//
//  Created by Ashish Rana on 02/05/20.
//  Copyright © 2020 Ashish Rana. All rights reserved.
//

#include <iostream>
using namespace std;

int main() {
    string firstName, lastName, fullName;
//    cout << "Enter Name\n";
//    cin >> firstName >> lastName;
//    cout << "Name is: " << firstName << " " << lastName << "\n";
    cout << "Enter Full Name\n";
    getline(cin, fullName);
    cout << "Full name is: " << fullName << "\n";
    return 0;
}

