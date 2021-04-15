#include<stdio.h>
#include<string.h>
#define LEN 100
#define WID 80
void isort(char s[][WID], int n)
{
    int i, item;
    char elem[WID];
    for (item = 1; item < n; item++) {
        strcpy(elem, s[item]);
        for (i = item; strcmp(s[i - 1], elem) > 0 && i > 0; i--) {
            //strcpy(s[i], s[i - 1]);
        }
        memcpy(&s[i + 1], &s[i], (item - i) * WID);
        strcpy(s[i], elem);
    }
}
