#include "world_1.h"
#include "includes.h"
#include "randomizer.h"

int currentLevel = 1;

void worldOne() {
    start:printf("You're currently on: World 1, Level %d\n\n", currentLevel);
    int laneNumber = 0;
    if (currentLevel == 1) {
        char *plants[] = {"Peashooter"};
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
                currentLevel++;
                goto start;
            }
        }
    }
    if (currentLevel == 2) {
        char *plants[] = {"Peashooter", "Sunflower"};
        int plantSize = sizeof(plants) / sizeof(plants[0]);
        laneNumber += 3;

        srand((unsigned int)time(NULL));
        randomizePlants(plants, plantSize);
        
        int isLevelDone = 0;
        int keyStroke;

        int i = 0;
        while (i < 3) {
            int firstThreeSunflowerLanes = rand() % laneNumber + 1;
            printf("Place plant %s on lane %d.\n", plants[1], firstThreeSunflowerLanes);  
            i++;
        }
        while (isLevelDone != 1) {
            int plantIndex = rand() % plantSize;
            int randomLane = rand() % laneNumber + 1;
            printf("Place plant %s on lane %d.\n", plants[plantIndex], randomLane);
            
            keyStroke = getch();
            if (keyStroke == 'c') 
                continue;
            if (keyStroke == 'f') {
                isLevelDone = 1;
                currentLevel++;
                goto start;
            }
        }
    }
}