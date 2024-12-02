#ifndef PLANET_MANAGER_H
#define PLANET_MANAGER_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Constants
#define MAX_PLANETS 100
#define NAME_LENGTH 50
#define TYPE_LENGTH 20
#define SIZE_LENGTH 20
#define RELEVANT_DATA_LENGTH 100
#define RELEVANT_DATA_COUNT 5

// Struct definition
typedef struct {
    char name[NAME_LENGTH];
    char type[TYPE_LENGTH];
    char size[SIZE_LENGTH];
    double distanceFromStar; // In astronomical units (AU)
    char relevantData[RELEVANT_DATA_COUNT][RELEVANT_DATA_LENGTH];
} Planet;

// Global variables
extern Planet catalogue[MAX_PLANETS];
extern int planetCount;

// Function declarations
void addPlanet();
void editPlanet();
void removePlanet();
void displayCatalogue();

#endif // PLANET_MANAGER_H
