#include <iostream>
#include <stdio.h>
#include <time.h>
int main()
{
    time_t t;
    struct tm *info;
    char buffer [100];
    time(&t);
    info = localtime(&t);
    std::cout<<asctime(info);
    return 0;
}
