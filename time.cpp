#include <iostream>
#include <time.h>
main()
{
    time_t a;
    struct tm *timeinfo;
    time(&a);
    timeinfo= localtime(&a);
    std::cout<<asctime(timeinfo);
    return 0;
}
