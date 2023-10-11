#include <stdio.h>

struct student
{
    int num;
    char name[20];
};

struct car // write car is optinal but won't can write them in main function if don't write them here.
{
    int num;
    char name[20];
}c1,c2;

struct home 
{
    int num;
    char name[20];
}h1 = {1, "yousef"}; // initializing here we can only initializing one object rest of initilazing in main function

typedef struct bike
{
    int num;
    char name[20];
}b;

typedef int integer;

int main() {
    //int a; // 4 bytes

    //struct student s; // 24 bytes

    //struct car c1, c3; // c1 => 24 bytes, c3 => 24 bytes

    //struct student s1 = {1, "yousef"}; // simple intializing

    //struct student s1 = {"yousef", 1}; // it is wrong

    //struct student s1 = {1}; // it partial intializing جزئ

    //b b2 = {2, "yousef"}; //typedef intializing struch

    //integer yousef = 1; //typedef intializing int

    printf("yousef\n"); 
    return 0;
}