#include"middle_str.h"
unsigned char registr(unsigned char c){
    if(c>=65 && c<=90){
        long long f = 0;
        long long j = 65;
        char r = 97;
        long long h;
        h = c - 65;
        if(c<65 || c>90)
            return c;
        while(h != f ){
            f++;
            r++;
        }
        return r;
    }
    if(c>=97 && c<=122)
        return toUpper(c);




}

