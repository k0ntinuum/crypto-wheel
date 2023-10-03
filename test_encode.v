fn (mut m Machine) test_encode(l int) {
	println('\nENCODING TEST for ')
	print_symbols(m.k_)
	println('')
	p := random_symbols(l, u64(m.s))
	m.reset()
	c := m.encode(p, true)
	m.reset()
	d := m.decode(c, false)
	m.reset()
	println('\nsummary')
	print_symbols(p)
	print_symbols(c)
	print_symbols(d)
	if same(p, d) {
		println('success      p != c :  ${count(p, c):3}/${l}  \n')
	} else {
		println('FAILURE\n')
	}
}

fn same(x []Symbol, y []Symbol) bool {
	if x.len != y.len {
		return false
	}
	for i in 0 .. x.len {
		if x[i] != y[i] {
			return false
		}
	}
	return true
}
