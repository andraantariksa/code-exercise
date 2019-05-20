def fake_bin(s)
    out = ""
    s.split("").each do |char|
        out += if char.ord < "5".ord then "0" else "1" end
    end
    out
end