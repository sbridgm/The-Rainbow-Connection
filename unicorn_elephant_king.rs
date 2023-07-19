extern crate itertools;

use itertools::Itertools;

fn main() {
    let mut connect_the_rainbow = Vec::new();

    for _ in 0..2000 {
        let colors = vec!["Red", "Orange", "Yellow", "Green", "Blue", "Indigo", "Violet"];
        connect_the_rainbow.push(colors.iter().format("-"));
    }

    for line in connect_the_rainbow {
        println!("{}", line);
    }
}