#include <iostream>
using namespace std;

void e0();
void e1();
void e2();
void e3();
void e4();
void aceita();
void rejeita();

char f[200];
int p;

void e0(){
    if(f[p] == 'i'){
        p++;
        e1();
    }
    else if(f[p] == 'a'){
        p++;
        e0();
    }
    else if(f[p] == 'b'){
        p++;
        e0();
    }
    else if(f[p] == '\0'){
        aceita();
    }
    else if(f[p] == 'e'){
        p++;
        e2();
    }
    else{
        rejeita();
    }
}

void e1(){
    if(f[p] == 'f'){
        p++;
        e0();
    }
}

void e2(){
    if(f[p] == 'l'){
        p++;
        e3();
    }
    else{
        rejeita();
    }
}

void e3(){
    if(f[p] == 's'){
        p++;
        e4();
    } else{
        rejeita();
    }
}

void e4(){
    if(f[p] == 'e'){
        p++;
        e0();
    } else{
        rejeita();
    }
}

void aceita(){
    puts("viva!!!");
    exit(0);
}

void rejeita(){
    puts(":c");
    exit(0);
}

int main() {
    scanf("%s", f);
    e0();
    return 0;
}