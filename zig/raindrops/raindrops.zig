const std = @import("std");

pub fn convert(buffer: []u8, n: u32) []const u8 {
    var stream = std.io.fixedBufferStream(buffer);
    const isPling = n % 3 == 0;
    const isPlang = n % 5 == 0;
    const isPlong = n % 7 == 0;

    if (isPling) stream.writer().writeAll("Pling") catch unreachable;
    if (isPlang) stream.writer().writeAll("Plang") catch unreachable;
    if (isPlong) stream.writer().writeAll("Plong") catch unreachable;

    if (!isPling and !isPlang and !isPlong) {
        stream.writer().print("{d}", .{n}) catch unreachable;
    }

    return stream.getWritten();
}
