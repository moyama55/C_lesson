#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
    srand((unsigned)time(NULL));
    enum{FIRE, WATER, WIND, EARTH};
    int gems[10];
    const char GEM_CHARS[] = {'$', '*', '@', '#'};

    for(int i = 0; i < 10; i++){
        int gemType = rand() % 4;
        gems[i] = gemType;
    }
    
    for(int i =0; i < 10; i++){
        printf("%c",GEM_CHARS[gems[i]]);
    }

    return 0;
}
