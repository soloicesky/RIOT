#ifndef CPU_CONF_H
#define CPU_CONF_H

/**
 * @name Kernel configuration
 * @{
 */
#define F_CPU                                             96000000

#define KERNEL_CONF_STACKSIZE_PRINTF		(4096)
#ifndef KERNEL_CONF_STACKSIZE_DEFAULT
#define KERNEL_CONF_STACKSIZE_DEFAULT	1500
#endif

#define KERNEL_CONF_STACKSIZE_IDLE		1000
/** @} */

#endif /* CPU_CONF_H */
