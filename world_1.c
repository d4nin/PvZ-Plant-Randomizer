#include "world_1.h"
#include "includes.h"
#include "randomizer.h"

int currentLevel = 1;

void worldOne() {
    start:printf("You're currently on: World 1, Level %d\n\n", currentLevel);
    srand((unsigned int)time(NULL));
    int laneNumber = 0;
    int isLevelDone = 0;
    int keyStroke;

    if (currentLevel == 1) {
        char *plants[] = {"Peashooter"};
        laneNumber += 1;
        
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

        int i = 0;
        while (i < 3) {
            int firstThreeSunflowerLanes = rand() % laneNumber + 1;
            printf("Place plant %s on lane %d.\n", plants[1], firstThreeSunflowerLanes);  
            i++;
        }

        randomizePlants(plants, plantSize);

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
    if (currentLevel == 3) {
        char *plants[] = {"Peashooter", "Sunflower", "Cherry Bomb"};
        int plantSize = sizeof(plants) / sizeof(plants[0]);
        laneNumber += 3;

        randomizePlants(plants, plantSize);

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
    if (currentLevel == 4) {
        char *plants[] = {"Peashooter", "Sunflower", "Cherry Bomb", "Wall-Nut"};
        int plantSize = sizeof(plants) / sizeof(plants[0]);
        laneNumber += 5;

        randomizePlants(plants, plantSize);

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
    if (currentLevel == 5) {
        char *wallnuts[] = {"Wall-Nut", "Explode-O-Nut"};
        int wallnutSize = sizeof(wallnuts) / sizeof(wallnuts[0]);
        laneNumber += 5;

        randomizePlants(wallnuts, wallnutSize);

        while (isLevelDone != 1) {
            int wallnutIndex = rand() % wallnutSize;
            int randomLane = rand() % laneNumber + 1;
            printf("BOWL %s INTO LANE %d\n", wallnuts[wallnutIndex], randomLane);

            int CRAZY = rand() % 100;
            if (CRAZY == 0) printf("I'M CRAZY!!!!!!!!\n");

            keyStroke = getch();
            if (keyStroke == 'c') {
                continue;
            }
            if (keyStroke == 'f') {
                isLevelDone = 1;
                currentLevel++;
                goto start;
            }
        }
    }
    if (currentLevel == 6) {
        char *plants[] = {"Peashooter", "Sunflower", "Cherry Bomb", "Wall-Nut", "Potato Mine"};
        int plantSize = sizeof(plants) / sizeof(plants[0]);
        laneNumber += 5;

        randomizePlants(plants, plantSize);

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
    if (currentLevel == 7) {
        char *plants[] = {"Peashooter", "Sunflower", "Cherry Bomb", "Wall-Nut", "Potato Mine", "Snow Pea"};
        int plantSize = sizeof(plants) / sizeof(plants[0]);
        laneNumber += 5;

        randomizePlants(plants, plantSize);

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