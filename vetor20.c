#include <stdio.h>

int main() {
    char v[20] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't'};
    
    for (int i = 0; i < 20; i++) {
        v[i] = v[i] - 32; 
        printf("%c", v[i]);
    } 
    
    return 0;
}