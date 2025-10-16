
#include <stdio.h>

void tower0fhanoi(int n, char from_rod, char to_rod, char aux_rod) {
    if (n == 1){
        printf("\n move disk %d from rod %c to rod %c", n, from_rod, to_rod);
        tower0fHanoi(n-1, aux_rod, to_rod< from_rod);
        
    }

int main() {
    int n = 3;
    tower0Hanoi(n, 'A', 'B','C');
    return 0;
}
