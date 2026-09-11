#include <stdio.h>

struct Name {
    char first[30];
    char last[30];
};

struct Address {
    char houseNo[10];
    char moo[10];
    char road[50];
    char district[50];
    char province[50];
};

struct Student {
    struct Name name;
    char id[10];
    struct Address addr;
    char tel[20];
};

int main(void) {
    struct Student s = {
        {"POOM", "KONGHUAYROB"},
        "69011014",
        {"3", "2", "Chalongkrung", "Ladkrabang", "Bangkok"},
        "088 888 8888"
    };

    printf("Full name : %s %s, ID : %s\n", s.name.first, s.name.last, s.id);
    printf("Address : %s Moo %s, %s Rd.\n", s.addr.houseNo, s.addr.moo, s.addr.road);
    printf("%s, %s\n", s.addr.district, s.addr.province);
    printf("\n");
    printf("Tel. %s\n", s.tel);

    return 0;
}