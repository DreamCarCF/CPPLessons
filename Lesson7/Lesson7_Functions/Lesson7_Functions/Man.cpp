//
//  Man.cpp
//  Leson-3_Classes
//
//  Created by cfv on 2019/4/12.
//  Copyright © 2019 SpeedUp. All rights reserved.
//

#include "Man.hpp"
Man::Man(int age):People(age,1) {
}

void Man::eatFood(){
//    People::eatFood();
    printf("Man say: we are eating meat!~\n");
}

void Man::singSong(){
    printf("Man singSong:  Hello~ la la la~\n");
}
