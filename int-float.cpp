//
//  int-float.cpp
//  practice
//
//  Created by Ashish Rana on 02/05/20.
//  Copyright © 2020 Ashish Rana. All rights reserved.
//

#include <iostream>

int main () {
    int a, b, c;
    float d;
    a = 13;
    b = 5;
    // result of division of itegers is integer. result needs to be type casted.
    // c does not hold float, it will parse int.
    c = (float)a/b;
    // d can hold float value
    d = (float)a/b;
    std::cout << c << " " << d;
}
