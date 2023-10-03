fn (mut m Machine) encrypt(p []Symbol, r int, demo bool) []Symbol {
	mut c := p.clone()
	if demo {
		print_symbols(c)
	}
	for i in 0 .. r {
		m.spin(i)
		c = m.encode(c, false)
		c.reverse_in_place()
		if demo {
			print_symbols(c)
		}
	}
	println('')
	return c
}

fn (mut m Machine) decrypt(c []Symbol, r int, demo bool) []Symbol {
	mut p := c.clone()
	if demo {
		print_symbols(p)
	}
	for i in 0 .. r {
		m.spin(r - 1 - i)
		p.reverse_in_place()
		p = m.decode(p, false)
		if demo {
			print_symbols(p)
		}
	}
	println('')
	return p
}

fn (mut m Machine) spin(i int) {
	m.reset()
	for _ in 0 .. i * m.w {
		x := mod(i, m.w)
		m.k[x] = mod(m.r[x] + m.k[x], m.s)
		m.roll()
	}
}
