def rps(p1, p2)
    return "Draw!" if p1 == p2
    p1_w = false
    if (p1 == "paper" and p2 == "rock") or (p1 == "rock" and p2 == "scissors") or (p1 == "scissors" and p2 == "paper")
       p1_w = true
    end
    "Player #{if p1_w then 1 else 2 end} won!"
end
