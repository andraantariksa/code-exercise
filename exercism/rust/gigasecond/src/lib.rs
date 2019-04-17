use chrono::{DateTime, Utc, offset::TimeZone};

// Returns a Utc DateTime one billion seconds after start.
pub fn after(start: DateTime<Utc>) -> DateTime<Utc> {
    Utc.timestamp(start.timestamp() + 1000000000, 0)
}
