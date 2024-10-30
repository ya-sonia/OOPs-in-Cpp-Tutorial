#include <iostream>
#include <string>

class MyDate {
private:
    int day, month, year;

public:
    // Default constructor
    MyDate() {
        // Set default values to 1st January 2000
        day = 1;
        month = 1;
        year = 2000;
    }

    // Parameterized constructor
    MyDate(int d, int m, int y) {
        day = d;
        month = m;
        year = y;
        invalidate(); // Check and correct if date is invalid
    }

    // Copy constructor
    MyDate(const MyDate& other) {
        day = other.day;
        month = other.month;
        year = other.year;
    }

    // Method to invalidate the date (correct if invalid)
    void invalidate() {
        // Implement date validation logic here
        // For simplicity, assume all dates are valid in this example
    }

    // Method to get the day of the week
    std::string getDayOfWeek() const {
        // Implement day of the week logic here (e.g., using Zeller's Congruence)
        // For simplicity, assume a basic implementation for this example
        // Note: This may not be accurate for dates prior to 1583
        int h = (day + 13 * (month + 1) / 5 + year + year / 4 - year / 100 + year / 400) % 7;
        const std::string daysOfWeek[] = {"Saturday", "Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday"};
        return daysOfWeek[h];
    }

    // Method to display the date in the specified format
    void displayDate() const {
        const std::string monthNames[] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};

        std::cout << getDayOfWeek() << " " << day;

        // Add the appropriate suffix for the day
        if (day == 1 || day == 21 || day == 31)
            std::cout << "st";
        else if (day == 2 || day == 22)
            std::cout << "nd";
        else if (day == 3 || day == 23)
            std::cout << "rd";
        else
            std::cout << "th";

        std::cout << " " << monthNames[month - 1] << " " << year << std::endl;
    }
};

int main() {
    // Default constructor
    MyDate defaultDate;
    std::cout << "Default Constructor: ";
    defaultDate.displayDate();

    // Parameterized constructor
    MyDate paramDate(17, 10, 2022);
    std::cout << "Parameterized Constructor: ";
    paramDate.displayDate();

    // Copy constructor
    MyDate copyDate = paramDate;
    std::cout << "Copy Constructor: ";
    copyDate.displayDate();

  return 0;
}
