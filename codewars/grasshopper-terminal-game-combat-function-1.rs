fn combat(health: f32, damage: f32) -> f32 {
    let hp = health-damage;
    if hp >= 0.0 {
        hp
    }else{
        0.0
    }
}
