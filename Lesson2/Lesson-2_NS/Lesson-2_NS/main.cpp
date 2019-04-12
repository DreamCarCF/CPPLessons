//
//  main.cpp
//  Lesson-2_NS
//
//  Created by cfv on 2019/4/12.
//  Copyright © 2019 SpeedUp. All rights reserved.
//

#include <iostream>
#import "People.hpp"
using namespace SpeedUp;
int main(int argc, const char * argv[]) {
    
    People *p = new People;
    p->eatFood();
    delete p;
    
    return 0;
}
