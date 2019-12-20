#ifndef _COMMON_MACROS_H
#define _COMMON_MACROS_H

#define SET_BIT(REG,BIT)    (REG |=  (1<<BIT))
#define CLR_BIT(REG,BIT)  (REG &= ~(1<<BIT))
#define TOGGLE_BIT(REG,BIT) (REG ^=  (1<<BIT))
#define READ_BIT(REG,BIT)   ((REG & (1<<BIT)) >> BIT)


#endif



