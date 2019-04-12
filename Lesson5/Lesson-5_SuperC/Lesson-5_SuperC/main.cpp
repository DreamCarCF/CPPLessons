//
//  main.cpp
//  Lesson-5_SuperC
//
//  Created by cfv on 2019/4/12.
//  Copyright © 2019 SpeedUp. All rights reserved.
//

#include <iostream>
#include "Man.hpp"
int main(int argc, const char * argv[]) {
    Man *m = new Man(20);
    printf("age : %d\n",m->getAge());
    return 0;
}
