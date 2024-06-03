/* SPDX-License-Identifier: BSD-3-Clause
 * Copyright(c) 2010-2014 Intel Corporation
 */


/* dpdk-null
    A dpdk application that just starts and stops the EAL.
*/
#include <stdio.h>
#include <string.h>
#include <stdint.h>
#include <errno.h>
#include <sys/queue.h>
#include <rte_memory.h>
#include <rte_launch.h>
#include <rte_eal.h>
#include <rte_per_lcore.h>
#include <rte_lcore.h>
#include <rte_debug.h>
#include <rte_ethdev.h>
#include <rte_dev.h>

const char usage_info[] = "usage: dpdk-null\n";
/* Initialization of Environment Abstraction Layer (EAL). 8< */
int main(int argc, char **argv)
{
	int ret;

	ret = rte_eal_init(argc, argv);
	if (ret < 0)
		rte_panic("Cannot init EAL\n");
	/* clean up the EAL */
	rte_eal_cleanup();

	return 0;
}
