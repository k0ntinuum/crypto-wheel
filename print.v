pub fn print_symbol(s Symbol) {
	match s {
		0 { print('O') }
		1 { print('|') }
		else { print('${s}') }
	}
}

pub fn print_symbols(v []Symbol) {
	for i in 0 .. v.len {
		print_symbol(v[i])
	}
	print('\n')
}

fn print_symbol_reversed(x Symbol, r bool) {
	if r {
		start_reverse_text()
	}
	print_symbol(x)
	if r {
		stop_reverse_text()
	}
}

fn print_symbols_one_reversed(v []Symbol, k int, s bool) {
	for i in 0..v.len {
		if s  {
			print(' ')
		} 
		print_symbol_reversed(v[i], i == k )
	
	}
}
