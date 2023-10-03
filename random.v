import crypto.rand

fn random_symbols(l int, m u64) []Symbol {
	mut v := []Symbol{}
	for _ in 0 .. l {
		v << rand.int_u64(m) or {
			println(err)
			exit(0)
		}
	}
	return v
}
