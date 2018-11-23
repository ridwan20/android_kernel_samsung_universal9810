// SPDX-Identifier: GPL-2.0
#include <linux/init.h>
#include <asm/bugs.h>
#include <asm/proc-fns.h>

void check_other_bugs(void)
{
#ifdef MULTI_CPU
<<<<<<< HEAD
	if (cpu_check_bugs)
		cpu_check_bugs();
=======
	if (processor.check_bugs)
		processor.check_bugs();
>>>>>>> faa880775528... Merge 4.9.139 into android-4.9
#endif
}

void __init check_bugs(void)
{
	check_writebuffer_bugs();
	check_other_bugs();
}
