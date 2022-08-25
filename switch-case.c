#include <stdio.h>
int main() {
        int ID = 2103120509;
        int password = 000;
        printf("Plese Enter Your ID:\n ");
        scanf("%d", & ID);
        switch (ID) {
            case 2103120509:
                printf("Enter your password:\n ");
                scanf("%d", & password);
                switch (password) {
                    case 000:
                        printf("Welcome RUD CSE Department\n");
                        break;
                    default:
                        printf("incorrect password");
                        break;
                }
                break;
            default:
                printf("incorrect ID");
                break;
        }
}
