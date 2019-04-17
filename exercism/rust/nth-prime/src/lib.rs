fn sieve_eratothenes(n: u32) -> Vec<bool>{
    let mut v = vec![true; (n as usize) + 1];
    v[0] = false;
    v[1] = false;
    for i in 2..(n as f64).sqrt() as u32 + 1 {
        if v[i as usize] {
            for j in (i.pow(2)..n + 1).step_by(i as usize) {
                v[j as usize] = false;
            }
        }
    }
    v
}

pub fn nth(n: u32) -> u32 {
    let sieve_max = 1000000;
    let table_of_prime = sieve_eratothenes(sieve_max);
    let mut n_th_prime: u32 = 0;
    for i in 2..sieve_max + 1{
        if table_of_prime[i as usize] {
            if n_th_prime == n {
                return i;
            }
            n_th_prime += 1;
        }
    }
    0
}
