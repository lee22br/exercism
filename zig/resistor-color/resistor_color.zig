const std = @import("std");

pub const ColorBand = enum {
    black,
    brown,
    red,
    orange,
    yellow,
    green,
    blue,
    violet,
    grey,
    white,
};


pub fn colorCode(color: ColorBand) usize {
    return @enumToInt(color);
}

pub fn colors() []const ColorBand {
    @compileError("refer to a collection of all resistor colorbands");
}
