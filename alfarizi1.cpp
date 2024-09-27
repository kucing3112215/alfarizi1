// alfarizi1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//



#include <stdio.h>

    int main() {
        // Initial price and discount percentage
        float originalPrice = 150000;
        float discountPercentage = 12.5;

        // Calculate the discount amount
        float discountAmount = (discountPercentage / 100) * originalPrice;

        // Calculate the final price after discount
        float finalPrice = originalPrice - discountAmount;
        // Output the results
        printf("Harga asli: Rp %.2f\n", originalPrice);
        printf("Besarnya diskon dari harga: Rp %.2f\n", discountAmount);
        printf("Diskon: %.2f %\n", discountPercentage);
        printf("Harga setelah diskon: Rp %.2f\n", finalPrice);

        return 0;
    }


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file