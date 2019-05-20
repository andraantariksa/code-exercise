struct Process {
    name: String,
    time: i32,
}

struct Queue<T> {
    data: std::collections::VecDeque<T>,
}

impl<T> Queue<T> {
    fn new() -> Self {
        Self {
            data: std::collections::VecDeque::new(),
        }
    }

    fn push(&mut self, data: T) {
        self.data.push_back(data);
    }

    fn pop(&mut self) -> Option<T> {
        self.data.pop_front()
    }

    fn size(&self) -> usize {
        self.data.len()
    }
}

fn main() {
    let mut q: Queue<Process> = Queue::new();
    let mut input = String::new();
    std::io::stdin().read_line(&mut input).expect("Input error");
    let data = input
        .trim()
        .split_whitespace()
        .map(|x| x.parse::<i32>().expect("Error parsing"))
        .collect::<Vec<i32>>();
    let (total, quantum) = (data[0], data[1]);
    for _ in 0..total {
        input = String::new();
        std::io::stdin().read_line(&mut input).expect("Input error");
        let data = input.trim().split_whitespace().collect::<Vec<&str>>();
        q.push(Process {
            name: String::from(data[0]),
            time: data[1].parse().expect("Error parsing"),
        });
    }
    let mut p_temp: Process;
    let mut total_time = 0;
    while q.size() > 0 {
        p_temp = q.pop().expect("Empty process");
        if p_temp.time - quantum > 0 {
            total_time += quantum;
            q.push(Process {
                time: p_temp.time - quantum,
                ..p_temp
            })
        } else {
            total_time += p_temp.time;
            println!("{} {}", p_temp.name, total_time);
        }
    }
}
