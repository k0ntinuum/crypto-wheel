import math

fn (m Machine) cell_code(i int) int {
	mut y := i64(0)
	c := i - m.n / 2
	for k in 0 .. m.n {
		x := mod(c + k, m.w)
		y += math.powi(m.s, m.n - 1 - k) * m.r[x]
	}
	return int(y)
}

fn mod(x int, m int) int {
	mut y := x
	for y > m - 1 {
		y -= m
	}
	for y < 0 {
		y += m
	}
	return y
}
