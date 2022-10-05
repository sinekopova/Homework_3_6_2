#pragma once

#include "Counter.h"

Counter createCounter(int init) {
    if (init != 0)
        return Counter(init);
    else
        return Counter();
};

int getInit() {
    std::string isInit;
    bool answer = false;
    int init = 0;

    while (!answer)
    {
        std::cout << "Вы хотите указать начальное значение счётчика ? Введите да или нет : ";
        std::cin >> isInit;

        if (isInit == "да") {
            answer = true;
            std::cout << "Введите начальное значение счётчика : ";
            std::cin >> init;
        }
        else if (isInit == "нет") {
            answer = true;
        }
        else {
            answer = false;
        }
    }

    return init;
};

void processing(Counter& count) {
    bool exit = false;
    while (!exit)
    {
        char com = 0;
        std::cout << "Введите команду('+', '-', '=' или 'x') : ";
        std::cin >> com;
        switch (com)
        {
        case '+':
            count.increaseCounter();
            break;
        case '-':
            count.decreaseCounter();
            break;
        case '=':
            std::cout << count.getCounter() << std::endl;
            break;
        case 'x': case 'х':
            exit = true;
            std::cout << "До свидания!" << std::endl;
            break;
        default:
            break;
        }
    }
};