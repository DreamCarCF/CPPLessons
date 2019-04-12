//
//  main.cpp
//  Lesson13_FriendClass
//
//  Created by cfv on 2019/4/12.
//  Copyright © 2019 SpeedUp. All rights reserved.
//

#include <iostream>
class A {
    friend class B; //B是A的友元类， 高耦合设计方式， 一般情况下 不会使用友元类，除非迫不得已。
private:
    int num;
public:
    A(){
        num = 10;
    }
};

class B:public A { //如果是友元类，不是继承关系也可以访问到私有变量
public:
    B(){
        printf("%d\n",num); //直接访问私有变量是不行的，需要用到友元类。
    }
};
int main(int argc, const char * argv[]) {

    B b;
    return 0;
}
