//
//  main.cpp
//  Lesson7_Functions
//
//  Created by cfv on 2019/4/12.
//  Copyright © 2019 SpeedUp. All rights reserved.
//

#include <iostream>
#include "Man.hpp"

int main(int argc, const char * argv[]) {
    People *p = new Man(23);
    //如果是Java的话会走Man类的实例方法，但C++不是这样的,C++会直接走父类方法，
    //但是如果添加virtual虚函数在方法前，就可以实现动态重写方法，即走Man的类方法。   如  eatFood();
    //还有一种---纯虚函数，父类可以只是声明方法，但不实现，实现方法可以放到子类去实现。 如  singSong();
    p->eatFood();
    p->singSong();
    return 0;
}
