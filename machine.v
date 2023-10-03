fn square_machine(s int, n int) Machine {
	k := key(s, n)
	mut m := Machine{
		s: s
		n: n
		k_: k
		w: k.len
		k: k
		r: k
	}
	return m
}

fn (mut m Machine) reset() {
	m.k = m.k_.clone()
	m.r = m.k_.clone()
}

fn (m Machine) print() {
	print('s     : ${m.s:04}\n')
	print('n     : ${m.n:04}\n')
	print('w     : ${m.w:04}\n')
	print('m.k_  : ')
	print_symbols(m.k_)
	print('m.k   : ')
	print_symbols(m.k)
	print('m.r   : ')
	print_symbols(m.r)
}

fn (mut m Machine) roll() {
	mut v := []Symbol{}
	for i in 0 .. m.r.len {
		x := mod(m.cell_code(i), m.k.len)
		v << m.k[x]
	}
	m.r = v.clone()
}

fn (mut m Machine) rolls(k int) {
	for _ in 0 .. k {
		m.roll()
	}
}

fn (mut m Machine) display_rolls(k int) {
	print_symbols(m.r)
	for _ in 0 .. k {
		m.roll()
		print_symbols(m.r)
	}
}

fn (m Machine) display_encoding_state(j int, s bool) {
	print_symbols_one_reversed(m.r,j,s)
	print('   ')
	print_symbols_one_reversed(m.k,j,s)
	print('\n')
}


