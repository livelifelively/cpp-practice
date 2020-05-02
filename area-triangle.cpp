//
//  area-triangle.cpp
//  practice
//
//  Created by Ashish Rana on 02/05/20.
//  Copyright © 2020 Ashish Rana. All rights reserved.
//

#include <iostream>

int main () {
    int h, b;
    float a;
    
    std::cout << "Enter Height and breadth\n";
    std::cin >> h >> b;
    a = (float)(h*b)/2;
    std::cout << "Area is: " << a << "\n";
    return 0;
}
