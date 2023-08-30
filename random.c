#include <stdio.h>
#include <stdlib.h>

char randomchar();

char randchar()
{
    // 26 letters, offset by 97 for ASCII lowercase letters
    return (rand()%26 + 97);
}
