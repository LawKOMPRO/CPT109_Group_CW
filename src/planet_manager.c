#include <stdio.h>
#include "planet_manager.h"
Planet catalog[MAX_PLANETS];
int planetCount = 0;

void addPlanet() {
    if (planetCount >= MAX_PLANETS) {
        printf("行星目录已满。\n");
        return;
    }
    printf("输入行星名称: ");
    scanf("%49s", catalog[planetCount].name);
    printf("输入行星类型: ");
    scanf("%49s", catalog[planetCount].type);
    printf("输入行星大小: ");
    scanf("%lf", &catalog[planetCount].size);
    printf("输入与恒星的距离: ");
    scanf("%lf", &catalog[planetCount].distance);
    printf("输入行星详细信息: ");
    scanf("%199s", catalog[planetCount].details);
    planetCount++;
    printf("行星添加成功。\n");
}

void editPlanet() {
    char name[MAX_NAME];
    printf("输入要编辑的行星名称: ");
    scanf("%49s", name);
    for (int i = 0; i < planetCount; i++) {
        if (strcmp(catalog[i].name, name) == 0) {
            printf("输入新的行星类型: ");
            scanf("%49s", catalog[i].type);
            printf("输入新的行星大小: ");
            scanf("%lf", &catalog[i].size);
            printf("输入新的与恒星的距离: ");
            scanf("%lf", &catalog[i].distance);
            printf("输入新的行星详细信息: ");
            scanf("%199s", catalog[i].details);
            printf("行星信息更新成功。\n");
            return;
        }
    }
    printf("未找到指定的行星。\n");
}

void deletePlanet() {
    char name[MAX_NAME];
    printf("输入要删除的行星名称: ");
    scanf("%49s", name);
    for (int i = 0; i < planetCount; i++) {
        if (strcmp(catalog[i].name, name) == 0) {
            for (int j = i; j < planetCount - 1; j++) {
                catalog[j] = catalog[j + 1];
            }
            planetCount--;
            printf("行星删除成功。\n");
            return;
        }
    }
    printf("未找到指定的行星。\n");
}

void viewPlanet() {
    char name[MAX_NAME];
    printf("输入要查看的行星名称: ");
    scanf("%49s", name);
    for (int i = 0; i < planetCount; i++) {
        if (strcmp(catalog[i].name, name) == 0) {
            printf("行星名称: %s\n", catalog[i].name);
            printf("行星类型: %s\n", catalog[i].type);
            printf("行星大小: %lf\n", catalog[i].size);
            printf("与恒星的距离: %lf\n", catalog[i].distance);
            printf("行星详细信息: %s\n", catalog[i].details);
            return;
        }
    }
    printf("未找到指定的行星。\n");
}Planet catalog[MAX_PLANETS];
int planetCount = 0;

void addPlanet() {
    if (planetCount >= MAX_PLANETS) {
        printf("行星目录已满。\n");
        return;
    }
    printf("输入行星名称: ");
    scanf("%49s", catalog[planetCount].name);
    printf("输入行星类型: ");
    scanf("%49s", catalog[planetCount].type);
    printf("输入行星大小: ");
    scanf("%lf", &catalog[planetCount].size);
    printf("输入与恒星的距离: ");
    scanf("%lf", &catalog[planetCount].distance);
    printf("输入行星详细信息: ");
    scanf("%199s", catalog[planetCount].details);
    planetCount++;
    printf("行星添加成功。\n");
}

void editPlanet() {
    char name[MAX_NAME];
    printf("输入要编辑的行星名称: ");
    scanf("%49s", name);
    for (int i = 0; i < planetCount; i++) {
        if (strcmp(catalog[i].name, name) == 0) {
            printf("输入新的行星类型: ");
            scanf("%49s", catalog[i].type);
            printf("输入新的行星大小: ");
            scanf("%lf", &catalog[i].size);
            printf("输入新的与恒星的距离: ");
            scanf("%lf", &catalog[i].distance);
            printf("输入新的行星详细信息: ");
            scanf("%199s", catalog[i].details);
            printf("行星信息更新成功。\n");
            return;
        }
    }
    printf("未找到指定的行星。\n");
}

void deletePlanet() {
    char name[MAX_NAME];
    printf("输入要删除的行星名称: ");
    scanf("%49s", name);
    for (int i = 0; i < planetCount; i++) {
        if (strcmp(catalog[i].name, name) == 0) {
            for (int j = i; j < planetCount - 1; j++) {
                catalog[j] = catalog[j + 1];
            }
            planetCount--;
            printf("行星删除成功。\n");
            return;
        }
    }
    printf("未找到指定的行星。\n");
}

void viewPlanet() {
    char name[MAX_NAME];
    printf("输入要查看的行星名称: ");
    scanf("%49s", name);
    for (int i = 0; i < planetCount; i++) {
        if (strcmp(catalog[i].name, name) == 0) {
            printf("行星名称: %s\n", catalog[i].name);
            printf("行星类型: %s\n", catalog[i].type);
            printf("行星大小: %lf\n", catalog[i].size);
            printf("与恒星的距离: %lf\n", catalog[i].distance);
            printf("行星详细信息: %s\n", catalog[i].details);
            return;
        }
    }
    printf("未找到指定的行星。\n");
}

int main() {
    int choice;
    while (1) {
        printf("1. 添加行星\n2. 编辑行星\n3. 删除行星\n4. 查看行星\n5. 退出\n");
        printf("选择操作: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                addPlanet();
                break;
            case 2:
                editPlanet();
                break;
            case 3:
                deletePlanet();
                break;
            case 4:
                viewPlanet();
                break;
            case 5:
                printf("退出程序。\n");
                exit(0);
            default:
                printf("无效的选择。\n");
        }
    }
    return 0;
}
