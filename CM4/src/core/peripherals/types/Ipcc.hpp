

#pragma once
#include <cstdint>
#include "volund/hal/hardware/RegisterField.hpp"
#include "volund/hal/RegisterConfig.hpp"
#include "yggdrasil/interfaces/IVectorsManager.hpp"
#include "../values/IpccValues.hpp"

namespace core{
namespace peripherals{
	namespace ipcc {
	class C1cr{
		public:
			constexpr C1cr(volatile uint32_t * reg) : 
			m_register(*reg),
			rxoie(reg),
			txfie(reg)
			{}

			hardware::RegisterField<1,0,bool> rxoie;
			hardware::RegisterField<1,16,bool> txfie;
			
			volatile uint32_t& operator=(C1cr& self)
			{
				return m_register;
			}

			void operator=(const uint32_t value)
			{
				m_register = value;
			}

			volatile uint32_t* operator&()
			{
				return &m_register;
			}

			void operator=(const processor::values::ipcc::C1cr& t_value)
			{
				m_register = ((m_register & ~static_cast<uint32_t>(t_value.getMask())) | static_cast<uint32_t>(t_value.getValue()));
			}



		private:
			volatile uint32_t& m_register;
	}; // class C1cr
	class C1mr{
		public:
			constexpr C1mr(volatile uint32_t * reg) : 
			m_register(*reg),
			ch1om(reg),
			ch2om(reg),
			ch3om(reg),
			ch4om(reg),
			ch5om(reg),
			ch6om(reg),
			ch1fm(reg),
			ch2fm(reg),
			ch3fm(reg),
			ch4fm(reg),
			ch5fm(reg),
			ch6fm(reg)
			{}

			hardware::RegisterField<1,0,bool> ch1om;
			hardware::RegisterField<1,1,bool> ch2om;
			hardware::RegisterField<1,2,bool> ch3om;
			hardware::RegisterField<1,3,bool> ch4om;
			hardware::RegisterField<1,4,bool> ch5om;
			hardware::RegisterField<1,5,bool> ch6om;
			hardware::RegisterField<1,16,bool> ch1fm;
			hardware::RegisterField<1,17,bool> ch2fm;
			hardware::RegisterField<1,18,bool> ch3fm;
			hardware::RegisterField<1,19,bool> ch4fm;
			hardware::RegisterField<1,20,bool> ch5fm;
			hardware::RegisterField<1,21,bool> ch6fm;
			
			volatile uint32_t& operator=(C1mr& self)
			{
				return m_register;
			}

			void operator=(const uint32_t value)
			{
				m_register = value;
			}

			volatile uint32_t* operator&()
			{
				return &m_register;
			}

			void operator=(const processor::values::ipcc::C1mr& t_value)
			{
				m_register = ((m_register & ~static_cast<uint32_t>(t_value.getMask())) | static_cast<uint32_t>(t_value.getValue()));
			}



		private:
			volatile uint32_t& m_register;
	}; // class C1mr
	class C1scr{
		public:
			constexpr C1scr(volatile uint32_t * reg) : 
			m_register(*reg),
			ch1c(reg),
			ch2c(reg),
			ch3c(reg),
			ch4c(reg),
			ch5c(reg),
			ch6c(reg),
			ch1s(reg),
			ch2s(reg),
			ch3s(reg),
			ch4s(reg),
			ch5s(reg),
			ch6s(reg)
			{}

			hardware::RegisterField<1,0,bool> ch1c;
			hardware::RegisterField<1,1,bool> ch2c;
			hardware::RegisterField<1,2,bool> ch3c;
			hardware::RegisterField<1,3,bool> ch4c;
			hardware::RegisterField<1,4,bool> ch5c;
			hardware::RegisterField<1,5,bool> ch6c;
			hardware::RegisterField<1,16,bool> ch1s;
			hardware::RegisterField<1,17,bool> ch2s;
			hardware::RegisterField<1,18,bool> ch3s;
			hardware::RegisterField<1,19,bool> ch4s;
			hardware::RegisterField<1,20,bool> ch5s;
			hardware::RegisterField<1,21,bool> ch6s;
			
			volatile uint32_t& operator=(C1scr& self)
			{
				return m_register;
			}

			void operator=(const uint32_t value)
			{
				m_register = value;
			}

			volatile uint32_t* operator&()
			{
				return &m_register;
			}

			void operator=(const processor::values::ipcc::C1scr& t_value)
			{
				m_register = ((m_register & ~static_cast<uint32_t>(t_value.getMask())) | static_cast<uint32_t>(t_value.getValue()));
			}



		private:
			volatile uint32_t& m_register;
	}; // class C1scr
	class Ic1toc2sr{
		public:
			constexpr Ic1toc2sr(volatile uint32_t * reg) : 
			m_register(*reg),
			ch1f(reg),
			ch2f(reg),
			ch3f(reg),
			ch4f(reg),
			ch5f(reg),
			ch6f(reg)
			{}

			hardware::RegisterField<1,0,bool> ch1f;
			hardware::RegisterField<1,1,bool> ch2f;
			hardware::RegisterField<1,2,bool> ch3f;
			hardware::RegisterField<1,3,bool> ch4f;
			hardware::RegisterField<1,4,bool> ch5f;
			hardware::RegisterField<1,5,bool> ch6f;
			
			volatile uint32_t& operator=(Ic1toc2sr& self)
			{
				return m_register;
			}

			void operator=(const uint32_t value)
			{
				m_register = value;
			}

			volatile uint32_t* operator&()
			{
				return &m_register;
			}

			void operator=(const processor::values::ipcc::Ic1toc2sr& t_value)
			{
				m_register = ((m_register & ~static_cast<uint32_t>(t_value.getMask())) | static_cast<uint32_t>(t_value.getValue()));
			}



		private:
			volatile uint32_t& m_register;
	}; // class Ic1toc2sr
	class C2cr{
		public:
			constexpr C2cr(volatile uint32_t * reg) : 
			m_register(*reg),
			rxoie(reg),
			txfie(reg)
			{}

			hardware::RegisterField<1,0,bool> rxoie;
			hardware::RegisterField<1,16,bool> txfie;
			
			volatile uint32_t& operator=(C2cr& self)
			{
				return m_register;
			}

			void operator=(const uint32_t value)
			{
				m_register = value;
			}

			volatile uint32_t* operator&()
			{
				return &m_register;
			}

			void operator=(const processor::values::ipcc::C2cr& t_value)
			{
				m_register = ((m_register & ~static_cast<uint32_t>(t_value.getMask())) | static_cast<uint32_t>(t_value.getValue()));
			}



		private:
			volatile uint32_t& m_register;
	}; // class C2cr
	class C2mr{
		public:
			constexpr C2mr(volatile uint32_t * reg) : 
			m_register(*reg),
			ch1om(reg),
			ch2om(reg),
			ch3om(reg),
			ch4om(reg),
			ch5om(reg),
			ch6om(reg),
			ch1fm(reg),
			ch2fm(reg),
			ch3fm(reg),
			ch4fm(reg),
			ch5fm(reg),
			ch6fm(reg)
			{}

			hardware::RegisterField<1,0,bool> ch1om;
			hardware::RegisterField<1,1,bool> ch2om;
			hardware::RegisterField<1,2,bool> ch3om;
			hardware::RegisterField<1,3,bool> ch4om;
			hardware::RegisterField<1,4,bool> ch5om;
			hardware::RegisterField<1,5,bool> ch6om;
			hardware::RegisterField<1,16,bool> ch1fm;
			hardware::RegisterField<1,17,bool> ch2fm;
			hardware::RegisterField<1,18,bool> ch3fm;
			hardware::RegisterField<1,19,bool> ch4fm;
			hardware::RegisterField<1,20,bool> ch5fm;
			hardware::RegisterField<1,21,bool> ch6fm;
			
			volatile uint32_t& operator=(C2mr& self)
			{
				return m_register;
			}

			void operator=(const uint32_t value)
			{
				m_register = value;
			}

			volatile uint32_t* operator&()
			{
				return &m_register;
			}

			void operator=(const processor::values::ipcc::C2mr& t_value)
			{
				m_register = ((m_register & ~static_cast<uint32_t>(t_value.getMask())) | static_cast<uint32_t>(t_value.getValue()));
			}



		private:
			volatile uint32_t& m_register;
	}; // class C2mr
	class C2scr{
		public:
			constexpr C2scr(volatile uint32_t * reg) : 
			m_register(*reg),
			ch1c(reg),
			ch2c(reg),
			ch3c(reg),
			ch4c(reg),
			ch5c(reg),
			ch6c(reg),
			ch1s(reg),
			ch2s(reg),
			ch3s(reg),
			ch4s(reg),
			ch5s(reg),
			ch6s(reg)
			{}

			hardware::RegisterField<1,0,bool> ch1c;
			hardware::RegisterField<1,1,bool> ch2c;
			hardware::RegisterField<1,2,bool> ch3c;
			hardware::RegisterField<1,3,bool> ch4c;
			hardware::RegisterField<1,4,bool> ch5c;
			hardware::RegisterField<1,5,bool> ch6c;
			hardware::RegisterField<1,16,bool> ch1s;
			hardware::RegisterField<1,17,bool> ch2s;
			hardware::RegisterField<1,18,bool> ch3s;
			hardware::RegisterField<1,19,bool> ch4s;
			hardware::RegisterField<1,20,bool> ch5s;
			hardware::RegisterField<1,21,bool> ch6s;
			
			volatile uint32_t& operator=(C2scr& self)
			{
				return m_register;
			}

			void operator=(const uint32_t value)
			{
				m_register = value;
			}

			volatile uint32_t* operator&()
			{
				return &m_register;
			}

			void operator=(const processor::values::ipcc::C2scr& t_value)
			{
				m_register = ((m_register & ~static_cast<uint32_t>(t_value.getMask())) | static_cast<uint32_t>(t_value.getValue()));
			}



		private:
			volatile uint32_t& m_register;
	}; // class C2scr
	class C2toc1sr{
		public:
			constexpr C2toc1sr(volatile uint32_t * reg) : 
			m_register(*reg),
			ch1f(reg),
			ch2f(reg),
			ch3f(reg),
			ch4f(reg),
			ch5f(reg),
			ch6f(reg)
			{}

			hardware::RegisterField<1,0,bool> ch1f;
			hardware::RegisterField<1,1,bool> ch2f;
			hardware::RegisterField<1,2,bool> ch3f;
			hardware::RegisterField<1,3,bool> ch4f;
			hardware::RegisterField<1,4,bool> ch5f;
			hardware::RegisterField<1,5,bool> ch6f;
			
			volatile uint32_t& operator=(C2toc1sr& self)
			{
				return m_register;
			}

			void operator=(const uint32_t value)
			{
				m_register = value;
			}

			volatile uint32_t* operator&()
			{
				return &m_register;
			}

			void operator=(const processor::values::ipcc::C2toc1sr& t_value)
			{
				m_register = ((m_register & ~static_cast<uint32_t>(t_value.getMask())) | static_cast<uint32_t>(t_value.getValue()));
			}



		private:
			volatile uint32_t& m_register;
	}; // class C2toc1sr
	class Hwcfgr{
		public:
			constexpr Hwcfgr(volatile uint32_t * reg) : 
			m_register(*reg),
			channels(reg)
			{}

			hardware::RegisterField<8,0,uint8_t> channels;
			
			volatile uint32_t& operator=(Hwcfgr& self)
			{
				return m_register;
			}

			void operator=(const uint32_t value)
			{
				m_register = value;
			}

			volatile uint32_t* operator&()
			{
				return &m_register;
			}

			void operator=(const processor::values::ipcc::Hwcfgr& t_value)
			{
				m_register = ((m_register & ~static_cast<uint32_t>(t_value.getMask())) | static_cast<uint32_t>(t_value.getValue()));
			}



		private:
			volatile uint32_t& m_register;
	}; // class Hwcfgr
	class Verr{
		public:
			constexpr Verr(volatile uint32_t * reg) : 
			m_register(*reg),
			minrev(reg),
			majrev(reg)
			{}

			hardware::RegisterField<4,0,uint8_t> minrev;
			hardware::RegisterField<4,4,uint8_t> majrev;
			
			volatile uint32_t& operator=(Verr& self)
			{
				return m_register;
			}

			void operator=(const uint32_t value)
			{
				m_register = value;
			}

			volatile uint32_t* operator&()
			{
				return &m_register;
			}

			void operator=(const processor::values::ipcc::Verr& t_value)
			{
				m_register = ((m_register & ~static_cast<uint32_t>(t_value.getMask())) | static_cast<uint32_t>(t_value.getValue()));
			}



		private:
			volatile uint32_t& m_register;
	}; // class Verr
	class Ipidr{
		public:
			constexpr Ipidr(volatile uint32_t * reg) : 
			m_register(*reg),
			id(reg)
			{}

			hardware::RegisterField<32,0,uint32_t> id;
			
			volatile uint32_t& operator=(Ipidr& self)
			{
				return m_register;
			}

			void operator=(const uint32_t value)
			{
				m_register = value;
			}

			volatile uint32_t* operator&()
			{
				return &m_register;
			}

			void operator=(const processor::values::ipcc::Ipidr& t_value)
			{
				m_register = ((m_register & ~static_cast<uint32_t>(t_value.getMask())) | static_cast<uint32_t>(t_value.getValue()));
			}



		private:
			volatile uint32_t& m_register;
	}; // class Ipidr
	class Sidr{
		public:
			constexpr Sidr(volatile uint32_t * reg) : 
			m_register(*reg),
			sid(reg)
			{}

			hardware::RegisterField<32,0,uint32_t> sid;
			
			volatile uint32_t& operator=(Sidr& self)
			{
				return m_register;
			}

			void operator=(const uint32_t value)
			{
				m_register = value;
			}

			volatile uint32_t* operator&()
			{
				return &m_register;
			}

			void operator=(const processor::values::ipcc::Sidr& t_value)
			{
				m_register = ((m_register & ~static_cast<uint32_t>(t_value.getMask())) | static_cast<uint32_t>(t_value.getValue()));
			}



		private:
			volatile uint32_t& m_register;
	}; // class Sidr
} // namespace ipcc

	class Ipcc
	{
		public:
			constexpr Ipcc(volatile uint32_t * t_reg, const uint32_t t_c1_rx_it, const uint32_t t_c1_tx_it) :
			c1cr(t_reg+0),
			c1mr(t_reg+1),
			c1scr(t_reg+2),
			ic1toc2sr(t_reg+3),
			c2cr(t_reg+4),
			c2mr(t_reg+5),
			c2scr(t_reg+6),
			c2toc1sr(t_reg+7),
			hwcfgr(t_reg+252),
			verr(t_reg+253),
			ipidr(t_reg+254),
			sidr(t_reg+255),
			c1_rx_itIrq(t_c1_rx_it),
			c1_tx_itIrq(t_c1_tx_it)	
		{}




			ipcc::C1cr c1cr;
			ipcc::C1mr c1mr;
			ipcc::C1scr c1scr;
			ipcc::Ic1toc2sr ic1toc2sr;
			ipcc::C2cr c2cr;
			ipcc::C2mr c2mr;
			ipcc::C2scr c2scr;
			ipcc::C2toc1sr c2toc1sr;
			ipcc::Hwcfgr hwcfgr;
			ipcc::Verr verr;
			ipcc::Ipidr ipidr;
			ipcc::Sidr sidr;

			core::interfaces::Irq c1_rx_itIrq;
			core::interfaces::Irq c1_tx_itIrq;

	}; // class Ipcc
}// namespace peripherals
} // namespace processor
