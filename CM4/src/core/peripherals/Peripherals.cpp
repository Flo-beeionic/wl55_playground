
#include "Peripherals.hpp"

namespace core
{
		volatile uint32_t * PeripheralBaseAddresses::adc = reinterpret_cast<volatile uint32_t*>(0x40012400);
		volatile uint32_t * PeripheralBaseAddresses::aes = reinterpret_cast<volatile uint32_t*>(0x58001800);
		volatile uint32_t * PeripheralBaseAddresses::comp = reinterpret_cast<volatile uint32_t*>(0x40010200);
		volatile uint32_t * PeripheralBaseAddresses::crc = reinterpret_cast<volatile uint32_t*>(0x40023000);
		volatile uint32_t * PeripheralBaseAddresses::dac = reinterpret_cast<volatile uint32_t*>(0x40007400);
		volatile uint32_t * PeripheralBaseAddresses::dbgmcu = reinterpret_cast<volatile uint32_t*>(0xE0042000);
		volatile uint32_t * PeripheralBaseAddresses::dma1 = reinterpret_cast<volatile uint32_t*>(0x40020000);
		volatile uint32_t * PeripheralBaseAddresses::dma2 = reinterpret_cast<volatile uint32_t*>(0x40020400);
		volatile uint32_t * PeripheralBaseAddresses::dmamux = reinterpret_cast<volatile uint32_t*>(0x40020800);
		volatile uint32_t * PeripheralBaseAddresses::exti = reinterpret_cast<volatile uint32_t*>(0x58000800);
		volatile uint32_t * PeripheralBaseAddresses::flash = reinterpret_cast<volatile uint32_t*>(0x58004000);
		volatile uint32_t * PeripheralBaseAddresses::gpioa = reinterpret_cast<volatile uint32_t*>(0x48000000);
		volatile uint32_t * PeripheralBaseAddresses::gpiob = reinterpret_cast<volatile uint32_t*>(0x48000400);
		volatile uint32_t * PeripheralBaseAddresses::gpioc = reinterpret_cast<volatile uint32_t*>(0x48000800);
		volatile uint32_t * PeripheralBaseAddresses::gpioh = reinterpret_cast<volatile uint32_t*>(0x48001C00);
		volatile uint32_t * PeripheralBaseAddresses::hsem = reinterpret_cast<volatile uint32_t*>(0x58001400);
		volatile uint32_t * PeripheralBaseAddresses::i2c1 = reinterpret_cast<volatile uint32_t*>(0x40005400);
		volatile uint32_t * PeripheralBaseAddresses::i2c2 = reinterpret_cast<volatile uint32_t*>(0x40005800);
		volatile uint32_t * PeripheralBaseAddresses::i2c3 = reinterpret_cast<volatile uint32_t*>(0x40005C00);
		volatile uint32_t * PeripheralBaseAddresses::ipcc = reinterpret_cast<volatile uint32_t*>(0x58000C00);
		volatile uint32_t * PeripheralBaseAddresses::iwdg = reinterpret_cast<volatile uint32_t*>(0x40003000);
		volatile uint32_t * PeripheralBaseAddresses::lptim1 = reinterpret_cast<volatile uint32_t*>(0x40007C00);
		volatile uint32_t * PeripheralBaseAddresses::lptim2 = reinterpret_cast<volatile uint32_t*>(0x40009400);
		volatile uint32_t * PeripheralBaseAddresses::lptim3 = reinterpret_cast<volatile uint32_t*>(0x40009800);
		volatile uint32_t * PeripheralBaseAddresses::lpuart = reinterpret_cast<volatile uint32_t*>(0x40008000);
		volatile uint32_t * PeripheralBaseAddresses::mpu = reinterpret_cast<volatile uint32_t*>(0xE000ED90);
		volatile uint32_t * PeripheralBaseAddresses::nvic = reinterpret_cast<volatile uint32_t*>(0xE000E100);
		volatile uint32_t * PeripheralBaseAddresses::nvic_stir = reinterpret_cast<volatile uint32_t*>(0xE000EF00);
		volatile uint32_t * PeripheralBaseAddresses::pka = reinterpret_cast<volatile uint32_t*>(0x58002000);
		volatile uint32_t * PeripheralBaseAddresses::pwr = reinterpret_cast<volatile uint32_t*>(0x58000400);
		volatile uint32_t * PeripheralBaseAddresses::rcc = reinterpret_cast<volatile uint32_t*>(0x58000000);
		volatile uint32_t * PeripheralBaseAddresses::rng = reinterpret_cast<volatile uint32_t*>(0x58001000);
		volatile uint32_t * PeripheralBaseAddresses::rtc = reinterpret_cast<volatile uint32_t*>(0x40002800);
		volatile uint32_t * PeripheralBaseAddresses::scb = reinterpret_cast<volatile uint32_t*>(0xE000ED00);
		volatile uint32_t * PeripheralBaseAddresses::scb_actrl = reinterpret_cast<volatile uint32_t*>(0xE000E008);
		volatile uint32_t * PeripheralBaseAddresses::spi1 = reinterpret_cast<volatile uint32_t*>(0x40013000);
		volatile uint32_t * PeripheralBaseAddresses::spi2 = reinterpret_cast<volatile uint32_t*>(0x40003800);
		volatile uint32_t * PeripheralBaseAddresses::spi3 = reinterpret_cast<volatile uint32_t*>(0x58010000);
		volatile uint32_t * PeripheralBaseAddresses::stk = reinterpret_cast<volatile uint32_t*>(0xE000E010);
		volatile uint32_t * PeripheralBaseAddresses::syscfg = reinterpret_cast<volatile uint32_t*>(0x40010000);
		volatile uint32_t * PeripheralBaseAddresses::syscfg_continue = reinterpret_cast<volatile uint32_t*>(0x40010100);
		volatile uint32_t * PeripheralBaseAddresses::tamp = reinterpret_cast<volatile uint32_t*>(0x4000B000);
		volatile uint32_t * PeripheralBaseAddresses::tim1 = reinterpret_cast<volatile uint32_t*>(0x40012C00);
		volatile uint32_t * PeripheralBaseAddresses::tim2 = reinterpret_cast<volatile uint32_t*>(0x40000000);
		volatile uint32_t * PeripheralBaseAddresses::tim16 = reinterpret_cast<volatile uint32_t*>(0x40014400);
		volatile uint32_t * PeripheralBaseAddresses::tim17 = reinterpret_cast<volatile uint32_t*>(0x40014800);
		volatile uint32_t * PeripheralBaseAddresses::tzic = reinterpret_cast<volatile uint32_t*>(0x58004800);
		volatile uint32_t * PeripheralBaseAddresses::tzsc = reinterpret_cast<volatile uint32_t*>(0x58004400);
		volatile uint32_t * PeripheralBaseAddresses::usart1 = reinterpret_cast<volatile uint32_t*>(0x40013800);
		volatile uint32_t * PeripheralBaseAddresses::usart2 = reinterpret_cast<volatile uint32_t*>(0x40004400);
		volatile uint32_t * PeripheralBaseAddresses::vrefbuf = reinterpret_cast<volatile uint32_t*>(0x40010030);
		volatile uint32_t * PeripheralBaseAddresses::wwdg = reinterpret_cast<volatile uint32_t*>(0x40002C00);
} // end namespace processor
