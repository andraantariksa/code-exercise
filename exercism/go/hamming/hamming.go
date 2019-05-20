package hamming

import "errors"

func Distance(a, b string) (int, error) {
    if len(a) != len(b) {
        return -1, errors.New("Strings length are not the same")
    }
    distance := 0
    for i := range a {
        if a[i] != b[i] {
            distance++
        }
    }
    return distance, nil
}
