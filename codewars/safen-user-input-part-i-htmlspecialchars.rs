fn html_special_chars(html: &str) -> String {
    html.to_string().replace("&", "&amp;").replace("<", "&lt;").replace(">", "&gt;").replace("\"", "&quot;")
}
