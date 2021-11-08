#include"middle_str.h"
unsigned char toUpper(unsigned char c){
    long long f = 0;
    long long j = 97;
    char r = 65;
    long long h;
    h = c - 97;
    if(c<97 || c>122)
        return c;
    while(h != f ){
        f++;
        r++;
    }

    return r;




}
