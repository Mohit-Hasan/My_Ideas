#include <stdio.h>

int gen(int size){
    
    int x = &size;
    int y = x/size;
    if(y<0) y-=y+y;
    while(y>size)y = y/10;
    return y;
    
}

int main() {
    
    int size=1000,final;
    final = gen(size);
    printf("%d",final);
    
}
