#include <cs50.h>
#include <stdio.h>

// Function to calculate the total amount with tax and tip
float calculateTotal(double a, double b, double c)
{
    double tax = a * (b / 100.0);
    double tip = a * (c / 100.0);
    float total = a + tax + tip;
    return total;
}

// Function to calculate the amount per person
double splitBill(double total, int numPeople)
{
    float amountPerPerson = total / numPeople;
    return amountPerPerson;
}

int main(void)
{
    double a = get_int("Bill Before Tax and tip\n");
    double b = get_double("Enter Tax Percentage\n");
    double c = get_double("Enter Tip Percentage\n");

    // Calculate total amount
    double x = calculateTotal(a, b, c);

    // Assuming numPeople is the number of people sharing the bill
    int numPeople = 2; // You can change this to the actual number of people

    // Calculate amount per person
    double y = splitBill(x, numPeople);

    printf("The total is %.2f\n", x);
    printf("One Person Owes %.2f\n", y);
}
