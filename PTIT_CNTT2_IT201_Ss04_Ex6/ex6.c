#include <stdio.h>
#include <string.h>
struct student {
    int id;
    int age;
    char name[];
};
int main() {
    struct student sdt[5];
    for (int i = 0; i < 5; i++) {
        printf("Nhap id: ");
        scanf("%d", &std[i].id);
        printf("Nhap ten: ");
        scanf("%c",&std[i].name);
        printf("Nhap tuoi: ");
        scanf("%d", &std[i].age);
        int searchId;
        printf("Nhap id can tim");
        scanf("%d", &searchId);

        int count = 0;

        for (int i = 0; i < 5; i++) {
            if (std[i].id  == searchId) {
                printf("Id: %d", std[i].id);
                printf("Name: %s", std[i].name);
                printf("Age: %d", std[i].age);
            }
        }

    }
}