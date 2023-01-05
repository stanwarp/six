use std::env;

fn main(){
    let args: Vec<String> = env::args().collect();
    if args.len() < 2 {
        return;
    }
    let b = args[1].parse::<i32>().unwrap();
    let total = b * b / 2 + b / 2;
    
    let mut neededNumbers = Vec::new();
    for i in 1..b {
        for j in 1..b {
            if i == j { continue }
            if i * j == total - (i+j) {
                neededNumbers.push([i, j]);
            }
        }
    }
    println!("{:?}", neededNumbers);
}
