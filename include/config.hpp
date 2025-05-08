#ifndef __CONFIG_HPP__
#define __CONFIG_HPP__

namespace ESP32
{
    constexpr gpio_num_t IO_LINK_CS   = GPIO_NUM_40;
    constexpr gpio_num_t IO_LINK_SCLK = GPIO_NUM_41;
    constexpr gpio_num_t IO_LINK_SDI  = GPIO_NUM_42;
    constexpr gpio_num_t IO_LINK_SDO  = GPIO_NUM_2;
    constexpr gpio_num_t IO_LINK_IRQ  = GPIO_NUM_1;
}
#endif