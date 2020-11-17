#include <stdio.h>
#include "src/queue.h"

int main() {
    initQueue();
    enqueue('A');
    enqueue('B');
    printf("%d", getLength());
    printf("%c", dequeue());
    printf("%d", getLength());
    printf("%c", dequeue());
    printf("%d", getLength());
    return 0;
}