//
//  main.cpp
//  Lesson10-SeudoFuncation
//
//  Created by cfv on 2019/4/12.
//  Copyright © 2019 SpeedUp. All rights reserved.
//

#include <iostream>
void hello(){
    printf("hello\n");
}
class Hello{
public:
    void operator()(){
        printf("Hello CPP!~\n");
    }
};
int main(int argc, const char * argv[]) {
    
//    hello();
    Hello h;
    h();//伪函数
    
    return 0;
}
