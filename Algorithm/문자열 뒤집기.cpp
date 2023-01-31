#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// �Ķ���ͷ� �־����� ���ڿ��� const�� �־����ϴ�. �����Ϸ��� ���ڿ��� �����ؼ� ����ϼ���.
char* solution(const char* my_string) {
    // return ���� malloc �� ���� �Ҵ��� ������ּ���. �Ҵ� ���̴� ��Ȳ�� �°� �������ּ���.
    int len = 0;

    while (*(my_string + len) != '\0')
        len++;

    char* answer = (char*)malloc(len + 1);

    for (int i = 1; i <= len; ++i)
        answer[i - 1] = *(my_string + (len - i));
    
    answer[len] = '\0';

    return answer;
}

int main()
{
    printf("%s", solution("Hello"));

    return 0;
}