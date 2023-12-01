/*
A painting company has determined that for every 110 square feet of wall space,
one gallon of paint and eight hours of labor will be required. The company charges
$25.00 per hour for labor. Write a modular program that allows the user to enter
the number of rooms that are to be painted and the price of the paint per gallon. It
should also ask for the square feet of wall space in each room. It should then display
the following data:
• The number of gallons of paint required
• The hours of labor required
• The cost of the paint
• The labor charges
• The total cost of the paint job
Input validation: Do not accept a value less than 1 for the number of rooms. Do not
accept a value less than $10.00 for the price of paint. Do not accept a negative value
for square footage of wall space.
*/

#include <iostream>
using namespace std;

double inputValidate(double, double);
void calcAndDisplay(double, double, double);

int main()
{
    const double CHARGE_PER_HOUR = 25.00;
    double numRooms,
        squareFeet,
        pricePerGallon,
        totalGallons,
        totalLabor,
        totalCost;
    cout << "Nhap so phong can son: ";
    numRooms = inputValidate(numRooms, 1);
    cout << "Nhap gia tien moi binh son: ";
    pricePerGallon = inputValidate(pricePerGallon, 10.00);
    for (int i = 1; i <= (int)numRooms; i++)
    {
        cout << "Nhap dien tich phong #" << i << ": ";
        squareFeet += inputValidate(squareFeet, 0);
    }
    calcAndDisplay(numRooms, squareFeet, pricePerGallon);
    return 0;
}

double inputValidate(double number, double condiction)
{
    while (!(cin >> number) || number < condiction)
    {
        cout << "So nhap khong dung. Vui long nhap lai: ";
    }
    return number;
}

void calcAndDisplay(double numRooms, double squareFeet, double pricePerGallon)
{
    const double GALLONS_PER_SQ_FT = 110.0,
                 WORKING_HOURS_PER_GALLON = 8.0,
                 CHARGE_PER_HOUR = 25.0;
    double totalGallons,
        totalLabor,
        totalCost,
        totalPaint,
        laborCharge;
    totalGallons = squareFeet / 110;
    totalLabor = totalGallons * WORKING_HOURS_PER_GALLON;
    totalPaint = pricePerGallon * totalGallons;
    laborCharge = totalLabor * CHARGE_PER_HOUR;
    totalCost = laborCharge + totalPaint;
    cout << endl
         << endl;
    cout << "Tong so feet vuong can son              : " << squareFeet << endl;
    cout << "Gia moi gallon                          : " << pricePerGallon << endl;
    cout << "Tong so gallons can de son              : " << totalGallons << endl;
    cout << "Tong so gio lam viec can de son         : " << totalLabor << endl;
    cout << "Tong so tien son                        : $" << totalPaint << endl;
    cout << "Tong so tien lam viec                   : $" << laborCharge << endl;
    cout << "Tong so tien can de son                 : $" << totalCost << endl;
}
// #include <iostream>
// using namespace std;

// double inputValidate(double, double);
// void getInfo(double &, double &, double &);
// void calcAndDisplay(double, double, double);

// int main()
// {
//     const double CHARGE_PER_HOUR = 25.00;
//     double num_of_rooms,
//            price_per_gal,
//            sqft_to_paint = 0;

//     getInfo(num_of_rooms, price_per_gal, sqft_to_paint);
//     calcAndDisplay(num_of_rooms, price_per_gal, sqft_to_paint);

//     return 0;
// } // END int main()

// void getInfo(double &num_of_rooms,
//              double &price_per_gal,
//              double &sqft_to_paint)
// {
//      // Get number of rooms to be painted
//      cout << "Number of rooms to be painted: ";
//      num_of_rooms = inputValidate(num_of_rooms, 1);

//      for (int i = 0; i < num_of_rooms; i++)
//      {
//           // Get sqft of wall space per room
//           cout << "Sq. Ft. of wall space to be painted "
//                << "in room " << (i + 1) << ": ";

//           sqft_to_paint += inputValidate(sqft_to_paint, 0);
//      }

//      // Get price of paint per gallon
//      cout << "Price of paint per gallon: $";
//      price_per_gal = inputValidate(price_per_gal, 10.00);

// }

// double inputValidate(double number, double limit_number)
// {

//     while(!(cin >> number) || number < limit_number)
//     {
//         cout << "Error. Number must not be "
//              << " " << limit_number << " or greater:";
//     }

//     return number;
// }

// void calcAndDisplay(double num_of_rooms,
//                     double price_per_gal,
//                     double sqft_to_paint)
// {
//      double gals_of_paint_req,
//             labor_required,
//             cost_of_paint,
//             labor_charges,
//             total_cost;

//      // Calculate:
//      gals_of_paint_req  = sqft_to_paint / 110.0;
//      labor_required = gals_of_paint_req * 8.0;
//      cost_of_paint  = price_per_gal * gals_of_paint_req;
//      labor_charges  = labor_required * 25.00;
//      total_cost     = labor_charges + cost_of_paint;

//      // Display:
//      cout << "Total SqFt to paint  : "
//           << sqft_to_paint
//           << endl;

//      cout << "Price per gallon     : "
//           << price_per_gal
//           << endl;

//      // • The number of gallons of paint required
//      cout << "Gallons required     : "
//           << gals_of_paint_req
//           << endl;

//      // • The hours of labor required
//      cout << "Hours required       : "
//           << labor_required
//           << endl;

//      // • The cost of the paint
//      cout << "Cost of paint        :$"
//           << cost_of_paint
//           << endl;

//      // • The labor charges
//      cout << "Labor charges        :$"
//           << labor_charges
//           << endl;

//      // • The total cost of the paint job
//      cout << "Total cost of job    :$"
//           << total_cost
//           << endl;
// }