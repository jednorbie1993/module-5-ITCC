#include <stdio.h>

// Macro
#define SQUARE(x) ((x) * (x))

// Function
int squareFunc(int x) {
    return x * x;
}

int main() {
    int num = 5;

    printf("Using Macro: %d\n", SQUARE(num));
    printf("Using Function: %d\n", squareFunc(num));

    return 0;
}


/*
Ang macro ay ginagamit kapag kailangan sobrang bilis ang execution,
lalo na sa mga system na real-time tulad ng sensors, embedded systems,
at games kung saan bawat millisecond mahalaga. Hindi na ito dumadaan
sa function call dahil direct na pinapalitan ang code, kaya mas mabilis.
Pero delikado rin minsan dahil walang type checking, kaya dapat
ingat sa paggamit.
*/

/*
Macro = mabilis (direct code replacement, walang function call),
ginagamit sa real-time systems tulad ng sensors at games kung saan
bawat millisecond mahalaga, pero ingat dahil walang type checking.
*/
