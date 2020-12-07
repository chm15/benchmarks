#include <ctime>
#include <iostream>

void timedFunc()
{
    // your test
    return;
}

int main(int, const char**)
{
     std::clock_t start;

     start = std::clock();
     timedFunc();
     std::cout << "Time: " << (std::clock() - start) / (double)(CLOCKS_PER_SEC / 1000) << " ms" << std::endl;

     return 0;
}
