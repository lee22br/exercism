// INFO: Headers from the standard library should be inserted at the top via
#include <cmath>

// daily_rate calculates the daily rate given an hourly rate
double daily_rate(double hourly_rate) {
    const int dailyHour = 8;
    return hourly_rate * dailyHour;
}

// apply_discount calculates the price after a discount
double apply_discount(double before_discount, double discount) {
    const double discountPercent = (100 - discount)/100;
    return before_discount * discountPercent;
}

// monthly_rate calculates the monthly rate, given an hourly rate and a discount
// The returned monthly rate is rounded up to the nearest integer.
int monthly_rate(double hourly_rate, double discount) {
    const int workDays = 22;
    return std::ceil(workDays * daily_rate(apply_discount(hourly_rate, discount)));
}

// days_in_budget calculates the number of workdays given a budget, hourly rate,
// and discount The returned number of days is rounded down (take the floor) to
// the next integer.
int days_in_budget(int budget, double hourly_rate, double discount) {
    return std::floor(budget / daily_rate(apply_discount(hourly_rate, discount)));
}