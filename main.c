#include <stdio.h>

int main() {
    printf("===================================\n");
    printf("NIM: 231110062\n");
    printf("Name: Joko Supriyanto\n");

    int menu, length, height, side, area;

    printf("===================================\n");
    printf("Menus:\n");
    printf("1 => Calculate the area of a rectangle\n");
    printf("2 => Calculate the area of a square\n");

    printf("===================================\n");
    do {
        printf("Please select the menu: ");
        scanf("%d", &menu);

        switch (menu) {
            case 1:
                printf("===================================\n");
                printf("Calculate the area of a rectangle\n");

                do {
                    printf("Input length: ");
                    scanf("%d", &length);

                    printf("Input height: ");
                    scanf("%d", &height);

                    if (length < 0 || height < 0) {
                        printf("Cannot be a negative number\n");
                    } else if (length < height) {
                        printf("The length must be greater than the height\n");
                    }
                } while (length < 0 || height < 0 || length < height);

                printf("===================================\n");
                area = length * height;
                printf("Area of the rectangle is %d", area);

                break;
            case 2:
                printf("===================================\n");
                printf("Calculate the area of a square\n");

                do {
                    printf("Input side: ");
                    scanf("%d", &side);

                    if (side < 0) {
                        printf("Cannot be a negative number\n");
                    }
                } while (side < 0);

                printf("===================================\n");
                area = side * side;
                printf("Area of the square is %d", area);

                break;
            default:
                printf("Inputted menu (%d) is not valid\n", menu);
        }
    } while (menu != 1 && menu != 2);

    return 0;
}

