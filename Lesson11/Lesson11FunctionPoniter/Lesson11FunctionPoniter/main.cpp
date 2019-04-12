//
//  main.cpp
//  Lesson11FunctionPoniter
//
//  Created by cfv on 2019/4/12.
//  Copyright © 2019 SpeedUp. All rights reserved.
//

#include <iostream>
#include <thread>
#include <unistd.h>
class Object;
//自定义类型
typedef void (Object::*SayHi)();
typedef void (Object::*CallLaterHandler)();
void threadFunc(Object *target,CallLaterHandler handler,int delay){
    sleep(delay);
    (target->*handler)();
}
void callLater(Object *target,CallLaterHandler handler,int delay){
    std::thread t(threadFunc,target,handler,delay);
    t.join();
}

#define CH(fp) (CallLaterHandler)(&fp)

class Object {
public:
    SayHi sayHi;
};

class Hello: public Object {
public:
    Hello(){
        //        sayHi = (SayHi)(&Hello::helloSayHi);
        //
        //        (this->*sayHi)();
        
        callLater(this, CH(Hello::helloSayHi), 5);
    }
    
    void helloSayHi(){
        printf("Hello CPP!~\n");
    }
};
int main(int argc, const char * argv[]) {
    Hello *h = new  Hello();
    delete h;
    return 0;
}
