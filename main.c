#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "world_1.h"

int main() {
    int currentWorld = 1; // starts at current world
    
    switch (currentWorld) {
        case 1:
            worldOne();
            break;
    }
    return 0;
}