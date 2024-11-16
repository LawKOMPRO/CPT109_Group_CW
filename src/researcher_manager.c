#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// ����ṹ�����ڴ洢�о���Ա��Ϣ
typedef struct {
    int account_number;
    char name[50];
    char email[50];
} Researcher;

// ������ʾ��ģ������
Researcher researchers[100];
int researcher_count = 0;

// ע�����о���Ա�ĺ���
void register_researcher(int account_number, char* name, char* email) {
    researchers[researcher_count].account_number = account_number;
    strcpy(researchers[researcher_count].name, name);
    strcpy(researchers[researcher_count].email, email);
    researcher_count++;
    printf("�о���Ա %s �ѳɹ�ע�ᣬ�˻���Ϊ %d��\n", name, account_number);
}

// �༭�о���Ա��ϸ��Ϣ�ĺ���
void edit_researcher_details(int account_number, char* new_name, char* new_email) {
    for (int i = 0; i < researcher_count; i++) {
        if (researchers[i].account_number == account_number) {
            strcpy(researchers[i].name, new_name);
            strcpy(researchers[i].email, new_email);
            printf("�о���Ա��ϸ��Ϣ�ѳɹ����¡�\n");
            return;
        }
    }
    printf("δ�ҵ��˻���Ϊ %d ���о���Ա��\n", account_number);
}

// ɾ���о���Ա�˻��ĺ���
void delete_researcher(int account_number) {
    for (int i = 0; i < researcher_count; i++) {
        if (researchers[i].account_number == account_number) {
            for (int j = i; j < researcher_count - 1; j++) {
                researchers[j] = researchers[j + 1];
            }
            researcher_count--;
            printf("�о���Ա�˻���Ϊ %d ���о���Ա�ѳɹ�ɾ����\n", account_number);
            return;
        }
    }
    printf("δ�ҵ��˻���Ϊ %d ���о���Ա��\n", account_number);
}

// �鿴�о���Ա��͹��׵ĺ���
void view_researcher_contributions(int account_number) {
    for (int i = 0; i < researcher_count; i++) {
        if (researchers[i].account_number == account_number) {
            printf("�о���Ա %s (�˻���: %d) �Ļ�͹���:\n", researchers[i].name, account_number);
            // �˴����Լ���鿴�����͹��׵��߼�
            printf("��δ��¼���幱�����ݡ�\n");
            return;
        }
    }
    printf("δ�ҵ��˻���Ϊ %d ���о���Ա��\n", account_number);
}

// �����о���Ա�˻������˵�����
void manageResearcherAccounts() {
    int choice;
    int account_number;
    char name[50];
    char email[50];

    do {
        printf("\n---- �о���Ա�˻����� ----\n");
        printf("1. ����о���Ա\n");
        printf("2. �༭�о���Ա\n");
        printf("3. ɾ���о���Ա\n");
        printf("4. �鿴�о���Ա��͹���\n");
        printf("5. �˳�\n");
        printf("��ѡ�����: ");
        scanf("%d", &choice);

        switch (choice) {
        case 1:
            printf("�����˻���: ");
            scanf("%d", &account_number);
            printf("��������: ");
            scanf("%s", name);
            printf("��������ʼ�: ");
            scanf("%s", email);
            register_researcher(account_number, name, email);
            break;
        case 2:
            printf("����Ҫ�༭���о���Ա�˻���: ");
            scanf("%d", &account_number);
            printf("����������: ");
            scanf("%s", name);
            printf("�����µ����ʼ�: ");
            scanf("%s", email);
            edit_researcher_details(account_number, name, email);
            break;
        case 3:
            printf("����Ҫɾ�����о���Ա�˻���: ");
            scanf("%d", &account_number);
            delete_researcher(account_number);
            break;
        case 4:
            printf("����Ҫ�鿴���о���Ա�˻���: ");
            scanf("%d", &account_number);
            view_researcher_contributions(account_number);
            break;
        case 5:
            printf("�˳��о���Ա�˻�����\n");
            break;
        default:
            printf("��Ч��ѡ�����������롣\n");
            break;
        }
    } while (choice != 5);
}
