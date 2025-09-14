#include <stdio.h>

int main()
{
    int menu_choice, item_choice, qty, total_bill = 0;
    char continue_order = 'y';

    printf("\n");
    printf("    WELCOME TO JAI HIND HOTEL\n");
    printf("\n\n");

    // Menu type selection
    printf("Please select menu type:\n");
    printf("1. Non-Veg Menu\n");
    printf("2. Veg Menu\n");
    printf("Enter your choice (1 or 2): ");
    scanf("%d", &menu_choice);

    if (menu_choice == 1) {
        // Non-Veg Menu
        printf("\n========== NON-VEG MENU ==========\n");
        printf("1. Chicken Roast - Rs.90\n");
        printf("2. Chicken Leg Piece - Rs.160\n");
        printf("3. Chicken Biryani - Rs.300\n");
        printf("4. Mutton Curry - Rs.250\n");
        printf("5. Fish Fry - Rs.180\n");
        printf("================================\n");

        while (continue_order == 'y' || continue_order == 'Y') {
            printf("\nSelect your item (1-5): ");
            scanf("%d", &item_choice);
            printf("Enter quantity: ");
            scanf("%d", &qty);

            switch (item_choice) {
                case 1:
                    printf("You selected: Chicken Roast\n");
                    total_bill += 90 * qty;
                    printf("Amount: Rs.%d\n", 90 * qty);
                    break;
                case 2:
                    printf("You selected: Chicken Leg Piece\n");
                    total_bill += 160 * qty;
                    printf("Amount: Rs.%d\n", 160 * qty);
                    break;
                case 3:
                    printf("You selected: Chicken Biryani\n");
                    total_bill += 300 * qty;
                    printf("Amount: Rs.%d\n", 300 * qty);
                    break;
                case 4:
                    printf("You selected: Mutton Curry\n");
                    total_bill += 250 * qty;
                    printf("Amount: Rs.%d\n", 250 * qty);
                    break;
                case 5:
                    printf("You selected: Fish Fry\n");
                    total_bill += 180 * qty;
                    printf("Amount: Rs.%d\n", 180 * qty);
                    break;
                default:
                    printf("Invalid choice! Please select 1-5.\n");
                    continue;
            }

            printf("\nDo you want to order more items? (y/n): ");
            scanf(" %c", &continue_order);
        }
    }
    else if (menu_choice == 2) {
        // Veg Menu
        printf("\n========== VEG MENU ==========\n");
        printf("1. Dal Makhani - Rs.120\n");
        printf("2. Paneer Butter Masala - Rs.150\n");
        printf("3. Veg Biryani - Rs.200\n");
        printf("4. Chole Bhature - Rs.100\n");
        printf("5. Ice Cream - Rs.80\n");
        printf("=============================\n");

        while (continue_order == 'y' || continue_order == 'Y') {
            printf("\nSelect your item (1-5): ");
            scanf("%d", &item_choice);
            printf("Enter quantity: ");
            scanf("%d", &qty);

            switch (item_choice) {
                case 1:
                    printf("You selected: Dal Makhani\n");
                    total_bill += 120 * qty;
                    printf("Amount: Rs.%d\n", 120 * qty);
                    break;
                case 2:
                    printf("You selected: Paneer Butter Masala\n");
                    total_bill += 150 * qty;
                    printf("Amount: Rs.%d\n", 150 * qty);
                    break;
                case 3:
                    printf("You selected: Veg Biryani\n");
                    total_bill += 200 * qty;
                    printf("Amount: Rs.%d\n", 200 * qty);
                    break;
                case 4:
                    printf("You selected: Chole Bhature\n");
                    total_bill += 100 * qty;
                    printf("Amount: Rs.%d\n", 100 * qty);
                    break;
                case 5:
                    printf("You selected: Ice Cream\n");
                    total_bill += 80 * qty;
                    printf("Amount: Rs.%d\n", 80 * qty);
                    break;
                default:
                    printf("Invalid choice! Please select 1-5.\n");
                    continue;
            }

            printf("\nDo you want to order more items? (y/n): ");
            scanf(" %c", &continue_order);
        }
    }
    else {
        printf("Invalid choice! Please select 1 or 2.\n");
        return 1;
    }

    // final bill
    printf("\n\n");
    printf("           FINAL BILL\n");
    printf("\n");
    printf("Total Amount: Rs.%d\n", total_bill);
    printf("Thank you for visiting JAI HIND HOTEL!\n");
    printf("========================================\n");

    return 0;
}



/*#include <stdio.h>
int main()
{
    int total,rate,qty,sum,ch,a,b,c,d;
    printf("HOTEL Name :jai hind hotel\n");
    printf("item menu card:\n");{
    printf("1. chicken rost Rs.90\n");
    printf("2. chichen leg piece Rs.160\n");
    printf("3. chicken biryani Rs.300\n");
    printf("4. ice cream Rs.120\n");
    printf("\n__________");
    }
    printf("\nselect your items=");
    scanf("%d",&ch);
    switch (ch)
    case1:{
    printf("\n  you have selected=biryani");
    printf("\nquantity=        ");
    scanf("%d",&qty);
    rate=300;
    a=rate*qty;
    printf("AMOUNT=  %d",a);
    break ;
    case 2:{
    printf("\n  you have selected=ice cream:");
    printf("\n quantity=     ");
    scanf("%d",&qty);
    rate=120;
    b=rate*qty;
    printf("AMOUNT=  %d",b);
    break;
    case 3:{
    printf("\n  you have selected=checken leg piece");
    printf("\n quantity=      ");
    scanf("%d",&qty);
    rate=160;
    c=rate*qty;
    printf("AMOUNT=  %d",c);
    break;
    case 4:{
    printf("\n you have selected=checken rost");
    printf("\n quantity=       ");
    scanf("%d",&qty);
    rate=90;
    d=rate*qty;
    printf("AMOUNT=  %d",d);
    break ;
    return 0;
    default:
    printf("please select the above item:");

    }
    }
    }
}
}

*/
