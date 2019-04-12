//
//  main.cpp
//  Leson-1_OOP
//
//  Created by cfv on 2019/4/12.
//  Copyright © 2019 SpeedUp. All rights reserved.
//

#include <iostream>
#include "People.hpp"
//class People {
//    public :
//    void eatFood(){
//        printf("We are eating meat!\n");
//    }
//};
int main(int argc, const char * argv[]) {
    People *p = new People();
    p->eatFood();
    delete p;
    return 0;
}
