#include <stdio.h>

// function without argument and without return value
void hello() {
    printf("Hello World\n");
}

// function with argument but no return value 
void sum(int a, int b) {
    printf("Sum is %d\n", a + b);
}

// function without argument but with return value
int input() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    return n;
}

//function with argument and return value
int product(int x, int y) {
    return x * y;
}

int main() {
    int num, ans;

    hello();

    sum(5, 10);

    num = input();
    printf("Number entered is %d\n", num);

    ans = product(3, 4);
    printf("Product is %d\n", ans);

    return 0;
}
