#ifndef SEARCH_MANAGER_H
#define SEARCH_MANAGER_H

#include"searchplanet_manager.h" //包含searchplanet_manager.h

//定义一个结构体用于储存
typedef struct {
    int catalogedPlanets;
    int discoveredPlanets;
    int observedPlanets;
}Statistics;

void calculateStatistics(Planet planets[], int count, Statistics* stats);
void displayStatistics(const Statistics* stats);

#endif //SEARCH_MANAGER_H
