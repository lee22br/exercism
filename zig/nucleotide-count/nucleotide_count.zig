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
    const dnaCount = Counts;
    for (s) |ch| {
        switch (ch) {
            ascii_A => dnaCount.a += 1,
            ascii_C => dnaCount.c += 1,
            ascii_G => dnaCount.g += 1,
            ascii_T => dnaCount.t += 1,
            else => 0, //('Invalid nucleotide in strand'),
        }
    }
    return Counts;
}
