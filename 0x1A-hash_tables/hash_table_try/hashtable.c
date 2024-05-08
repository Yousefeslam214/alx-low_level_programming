#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include <stdint.h>

#define MAX_NAME 256
#define TABLE_SIZE 10

typedef struct {
    char name[MAX_NAME];
    int age;
}person;

person * hash_table[TABLE_SIZE];

unsigned int hash (char *name)
{
    int len = strnlen(name, MAX_NAME);
    unsigned int hash_value = 0;
    for (int i = 0; i < len; i++)
    {
        hash_value += name[i];
        hash_value = (hash_value * name[i]) % TABLE_SIZE;
    }
    return hash_value;
}

void init_hash_table()
{
    for(int i = 0; i < TABLE_SIZE; i++)
    {
        hash_table[i] = NULL;
    }
}

void print_table()
{
    for (int i = 0; i < TABLE_SIZE; i++)
    {
        if (hash_table[i] == NULL) 
        {
            printf("\t%i\t----\n",i);
        }
        else
        {
            printf("\t%i\t%s\n",i, hash_table[i]->name);
        }
    }
}

bool hash_table_insert(person *p)
{
    if (p == NULL)
        return false;
    int index = hash(p->name);
    if (hash_table[index] != NULL)
    {
        return false;
    }
    hash_table[index] = p;
    return true;
}
person *hash_table_lookup(char *name)
{
    int index = hash(name);
    if (hash_table[index] && strncmp(hash_table[index]->name, name, TABLE_SIZE) == 0)
        return hash_table[index];
    else
        return NULL;
}

int main(){
    init_hash_table();
    print_table();

    person yousef = {.name="youwfasef", .age=234};
    person yous = {.name="yoafaadus", .age=2334};
    person you = {.name="yafdfaou", .age=24};
    person youe = {.name="yafdfaou", .age=24};
    hash_table_insert(&yousef);
    hash_table_insert(&yous);
    hash_table_insert(&you);
    hash_table_insert(&youe);
    print_table();
    person *tmp = hash_table_lookup("youwfasef");
    if (tmp == NULL)
    {
        printf("not found\n");
    }
    else
    {
        printf("found %s.\n", tmp->name);
    }
    tmp = hash_table_lookup("yousef");
    if (tmp == NULL)
    {
        printf("not found\n");
    }
    else
    {
        printf("found %s.\n", tmp->name);
    }
    /*printf("yousef => %u\n", hash("yousef"));
    printf("yous => %u\n", hash("yous"));
    printf("you => %u\n", hash("you"));*/

}
