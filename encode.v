fn (mut m Machine) encode(p []Symbol, demo bool) []Symbol {
	mut c := []Symbol{}
	for i in 0 .. p.len {
		if demo {
			//m.display_encoding_state(i % m.r.len,false)
			m.display_encoding_state(-1,false)
		}
		m.roll()
		c << mod(m.r[0] + p[i], m.s)
		x := mod(i, m.w)
		m.k[x] = mod(m.k[x] + p[i], m.s)
		m.r[x] = mod(m.r[x] + p[i], m.s)
	}
	if demo {
		println('')
	}

	return c
}

fn (mut m Machine) decode(c []Symbol, demo bool) []Symbol {
	mut p := []Symbol{}
	for i in 0 .. c.len {
		if demo {
			//m.display_encoding_state(i % m.r.len,false)
			m.display_encoding_state(-1,false)
		}
		m.roll()
		p << mod(c[i] - m.r[0], m.s)
		x := mod(i, m.w)
		m.k[x] = mod(m.k[x] + p[i], m.s)
		m.r[x] = mod(m.r[x] + p[i], m.s)
	}
	if demo {
		println('')
	}
	return p
}
