pub const ColorBand = enum(usize) {
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
pub fn colorCode(colors: [2]ColorBand) usize {
    const resistor1 = @intFromEnum(colors[0]);
    const resistor2 = @intFromEnum(colors[1]);
    const result = (resistor1 * 10) + resistor2;
    return result;
}
