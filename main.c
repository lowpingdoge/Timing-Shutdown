#include <stdio.h>
#include <stdlib.h>

int main()
{
    int input, endTime;
    char strbuff[100];   /**< ����ʱ�ػ����� */
    char strbuff1[100];  /**< ��ʱ�ػ����� */
    char time[20];       /**< ��ʱ�ػ�ʱ�� */
    printf("**********************************\n");
    printf("       ��ӭʹ�ö�ʱ�ػ�����\n");
    printf("        1.��ʱ�ػ�\n");
    printf("        2.����ʱ�ػ�\n");
    printf("        3.ȡ������ʱ�ػ�\n");
    printf("        4.ȡ����ʱ�ػ�\n");
    printf("**********************************\n");
    printf("                    ����:ǿ�ƺ�\n");
    printf("                    ����:2015��7��\n\n");
    printf("����������ѡ��:");
    scanf("%d", &input);

    if (input != 1 && input != 2 && input != 3 && input != 4)
    {
        printf("�������!\n");
        exit(-1);
    }
    fflush(stdin);
    switch (input)
    {
        case 1: printf("������ػ�ʱ��(ʱ:��:��):xx:xx:xx\n");
                gets(time);
                sprintf(strbuff1, "at %s shutdown /s /t 0", time);
                system(strbuff1);
                printf("���ļ��������%s�ر�!\n", time);
                system("pause");
                break;
        case 2: printf("�����뵹��ʱ��(��λΪ����):");
                scanf("%d", &endTime);
                endTime *= 60;
                sprintf(strbuff, "shutdown /s /t %d", endTime);
                system(strbuff);
                printf("���ļ��������%d���Ӻ�ر�!\n", endTime/60);
                system("pause");
                break;
        case 3: system("shutdown /a");
                printf("����ʱ�ػ���ȡ��!\n");
                system("pause");
                break;
        case 4: system("at /yes /delete");
                printf("��ʱ�ػ���ȡ��\n");
                break;
    }
    return 0;
}
