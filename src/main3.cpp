//
// Created by Константин Чернышев on 21.11.18.
//

#import "DateTime.h"
#import <iostream>

int main() {

    DateTime dateTime;

    std::cout << dateTime.getToday() << std::endl;
    std::cout << dateTime.getFuture(1) << std::endl;

    std::cout << std::endl;

    for (int i = -100; i < 151; i++) {

        std::cout << dateTime.getFuture(i) << std::endl;
    }


    std::cout << std::endl;

    return 0;
}