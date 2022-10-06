const stdout = @import("std").io.getStdOut().writer();

pub fn main() !void {
        var sum: u32 = 0;
        var i: u32 = 0;

        while (i < 1000) {
                sum += if (i % 3 == 0 or i % 5 == 0) i else 0;
                i += 1;
        }

        try stdout.print("{d}\n", .{sum});
}