//
//  main.cpp
//  MyFirstCpeepee
//
//  Created by Brailow, Parker on 1/23/18.
//  Copyright © 2018 Brailow Inc. All rights reserved.
//


//preprocessor commands don't have a semicolon
#include <iostream>

using namespace std;

int oldMain()
{
    // insert code here...
    cout << "Hello, World!\n" << endl;
    string input;
    getline(cin, input);
    cout << "U sed: " << input << endl;
    
    return 255;
}
