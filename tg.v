fn start_reverse_text() {
	print('\x1b[7m')
}

fn stop_reverse_text() {
	print('\x1b[27m')
}
pub fn cls() {
	print('\x1b[2J')
}

pub fn move_cursor(r int, c int) {
	print('\x1b[${r};${c}H')
}
