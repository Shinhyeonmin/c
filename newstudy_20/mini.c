#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "example.h"
// 연결리스트 구현  

int main(void)
{
    int n;
    int val;
    int idx;

    // 연결리스트 생성
    printf("리스트의 초기 값의 개수는 몇 개입니까?:");
    scanf("%d", &n);
    NODE* list = NULL;      // 연결리스트
    printf("리스트의 초기값을 입력하시오: ");
    for (int i = 0; i < n; i++) {
        // n개의 정수를 입력받고 연결리스트에 추가  append()
        scanf("%d", &val);
        append(&list, val);
    }
   printList(list);
   
    // 연결리스트의 특정 위치에 값 추가 insert()
    printf("추가할 값의 위치를 입력하시오: ");
    scanf("%d", &idx);
    printf("추가할 값을 입력하시오: ");
    scanf("%d", &val);
    insert(&list, idx, val);

    printList(list);
    
    // 연결리스트의 원소값 추출해서 확인해보기 pop()
    /*printf("추출할 원소의 위치를 입력하시오: ");
    scanf("%d", &idx);
    val = pop(&list, idx);

    printf("추출된 값: %d\n", val);
    printList(list);*/

    // 연결리스트의 x번째 원소값 확인해보기   index()
    int lang;
    printf("현재 배열의 크기를 입력하시오: ");
    scanf("%d", &lang);
    for (int i = 0; i < lang; i++) {
        printf("list[%d]: %d\n", i, index(list, i));
    }
    return 0;
}

