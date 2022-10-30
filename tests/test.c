#include <stdlib.h>
#include <assert.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>

typedef struct _tDate {    
    int day; 
    int month;
    int year;
} tDate;


// Parse a tDate from string information
void date_parse(tDate* date, const char* text);

// Compare two tDate structures and return true if they contain the same value or false otherwise.
bool date_equals(tDate date1, tDate date2);

// Maximum length of project code
#define MAX_PROJECT_CODE 7
// Maximum length of a ong code
#define MAX_ONG_CODE 3
// Maximum length of a ong name or a city
#define MAX_NAME 40


typedef struct {
    tDate date;
    char  city[MAX_NAME + 1];
    float cost;
    int   numPeople;
} tProjectDetail;

typedef struct {
    char code[MAX_PROJECT_CODE + 1];
    char ong[MAX_ONG_CODE+1];
    char ongName[MAX_NAME + 1];
    tProjectDetail detail;
} tProject;


int main() {
    printf("%d", sizeof(tProject));
}