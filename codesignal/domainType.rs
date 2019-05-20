fn domainType(domains: Vec<String>) -> Vec<String> {
    let mut out = Vec::new();
    for i in domains.iter() {
        let suffix = i.split(".").last().unwrap();
        out.push(
            match suffix {
                "com" => "commercial",
                "net" => "network",
                "org" => "organization",
                "info" => "information",
                _ => panic!(""),
            }
            .to_string(),
        );
    }
    out
}
