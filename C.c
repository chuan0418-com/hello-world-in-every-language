#include <stdio.h>

void helloWorld(const char *a){
    printf(a[0]=='p' && a[1]=='r' && a[2]=='i' && a[3]=='n' && a[4]=='t' && a[5]=='\0' ? "Hello, World!\n" : "");
}

int main(){
    helloWorld("print");
}