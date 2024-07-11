/* exercise19_3_1.c */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/* データを構造体で記憶する */
typedef struct {
    char name[64];
    int age;
    int gender;
} Person;

/* データの入力と表示はそれぞれ専用の関数を作って行う */
void inputPerson(Person * data);
void displayPerson(Person data);

int main(void) {

    int count;
    int datasize;
    Person * data;

    datasize = 10;
    data = (Person *)malloc(sizeof(Person) * datasize);

    count = 0;

    while (1) {
        inputPerson(&data[count]);
        if (data[count].age == -1) {
            break;
        }

        count++;

        if (count >= datasize) {
            datasize += 10;
            data = (Person *)realloc(data, sizeof(Person) * datasize);
        }
    }

    for (int i = 0; i < count; i++) {
        if (i) {printf("\n");}
        displayPerson(data[i]);
    }

    free(data);

    return 0;

}

void inputPerson(Person * data)
{
    printf("名前を入力してください。\n");
    scanf("%s", data->name);
    printf("年齢を入力してください。\n");
    scanf("%d", &data->age);
    printf("性別を入力してください。(男性：1、女性：2) \n");
    scanf("%d", &data->gender);
    printf("\n");
}

void displayPerson(Person data)
{
    char gender_char[64];

    printf("名前：%s\n", data.name);
    printf("年齢：%d\n", data.age);

    if (data.gender == 1) {
        strcpy(gender_char, "男性");
    } else if (data.gender == 2) {
        strcpy(gender_char, "女性");
    } else {
        strcpy(gender_char, "1, 2以外の回答が入力されました。");
    }

    printf("性別：%s\n", gender_char);
}

