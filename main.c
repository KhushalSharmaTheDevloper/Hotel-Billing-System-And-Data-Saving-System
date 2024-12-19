#include <stdio.h>

int main(void)
{
    printf("Welcome To Khushal Sharma's Hotel Admin Panel.\n");

    int input1;
    printf("What To Do? (Enter 1 for Billing || Enter 2 for Priting room data.): ");
    scanf("%d", &input1);
    getchar(); // To clear the newline character from the buffer

    if (input1 == 1)
    {
        printf("=========================== BILLING SYSTEM ===========================\n");
        
        int input2;
        printf("Enter Room Number: ");
        scanf("%d", &input2);
        getchar();

        if (input2 < 100)
        {
            printf("Billing For Economy Rooms\n");
            
            int rooms;
            printf("How many rooms booked? ");
            scanf("%d", &rooms);
            getchar();

            int amount = 2300 * rooms;
            printf("Total Amount for Rooms (Without GST): %d\n", amount);

            int food_bill;
            printf("Enter The Bill for Food: ");
            scanf("%d", &food_bill);
            getchar();

            int total_amount = amount + food_bill;
            printf("Total Bill Amount (Without GST): %d\n", total_amount);

            char print_bill;
            printf("Print Bill Now? (y/n): ");
            scanf("%c", &print_bill);
            getchar();

            if (print_bill == 'y' || print_bill == 'Y')
            {
                char name[100];
                printf("Enter Name of Payer: ");
                scanf("%99[^\n]", name);

                printf("\n");
                printf("=============================================================\n");
                printf("                 Khushal Sharma's Hotel                     \n");
                printf("=============================================================\n");
                printf("Customer Name       : %s\n", name);
                printf("Room Type           : Economy Room\n");
                printf("Number of Rooms     : %d\n", rooms);
                printf("Room Charges        : %d\n", amount);
                printf("Food Charges        : %d\n", food_bill);
                printf("-------------------------------------------------------------\n");
                printf("Total Amount        : %d\n", total_amount);
                printf("GST (18%%)           : %.2f\n", total_amount * 0.18);
                float grand_total = total_amount * 1.18;
                printf("-------------------------------------------------------------\n");
                printf("Grand Total         : %.2f\n", grand_total);
                printf("=============================================================\n");
                printf("        Thank You for Choosing Khushal Sharma's Hotel!      \n");
                printf("=============================================================\n");

                FILE *pF = fopen("rooms_data.txt","a");
                fprintf(pF, "Name: %s\n", name);
                fprintf(pF, "Bill: %.2f\n", grand_total);
                fprintf(pF , "\n--------------------------\n");
                fclose(pF);

            }
            else
            {
                printf("Bill printing cancelled.\n");
            }
        }
        else if (input2 > 100 && input2 < 200)
        {
            printf("Billing For Suite Rooms.\n");
            
            int rooms;
            printf("How many rooms booked? ");
            scanf("%d", &rooms);
            getchar();

            int amount = 5000 * rooms;
            printf("Total Amount for Rooms (Without GST): %d\n", amount);

            int food_bill;
            printf("Enter The Bill for Food: ");
            scanf("%d", &food_bill);
            getchar();

            int total_amount = amount + food_bill;
            printf("Total Bill Amount (Without GST): %d\n", total_amount);

            char print_bill;
            printf("Print Bill Now? (y/n): ");
            scanf("%c", &print_bill);
            getchar();

            if (print_bill == 'y' || print_bill == 'Y')
            {
                char name[100];
                printf("Enter Name of Payer: ");
                scanf("%99[^\n]", name);

                printf("\n");
                printf("=============================================================\n");
                printf("                 Khushal Sharma's Hotel                     \n");
                printf("=============================================================\n");
                printf("Customer Name       : %s\n", name);
                printf("Room Type           : Suite Room\n");
                printf("Number of Rooms     : %d\n", rooms);
                printf("Room Charges        : %d\n", amount);
                printf("Food Charges        : %d\n", food_bill);
                printf("-------------------------------------------------------------\n");
                printf("Total Amount        : %d\n", total_amount);
                printf("GST (18%%)           : %.2f\n", total_amount * 0.18);
                float grand_total = total_amount * 1.18;
                printf("-------------------------------------------------------------\n");
                printf("Grand Total         : %.2f\n", grand_total);
                printf("=============================================================\n");
                printf("        Thank You for Choosing Khushal Sharma's Hotel!      \n");
                printf("=============================================================\n");
            }

           

            else
            {
                printf("Bill printing cancelled.\n");
            }
        }
    }

    else if (input1 == 2){
                printf("Printing The List.\n");
                 FILE *pF = fopen("rooms_data.txt" , "r");

                char buffer[255];

                while(fgets(buffer ,255 , pF) != NULL){
    
                printf("%s", buffer);}
                fclose(pF);

            }
    else
    {
        printf("Invalid input. Please try again.\n");
    }

    return 0;
}


