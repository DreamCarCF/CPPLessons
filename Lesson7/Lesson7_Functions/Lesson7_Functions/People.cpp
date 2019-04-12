//
//  People.cpp
//  Leson-1_OOP
//
//  Created by cfv on 2019/4/12.
//  Copyright © 2019 SpeedUp. All rights reserved.
//

#include "People.hpp"
People::People(){
    this->age = 10;
    this->sex =1 ;
    
}

void People::eatFood(){
    printf("People say : We are eating meat!\n");
}

People::People(int age, int sex) {
    this->age = age;
    this->sex = sex;
}


int People::getAge() {
   return this->age;
}

int People::getSex() {
    return this->sex;
}
