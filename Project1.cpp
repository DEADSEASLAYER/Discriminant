#include <iostream>
#include <cmath>

int main()
{
    double a, b, c;
    double discriminant, r1, r2;

    std::cout << "Enter a,b,c: "<< std:: endl;
    std::cin >> a >> b >> c;

    discriminant = (b * b) - (4 * a * c);

    if (discriminant > 0)
    {
        r1 =(-b + sqrt(discriminant)) / (2 * a);
        r2 =(-b - sqrt(discriminant)) / (2 * a);
        std::cout << "The equation has two roots" << r1 << " and " << r2 << std::endl;
    }
    else if (discriminant == 0)
    {
        r1 = -b / (2 * a);
        std::cout << "The equation has one root " << r1 << std::endl;
    }
    else
    {
        std::cout << "The eqaution has no real roots"<< std::endl;
    }
    return 0;
}