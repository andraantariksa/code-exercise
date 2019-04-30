def proteins(strand):
    if len(strand) % 3 != 0:
        raise Exception("Invalid RNA")
    protein = []
    protein_list = {
        "AUG" : "Methionine",
        "UUU" : "Phenylalanine",
        "UUC" : "Phenylalanine",
        "UUA" : "Leucine",
        "UUG" : "Leucine",
        "UCU" : "Serine",
        "UCC" : "Serine",
        "UCA" : "Serine",
        "UCG" : "Serine",
        "UAU" : "Tyrosine",
        "UAC" : "Tyrosine",
        "UGU" : "Cysteine",
        "UGC" : "Cysteine",
        "UGG" : "Tryptophan",
        "UAA" : "STOP",
        "UAG" : "STOP",
        "UGA" : "STOP"
    }
    for i in range(0, len(strand), 3):
        if strand[i:i + 3] not in protein_list:
            raise Exception("Invalid RNA")
        else:
            if protein_list[strand[i:i + 3]] == "STOP":
                return protein
            if protein_list[strand[i:i + 3]] not in protein:
                protein.append(protein_list[strand[i:i + 3]])
    return protein

