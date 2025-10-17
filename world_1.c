#include "world_1.h"
#include "includes.h"

char *plants[] = {"Peashooter"};
int currentLevel = 1;

void worldOne() {
    printf("You're currently on: World 1, Level %d\n\n", currentLevel);
    int laneNumber = 0;
    if (currentLevel == 1) {
        laneNumber += 1;
        int isLevelDone = 0;
        int keyStroke;

        printf("Place plant %s on lane %d.\n", plants[0], laneNumber);
        while (isLevelDone != 1) {
            
            keyStroke = getch();
            if (keyStroke == 'c') {
                printf("Place plant %s on lane %d.\n", plants[0], laneNumber);
            }
            if (keyStroke == 'f') {
                isLevelDone = 1;
            }
        }
    }
}