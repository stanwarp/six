const std = @import("std");
const mem = std.mem;
const heap = std.heap;
const stdout = std.io.getStdOut().writer();
const expect = std.testing.expect;

pub fn main() !void {
    var general_purpose_allocator = std.heap.GeneralPurposeAllocator(.{}){};
    const gpa = general_purpose_allocator.allocator();
    const args = try std.process.argsAlloc(gpa);
    defer std.process.argsFree(gpa, args);

    const b = try std.fmt.parseInt(i32, args[1], 10);

    var total = @divFloor(b * b, 2) + @divFloor((b + 1), 2);
    var some_integers: [10][2]i32 = undefined;

    var index: u64 = 0;
    var i: i32 = 0;
    while (i < b) : (i += 1) {
        var j: i32 = 0;
        while (j < b) : (j += 1) {
            if (i * j == total - (i + j)) {
                some_integers[index][0] = i;
                some_integers[index][1] = j;
                index += 1;
            }
        }
    }
    try stdout.print("{any}\n", .{some_integers[0..index]});
}
