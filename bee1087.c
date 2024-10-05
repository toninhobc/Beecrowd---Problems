#include <stdio.h>
#include <stdlib.h>

int min_moves(int x1, int y1, int x2, int y2) {

    if((x1 == x2) && (y1 == y2)) {
        return 0;
    } 
    else if((x1 == x2) || (y1 == y2) || (abs(x1 - x2)) == (abs(y1 - y2))) {
        return 1;
    }
    else {
        return 2;
    }

}

int main() {

    int x1, y1, x2, y2;

    while (1) {

        scanf("%d %d %d %d", &x1, &y1, &x2, &y2);

        if((x1 == 0) && (y1 == 0) && (x2 == 0) && (y2 == 0)) {
            break;
        }

        int moves = min_moves(x1, y1, x2, y2);

        printf("%d\n", moves);
    }

    return 0;
}