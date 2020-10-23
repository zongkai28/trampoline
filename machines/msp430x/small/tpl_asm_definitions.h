#ifndef TPL_ASM_DEFINITIONS_H
#define TPL_ASM_DEFINITIONS_H

/*
 * tpl_kern data structure offsets (for use into assembler sources)
 */
.equ TPL_KERN_OFFSET_S_RUNNING,     0
.equ TPL_KERN_OFFSET_S_ELECTED,     2
.equ TPL_KERN_OFFSET_RUNNING,       4
.equ TPL_KERN_OFFSET_ELECTED,       6
.equ TPL_KERN_OFFSET_RUNNING_ID,    8
.equ TPL_KERN_OFFSET_ELECTED_ID,    12
.equ TPL_KERN_OFFSET_NEED_SWITCH,   16
.equ TPL_KERN_OFFSET_NEED_SCHEDULE, 17

/* Init values for various fields of tpl_kern */
.equ NO_NEED_SWITCH_NOR_SCHEDULE,   0
.equ NO_NEED_SWITCH,                0
.equ NEED_SWITCH,                   1
.equ NEED_SAVE,                     2


#endif
