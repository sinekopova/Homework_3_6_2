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
        std::cout << "�� ������ ������� ��������� �������� �������� ? ������� �� ��� ��� : ";
        std::cin >> isInit;

        if (isInit == "��") {
            answer = true;
            std::cout << "������� ��������� �������� �������� : ";
            std::cin >> init;
        }
        else if (isInit == "���") {
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
        std::cout << "������� �������('+', '-', '=' ��� 'x') : ";
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
        case 'x': case '�':
            exit = true;
            std::cout << "�� ��������!" << std::endl;
            break;
        default:
            break;
        }
    }
};