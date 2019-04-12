//
//  main.cpp
//  Lesson6-_Super
//
//  Created by cfv on 2019/4/12.
//  Copyright © 2019 SpeedUp. All rights reserved.
//

#include <iostream>
#include "Man.hpp"
int main(int argc, const char * argv[]) {
    Man *m = new Man(21);
    //    m->eatFood(); 指定执行的方法 ，比Java的super 要好很多，不管嵌套多少层，都可直接使用该类的方法。
    m->People::eatFood();
    
    return 0;
}
