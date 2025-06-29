pub const NucleotideError = error{Invalid};

pub const Counts = struct {
    a: u32,
    c: u32,
    g: u32,
    t: u32,
};

pub fn countNucleotides(s: []const u8) NucleotideError!Counts {
    const ascii_A = 65; // 'A'
    const ascii_C = 67; // 'C
    const ascii_G = 71; // 'G'
    const ascii_T = 84; // 'T'
    var dnaCount: Counts = .{
        .a = 0,
        .c = 0,
        .g = 0,
        .t = 0,
    };
    for (s) |ch| {
        if (ascii_A == ch) dnaCount.a += 1;
        if (ascii_C == ch) dnaCount.c += 1;
        if (ascii_G == ch) dnaCount.g += 1;
        if (ascii_T == ch) dnaCount.t += 1;
    }
    return dnaCount;
}
