
// -----------------------------------------------------------------------------
// Implementation of the primitive pkg.Relay.
// -----------------------------------------------------------------------------

int METH(mainItf, main)(int argc, char **argv) {
	return CALL(zeroItf, returnZero)();
}
