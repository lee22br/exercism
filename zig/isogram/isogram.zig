pub fn isIsogram(str: []const u8) bool {
    for (str) |c| {
        std.debug.print(c);
    }
}
pub fn main() !void {
    isIsogram("abc");
}
