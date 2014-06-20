/**
 * mindc examples
 *
 * Copyright (C) 2010 STMicroelectronics
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307 USA
 *
 * Contact: mind@ow2.org
 *
 * Authors: Matthieu Leclercq
 */

// Declare functions generated by toolchain to initialize components.
void __component_global_init(void);
void __component_global_shutdown(void);

// -----------------------------------------------------------------------------
// Implementation of the main interface.
// -----------------------------------------------------------------------------

// int main(int argc, string[] argv)
int main(int argc, char *argv[]) {
	int r;
	int lccR;
	// call global_init function. (this function calls constructors of static
	// component instances)
	__component_global_init();

	// call the "main" entry point of the application
	r = CALL(entryPoint, main)(argc, argv);

	// call global_shputdown function. (this function calls destructors of static
	// component instances)
	__component_global_shutdown();

	return r;
}
