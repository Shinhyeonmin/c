#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "example.h"
// ���Ḯ��Ʈ ����  

int main(void)
{
    int n;
    int val;
    int idx;

    // ���Ḯ��Ʈ ����
    printf("����Ʈ�� �ʱ� ���� ������ �� ���Դϱ�?:");
    scanf("%d", &n);
    NODE* list = NULL;      // ���Ḯ��Ʈ
    printf("����Ʈ�� �ʱⰪ�� �Է��Ͻÿ�: ");
    for (int i = 0; i < n; i++) {
        // n���� ������ �Է¹ް� ���Ḯ��Ʈ�� �߰�  append()
        scanf("%d", &val);
        append(&list, val);
    }
   printList(list);
   
    // ���Ḯ��Ʈ�� Ư�� ��ġ�� �� �߰� insert()
    printf("�߰��� ���� ��ġ�� �Է��Ͻÿ�: ");
    scanf("%d", &idx);
    printf("�߰��� ���� �Է��Ͻÿ�: ");
    scanf("%d", &val);
    insert(&list, idx, val);

    printList(list);
    
    // ���Ḯ��Ʈ�� ���Ұ� �����ؼ� Ȯ���غ��� pop()
    /*printf("������ ������ ��ġ�� �Է��Ͻÿ�: ");
    scanf("%d", &idx);
    val = pop(&list, idx);

    printf("����� ��: %d\n", val);
    printList(list);*/

    // ���Ḯ��Ʈ�� x��° ���Ұ� Ȯ���غ���   index()
    int lang;
    printf("���� �迭�� ũ�⸦ �Է��Ͻÿ�: ");
    scanf("%d", &lang);
    for (int i = 0; i < lang; i++) {
        printf("list[%d]: %d\n", i, index(list, i));
    }
    return 0;
}

