#pragma once

#include <iostream>

class Counter {

public:
    Counter();
    Counter(int m_value) ;

    void setCounter(int m_value);
    int  getCounter();
    void increaseCounter();
    void decreaseCounter();

private:
    int m_value;
};