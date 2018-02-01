/*
 * delay.c
 *
 *  Created on: 2017年10月4日
 *      Author: 79864
 */
/*推荐时钟配置 （5分频有问题）
    SysCtlClockSet(SYSCTL_SYSDIV_2_5|SYSCTL_USE_PLL|SYSCTL_XTAL_16MHZ|SYSCTL_OSC_MAIN);
*/
#include <stdint.h>
#include <stdbool.h>
#include "driverlib/sysctl.h"
#include "delay.h"

void Delay_ms(uint32_t ms)
{
    uint32_t count;
    count = SysCtlClockGet()/(6*1000);
    SysCtlDelay(ms*count);
}
void Delay_us(uint32_t us)
{
    uint32_t count;
    count = SysCtlClockGet()/(6*1000000);
    SysCtlDelay(us*count);
}


