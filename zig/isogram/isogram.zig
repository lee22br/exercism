const std = @import("std");

pub fn isIsogram(str: []const u8) bool {
    const ascii_a = 97; // 'a'
    const ascii_z = 122; // 'z'
    const ascii_A = 65; // 'A'
    const ascii_Z = 90; // 'Z'
    var alphabetList = [_]bool{false} ** 26;

    for (str) |c| {
        if (c >= ascii_a and c <= ascii_z or c >= ascii_A and c <= ascii_Z) {
            const pos = std.ascii.toLower(c) - ascii_a;
            if (alphabetList[pos] == false) {
                alphabetList[pos] = true;
            } else {
                return false;
            }
        }
    }
    return true;
}
pub fn main() !void {
    std.debug.print("Is Isogram: {}", .{isIsogram("abx")});
}
