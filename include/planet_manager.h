#ifndef PLANET_MANAGER_H
#define PLANET_MANAGER_H
void hello();

#define MAX_PLANETS 100
#define MAX_NAME 50

typedef struct {
    char name[MAX_NAME];
    char type[50];
    double size;
    double distance;
    char details[200];
} Planet;

extern Planet catalog[MAX_PLANETS];
extern int planetCount;

void addPlanet();
void editPlanet();
void deletePlanet();
void viewPlanet();
#define MAX_PLANETS 100
#define MAX_NAME 50

typedef struct {
    char name[MAX_NAME];
    char type[50];
    double size;
    double distance;
    char details[200];
} Planet;

extern Planet catalog[MAX_PLANETS];
extern int planetCount;

void addPlanet();
void editPlanet();
void deletePlanet();
void viewPlanet();

#endif //PLANET_MANAGER_H
