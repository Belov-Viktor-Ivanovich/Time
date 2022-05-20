

#include <iostream>
#include "Time.cpp"

using namespace std;

int main()
{
    Time time1(2,30,55);
    Time time2(1,40,15);
    time1.show();
    time2.show();
    Time time3 = time1.summa(time2);
    time3.show();
}

