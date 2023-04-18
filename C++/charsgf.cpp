#include <string.h>
#include <stdio.h>
using namespace std;
int main()
{
    char mess[] = "more";
    char *ptr;
    ptr = mess + strlen(mess);
    while (ptr > mess)
    {
        printf("%X\n",static_cast<void*>(--ptr));
    }

}