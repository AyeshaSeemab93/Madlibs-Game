#include <stdio.h>
#include <stdlib.h>

int main()
{

    char color[20];
    char PluralNoun[20];
    char Celebrity[20];
    printf("Enter Color: ");
    scanf("%s", color);
    printf("Enter Plural Noun: ");
    scanf("%s", PluralNoun);
    printf("Enter Celebrity Name: ");
    scanf("%s", Celebrity);

    printf("-----------------------------");

    printf("Roses are %s\n", color);
    printf("%s are blue\n", PluralNoun);
    printf("I love %s.\n", Celebrity);

    return 0;
}
