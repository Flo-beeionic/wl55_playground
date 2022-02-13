
#pragma once
#include <cstdint>
#include "volund/hal/hardware/PeripheralPointer.hpp"
#include "yggdrasil/interfaces/IVectorsManager.hpp"

namespace core
{
	class PeripheralBaseAddresses
	{
		public:
			static volatile uint32_t* adc;
			static volatile uint32_t* aes;
			static volatile uint32_t* comp;
			static volatile uint32_t* crc;
			static volatile uint32_t* dac;
			static volatile uint32_t* dbgmcu;
			static volatile uint32_t* dma1;
			static volatile uint32_t* dma2;
			static volatile uint32_t* dmamux;
			static volatile uint32_t* exti;
			static volatile uint32_t* flash;
			static volatile uint32_t* gpioa;
			static volatile uint32_t* gpiob;
			static volatile uint32_t* gpioc;
			static volatile uint32_t* gpioh;
			static volatile uint32_t* hsem;
			static volatile uint32_t* i2c1;
			static volatile uint32_t* i2c2;
			static volatile uint32_t* i2c3;
			static volatile uint32_t* ipcc;
			static volatile uint32_t* iwdg;
			static volatile uint32_t* lptim1;
			static volatile uint32_t* lptim2;
			static volatile uint32_t* lptim3;
			static volatile uint32_t* lpuart;
			static volatile uint32_t* mpu;
			static volatile uint32_t* nvic;
			static volatile uint32_t* nvic_stir;
			static volatile uint32_t* pka;
			static volatile uint32_t* pwr;
			static volatile uint32_t* rcc;
			static volatile uint32_t* rng;
			static volatile uint32_t* rtc;
			static volatile uint32_t* scb;
			static volatile uint32_t* scb_actrl;
			static volatile uint32_t* spi1;
			static volatile uint32_t* spi2;
			static volatile uint32_t* spi3;
			static volatile uint32_t* stk;
			static volatile uint32_t* syscfg;
			static volatile uint32_t* syscfg_continue;
			static volatile uint32_t* tamp;
			static volatile uint32_t* tim1;
			static volatile uint32_t* tim2;
			static volatile uint32_t* tim16;
			static volatile uint32_t* tim17;
			static volatile uint32_t* tzic;
			static volatile uint32_t* tzsc;
			static volatile uint32_t* usart1;
			static volatile uint32_t* usart2;
			static volatile uint32_t* vrefbuf;
			static volatile uint32_t* wwdg;
		private:
	}; // PeripheralBaseAddresses

	class InterruptsNumber
	{
		public:
			struct Adc
			{
				static constexpr uint32_t irq = 18;
			};
			
			struct Aes
			{
				static constexpr uint32_t irq = 51;
			};
			
			struct Comp
			{
				static constexpr uint32_t irq = 21;
			};
			
			
			struct Dac
			{
				static constexpr uint32_t irq = 19;
			};
			
			
			struct Dma1
			{
				static constexpr uint32_t dma1_ch1 = 11;
				static constexpr uint32_t dma1_ch2 = 12;
				static constexpr uint32_t dma1_ch3 = 13;
				static constexpr uint32_t dma1_ch4 = 14;
				static constexpr uint32_t dma1_ch5 = 15;
				static constexpr uint32_t dma1_ch6 = 16;
				static constexpr uint32_t dma1_ch7 = 17;
			};
			
			struct Dma2
			{
				static constexpr uint32_t dma2_ch1 = 54;
				static constexpr uint32_t dma2_ch2 = 55;
				static constexpr uint32_t dma2_ch3 = 56;
				static constexpr uint32_t dma2_ch4 = 57;
				static constexpr uint32_t dma2_ch5 = 58;
				static constexpr uint32_t dma2_ch6 = 59;
				static constexpr uint32_t dma2_ch7 = 60;
			};
			
			struct Dmamux
			{
				static constexpr uint32_t irq = 61;
			};
			
			struct Exti
			{
				static constexpr uint32_t pvd_pvm_3 = 1;
				static constexpr uint32_t exti0 = 6;
				static constexpr uint32_t exti1 = 7;
				static constexpr uint32_t exti2 = 8;
				static constexpr uint32_t exti3 = 9;
				static constexpr uint32_t exti4 = 10;
				static constexpr uint32_t exti9_5 = 22;
				static constexpr uint32_t exti15_10 = 41;
				static constexpr uint32_t radio_irq_busy = 50;
			};
			
			struct Flash
			{
				static constexpr uint32_t irq = 4;
			};
			
			
			
			
			
			struct Hsem
			{
				static constexpr uint32_t irq = 47;
			};
			
			struct I2c1
			{
				static constexpr uint32_t i2c1_ev = 30;
				static constexpr uint32_t i2c1_er = 31;
			};
			
			struct I2c2
			{
				static constexpr uint32_t i2c2_ev = 32;
				static constexpr uint32_t i2c2_er = 33;
			};
			
			struct I2c3
			{
				static constexpr uint32_t i2c3_ev = 48;
				static constexpr uint32_t i2c3_er = 49;
			};
			
			struct Ipcc
			{
				static constexpr uint32_t ipcc_c1_rx_it = 45;
				static constexpr uint32_t ipcc_c1_tx_it = 46;
			};
			
			
			struct Lptim1
			{
				static constexpr uint32_t irq = 39;
			};
			
			struct Lptim2
			{
				static constexpr uint32_t irq = 40;
			};
			
			struct Lptim3
			{
				static constexpr uint32_t irq = 43;
			};
			
			struct Lpuart
			{
				static constexpr uint32_t irq = 38;
			};
			
			
			
			
			struct Pka
			{
				static constexpr uint32_t irq = 53;
			};
			
			struct Pwr
			{
				static constexpr uint32_t irq = 20;
			};
			
			struct Rcc
			{
				static constexpr uint32_t irq = 5;
			};
			
			struct Rng
			{
				static constexpr uint32_t irq = 52;
			};
			
			struct Rtc
			{
				static constexpr uint32_t tamp_rtcstamp_lsecss_rtcssru = 2;
				static constexpr uint32_t rtc_wkup = 3;
				static constexpr uint32_t rtc_alarm = 42;
			};
			
			
			
			struct Spi1
			{
				static constexpr uint32_t irq = 34;
			};
			
			struct Spi2
			{
				static constexpr uint32_t irq = 35;
			};
			
			struct Spi3
			{
				static constexpr uint32_t irq = 44;
			};
			
			
			
			
			
			struct Tim1
			{
				static constexpr uint32_t tim1_brk = 23;
				static constexpr uint32_t tim1_up = 24;
				static constexpr uint32_t tim1_trg_com = 25;
				static constexpr uint32_t tim1_cc = 26;
			};
			
			struct Tim2
			{
				static constexpr uint32_t irq = 27;
			};
			
			struct Tim16
			{
				static constexpr uint32_t irq = 28;
			};
			
			struct Tim17
			{
				static constexpr uint32_t irq = 29;
			};
			
			
			
			struct Usart1
			{
				static constexpr uint32_t irq = 36;
			};
			
			struct Usart2
			{
				static constexpr uint32_t irq = 37;
			};
			
			
			struct Wwdg
			{
				static constexpr uint32_t irq = 0;
			};
			
	};
} // end namespace processor
