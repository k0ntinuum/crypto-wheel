fn (mut m Machine) test_encrypt(l int, r int) {
	println('\nENCRYPTION TEST for ')
	print_symbols(m.k_)
	println('')
	p := random_symbols(l, u64(m.s))
	c := m.encrypt(p, r, true)
	d := m.decrypt(c, r, true)
	print('p : ')
	print_symbols(p)
	print('c : ')
	print_symbols(c)
	print('d : ')
	print_symbols(d)
	if same(p, d) {
		println('SUCCESS      p != c : ${count(p, c):3}/${l}  \n')
	} else {
		println('FAILURE\n')
	}
}

fn count(x []Symbol, y []Symbol) int {
	mut c := 0
	for i in 0 .. x.len {
		if x[i] == y[i] {
			c += 1
		}
	}
	return c
}
