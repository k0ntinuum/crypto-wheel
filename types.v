type Symbol = int
type Key = []Symbol

struct Machine {
	s  int      // symbols
	n  int      // neighborhood
	w  int      // width = s**n
	k_ []Symbol // permenant original key
mut:
	k []Symbol // mutating key
	r []Symbol // mutating roll or state
}
