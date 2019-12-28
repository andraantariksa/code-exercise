impl Solution {
    pub fn all_paths_source_target(graph: Vec<Vec<i32>>) -> Vec<Vec<i32>> {
        let mut acc: Vec<Vec<i32>> = Vec::new();
        find_way(0, Vec::new(), Vec::new(), &graph, &mut acc);
        
        fn find_way(loc: i32, mut path: Vec<i32>, mut visited: Vec<i32>, graph: &Vec<Vec<i32>>, acc: &mut Vec<Vec<i32>>) {
            visited.push(loc);
            path.push(loc);
            if loc as usize == graph.len() - 1 {
                acc.push(visited);
                return;
            }
            
            for i in graph[loc as usize].iter() {
                if !visited.contains(&i) {
                    find_way(*i, path.clone(), visited.clone(), graph, acc);
                }
            }
        }
        acc
    }
}