//
//  Runner.cpp
//  MyFirstCpeepee
//
//  Created by Brailow, Parker on 1/23/18.
//  Copyright © 2018 Brailow Inc. All rights reserved.
//

#include "Controller.hpp"

int main()
{
    Controller app;
    app.start();
    
    
    //only use new with a pointer
    //* means make a pointer
    Controller * appPointer = new Controller();
    //(*blahblah) means use that pointer
    //selector operator (->) used to call a method
    appPointer->start();
    
    return 255;
}
