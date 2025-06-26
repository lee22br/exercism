pub fn isLeapYear(year: u32) bool {
    var result: bool = false;

    const mod4: bool = year % 4 == 0;
    const mod100: bool = year % 100 == 0;
    const mod400: bool = year % 400 == 0;

    result = mod4 and !mod100 or mod400;

    return result;
}
