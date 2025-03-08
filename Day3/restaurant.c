#include <stdio.h>

int main()
{
    int foodType = 0, itemNumber = 0;
    puts("Welcome to our restaurant - The Taste of Delight!");
    puts("What would you like to have?\n1. Veg\n2. Non-Veg");
    scanf("%d", &foodType);
    
    switch (foodType)
    {
        case 1:
            puts("Great choice! Select your dish:\n1. Crispy Masala Dosa\n2. Spicy Paneer Butter Masala\n3. Cheesy Veg Pizza\n4. Classic Dal Tadka\n5. Exotic Mushroom Biryani");
            scanf("%d", &itemNumber);
            switch (itemNumber)
            {
                case 1: puts("Enjoy your Crispy Masala Dosa!"); break;
                case 2: puts("Delight in our Spicy Paneer Butter Masala!"); break;
                case 3: puts("Savor the Cheesy Veg Pizza!"); break;
                case 4: puts("Relish the Classic Dal Tadka!"); break;
                case 5: puts("Experience the Exotic Mushroom Biryani!"); break;
                default: puts("Sorry, we dont serve this item in our veg menu.");
            }
            break;
        
        case 2:
            puts("Excellent choice! Select your dish:\n1. Juicy Chicken Biryani\n2. Spicy Mutton Rogan Josh\n3. Grilled Fish Tikka\n4. Butter Chicken Delight\n5. Smoky BBQ Wings");
            scanf("%d", &itemNumber);
            switch (itemNumber)
            {
                case 1: puts("Enjoy the aromatic Juicy Chicken Biryani!"); break;
                case 2: puts("Taste the rich Spicy Mutton Rogan Josh!"); break;
                case 3: puts("Savor the perfectly Grilled Fish Tikka!"); break;
                case 4: puts("Indulge in the creamy Butter Chicken Delight!"); break;
                case 5: puts("Feast on the Smoky BBQ Wings!"); break;
                default: puts("Sorry, we dont serve this item in our non-veg menu.");
            }
            break;
        
        default:
            puts("Sorry, please select a valid option!");
    }
    return 0;
}
