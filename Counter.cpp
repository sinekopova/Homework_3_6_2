#include "Counter.h"

Counter::Counter() {
    m_value = 0;
};

Counter::Counter(int m_value) {
    this->m_value = m_value;
};

void Counter::setCounter(int m_value) {
    this->m_value = m_value;
};

int Counter::getCounter() {
    return m_value;
};

void Counter::increaseCounter() {
    ++m_value;
};

void Counter::decreaseCounter() {
    --m_value;
};
