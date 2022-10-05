#include <windows.h>

#include "Counter.h"
#include "functions.h"

int main()
{

    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int init = getInit();

    Counter count = createCounter(init);

    processing(count);

    return 0;
}
