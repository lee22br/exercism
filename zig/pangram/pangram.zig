const std = @import ("std");
pub fn isPangram(str: []const u8) bool {
    const ascii_a = 97; // 'a'
    var alphabetList = [_]bool{false} ** 26;
    var count:u8 = 0;

    if (str.len < 26) return false;

    for (str) |c| {
        if (std.ascii.isAlphabetic(c)){
            const pos = std.ascii.toLower(c) - ascii_a;
            if (alphabetList[pos] == false) {
                alphabetList[pos] = true;
                count += 1;
            }
        }
    }
    return count == 26;
}

