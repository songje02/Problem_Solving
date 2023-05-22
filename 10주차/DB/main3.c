//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//void tokenValues(char* str1, char* str2, int* intValue, char* charValue, char* strValue) {
//    char* Token = strtok(str1, "%");
//
//    while (Token != NULL) {
//        strcpy(strValue, Token);
//        Token = strtok(NULL, "%");
//    }
//
//    char* strArr[100] = { NULL, };
//    char* strToken = strtok(str2, " ");
//    int i = 0;
//    while (strToken != NULL) {
//        strArr[i] = strToken;
//        i++;
//        strToken = strtok(NULL, " ");
//    }
//
//     정수
//    char* intToken = strstr(str1, "%d");
//    if (intToken != NULL) {
//        *intValue = atoi(strArr[5]);
//    }
//
//     문자
//    char* charToken = strstr(str1, "%c");
//    if (charToken != NULL) {
//        *charValue = strArr[5][0];
//    }
//
//     문자열 길이
//    char* strToken2 = strstr(str1, "%s");
//    if (strToken2 != NULL) {
//        strcpy(strValue, strArr[5]);
//        *intValue = strlen(strArr[5]);
//    }
//
//     str2에서 일치하는 값 제거
//    for (int j = 0; strArr[j] != NULL; j++) {
//        if (strcmp(strArr[j], strValue) == 0) {
//            strcpy(strArr[j], "");
//        }
//    }
//
//     남은 값 추출
//    for (int j = 0, k = 0; strArr[j] != NULL; j++) {
//        if (strlen(strArr[j]) > 0) {
//            strcpy(strValue, strArr[j]);
//            k++;
//        }
//    }
//}
//
//int main() {
//    FILE* file = fopen("db.txt", "r");
//    if (file == NULL) {
//        printf("파일을 열 수 없습니다.");
//        return 1;
//    }
//
//    char str1[1000];
//    char str2[1000];
//    int intValue;
//    char charValue;
//    char strValue[1000];
//
//    while (fgets(str1, sizeof(str1), file) && fgets(str2, sizeof(str2), file)) {
//        if (str1[strlen(str1) - 1] == '\n') {
//            str1[strlen(str1) - 1] = '\0';
//        }
//
//        if (str2[strlen(str2) - 1] == '\n') {
//            str2[strlen(str2) - 1] = '\0';
//        }
//
//        tokenValues(str1, str2, &intValue, &charValue, strValue);
//
//        printf("정수: %d\n", intValue);
//        printf("문자: %c\n", charValue);
//        printf("문자열: %s\n", strValue);
//    }
//
//    fclose(file);
//
//    return 0;
//}
