fn dna_strand(dna: &str) -> String {
    dna.chars()
        .map(|x| match x {
            'A' => 'T',
            'T' => 'A',
            'C' => 'G',
            'G' => 'C',
            x => x,
        })
        .collect()
}
