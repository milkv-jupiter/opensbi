#ifndef __UNDERLY_IMPLEMENT__H__
#define __UNDERLY_IMPLEMENT__H__

#include <sbi/sbi_types.h>

void spacemit_top_on(u_register_t mpidr);
void spacemit_top_off(u_register_t mpidr);
void spacemit_cluster_on(u_register_t mpidr);
void spacemit_cluster_off(u_register_t mpidr);
void spacemit_wakeup_cpu(u_register_t mpidr);
void spacemit_assert_cpu(u_register_t mpidr);
int spacemit_core_enter_c2(u_register_t mpidr);
int spacemit_cluster_enter_m2(u_register_t mpidr);
void spacemit_wait_core_enter_c2(u_register_t mpidr);
void spacemit_deassert_cpu(void);

#endif
