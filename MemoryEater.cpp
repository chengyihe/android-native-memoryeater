#define LOG_TAG "MemoryEater"

#include <utils/Log.h>
#include <stdlib.h>
#include <unistd.h>

using namespace android;

int main()
{
    int *ptr;

    for (int i = 0; i < 1024 * 100; i++) {
        ptr = (int *)malloc(4096);
        *ptr = 10;
    }

    while (1) {
        usleep(1000000);
    }

    return 0;
}
