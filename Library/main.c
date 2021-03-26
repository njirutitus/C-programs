#include <stdio.h>
#include <stdlib.h>

struct book {
    char title[100];
    char author[100];
    char ISBN[50];
    int copies;
    int year;
};

int main()
{

    struct book c[2];
    int i,j;
    for ( i = 0; i < 2; i++ ) {
        j = i++;
        printf("Enter details of Book %d\n", j );
        printf("Title: ");
        gets(c[i].title);
        printf("Author: ");
        gets(c[i].author);
        printf("ISBN: ");
        gets(c[i].ISBN);
        printf("Copies: ");
        scanf("%d", &c[i].copies);
        printf("Year published: ");
        scanf("%d", &c[i].year);
    }
    printf("Books entered: ");
    printf("%s\n",c[0].title);
    printf("%s\n",c[1].title);
    return 0;
}
