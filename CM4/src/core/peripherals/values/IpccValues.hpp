

#pragma once
#include <cstdint>
#include "volund/hal/hardware/RegisterField.hpp"
#include "volund/hal/RegisterConfig.hpp"
#include "volund/hal/RegisterConfigField.hpp"

namespace core{
namespace values{
	namespace ipcc{
	class C1cr : public hal::RegisterConfig
	{
		public:
			constexpr C1cr() : RegisterConfig(),
						rxoie(m_value, m_mask),
			txfie(m_value, m_mask)
			{}

			hal::RegisterConfigField<uint32_t,1,0,bool> rxoie;
			hal::RegisterConfigField<uint32_t,1,16,bool> txfie;
	}; // class C1cr
	class C1mr : public hal::RegisterConfig
	{
		public:
			constexpr C1mr() : RegisterConfig(),
						ch1om(m_value, m_mask),
			ch2om(m_value, m_mask),
			ch3om(m_value, m_mask),
			ch4om(m_value, m_mask),
			ch5om(m_value, m_mask),
			ch6om(m_value, m_mask),
			ch1fm(m_value, m_mask),
			ch2fm(m_value, m_mask),
			ch3fm(m_value, m_mask),
			ch4fm(m_value, m_mask),
			ch5fm(m_value, m_mask),
			ch6fm(m_value, m_mask)
			{}

			hal::RegisterConfigField<uint32_t,1,0,bool> ch1om;
			hal::RegisterConfigField<uint32_t,1,1,bool> ch2om;
			hal::RegisterConfigField<uint32_t,1,2,bool> ch3om;
			hal::RegisterConfigField<uint32_t,1,3,bool> ch4om;
			hal::RegisterConfigField<uint32_t,1,4,bool> ch5om;
			hal::RegisterConfigField<uint32_t,1,5,bool> ch6om;
			hal::RegisterConfigField<uint32_t,1,16,bool> ch1fm;
			hal::RegisterConfigField<uint32_t,1,17,bool> ch2fm;
			hal::RegisterConfigField<uint32_t,1,18,bool> ch3fm;
			hal::RegisterConfigField<uint32_t,1,19,bool> ch4fm;
			hal::RegisterConfigField<uint32_t,1,20,bool> ch5fm;
			hal::RegisterConfigField<uint32_t,1,21,bool> ch6fm;
	}; // class C1mr
	class C1scr : public hal::RegisterConfig
	{
		public:
			constexpr C1scr() : RegisterConfig(),
						ch1c(m_value, m_mask),
			ch2c(m_value, m_mask),
			ch3c(m_value, m_mask),
			ch4c(m_value, m_mask),
			ch5c(m_value, m_mask),
			ch6c(m_value, m_mask),
			ch1s(m_value, m_mask),
			ch2s(m_value, m_mask),
			ch3s(m_value, m_mask),
			ch4s(m_value, m_mask),
			ch5s(m_value, m_mask),
			ch6s(m_value, m_mask)
			{}

			hal::RegisterConfigField<uint32_t,1,0,bool> ch1c;
			hal::RegisterConfigField<uint32_t,1,1,bool> ch2c;
			hal::RegisterConfigField<uint32_t,1,2,bool> ch3c;
			hal::RegisterConfigField<uint32_t,1,3,bool> ch4c;
			hal::RegisterConfigField<uint32_t,1,4,bool> ch5c;
			hal::RegisterConfigField<uint32_t,1,5,bool> ch6c;
			hal::RegisterConfigField<uint32_t,1,16,bool> ch1s;
			hal::RegisterConfigField<uint32_t,1,17,bool> ch2s;
			hal::RegisterConfigField<uint32_t,1,18,bool> ch3s;
			hal::RegisterConfigField<uint32_t,1,19,bool> ch4s;
			hal::RegisterConfigField<uint32_t,1,20,bool> ch5s;
			hal::RegisterConfigField<uint32_t,1,21,bool> ch6s;
	}; // class C1scr
	class Ic1toc2sr : public hal::RegisterConfig
	{
		public:
			constexpr Ic1toc2sr() : RegisterConfig(),
						ch1f(m_value, m_mask),
			ch2f(m_value, m_mask),
			ch3f(m_value, m_mask),
			ch4f(m_value, m_mask),
			ch5f(m_value, m_mask),
			ch6f(m_value, m_mask)
			{}

			hal::RegisterConfigField<uint32_t,1,0,bool> ch1f;
			hal::RegisterConfigField<uint32_t,1,1,bool> ch2f;
			hal::RegisterConfigField<uint32_t,1,2,bool> ch3f;
			hal::RegisterConfigField<uint32_t,1,3,bool> ch4f;
			hal::RegisterConfigField<uint32_t,1,4,bool> ch5f;
			hal::RegisterConfigField<uint32_t,1,5,bool> ch6f;
	}; // class Ic1toc2sr
	class C2cr : public hal::RegisterConfig
	{
		public:
			constexpr C2cr() : RegisterConfig(),
						rxoie(m_value, m_mask),
			txfie(m_value, m_mask)
			{}

			hal::RegisterConfigField<uint32_t,1,0,bool> rxoie;
			hal::RegisterConfigField<uint32_t,1,16,bool> txfie;
	}; // class C2cr
	class C2mr : public hal::RegisterConfig
	{
		public:
			constexpr C2mr() : RegisterConfig(),
						ch1om(m_value, m_mask),
			ch2om(m_value, m_mask),
			ch3om(m_value, m_mask),
			ch4om(m_value, m_mask),
			ch5om(m_value, m_mask),
			ch6om(m_value, m_mask),
			ch1fm(m_value, m_mask),
			ch2fm(m_value, m_mask),
			ch3fm(m_value, m_mask),
			ch4fm(m_value, m_mask),
			ch5fm(m_value, m_mask),
			ch6fm(m_value, m_mask)
			{}

			hal::RegisterConfigField<uint32_t,1,0,bool> ch1om;
			hal::RegisterConfigField<uint32_t,1,1,bool> ch2om;
			hal::RegisterConfigField<uint32_t,1,2,bool> ch3om;
			hal::RegisterConfigField<uint32_t,1,3,bool> ch4om;
			hal::RegisterConfigField<uint32_t,1,4,bool> ch5om;
			hal::RegisterConfigField<uint32_t,1,5,bool> ch6om;
			hal::RegisterConfigField<uint32_t,1,16,bool> ch1fm;
			hal::RegisterConfigField<uint32_t,1,17,bool> ch2fm;
			hal::RegisterConfigField<uint32_t,1,18,bool> ch3fm;
			hal::RegisterConfigField<uint32_t,1,19,bool> ch4fm;
			hal::RegisterConfigField<uint32_t,1,20,bool> ch5fm;
			hal::RegisterConfigField<uint32_t,1,21,bool> ch6fm;
	}; // class C2mr
	class C2scr : public hal::RegisterConfig
	{
		public:
			constexpr C2scr() : RegisterConfig(),
						ch1c(m_value, m_mask),
			ch2c(m_value, m_mask),
			ch3c(m_value, m_mask),
			ch4c(m_value, m_mask),
			ch5c(m_value, m_mask),
			ch6c(m_value, m_mask),
			ch1s(m_value, m_mask),
			ch2s(m_value, m_mask),
			ch3s(m_value, m_mask),
			ch4s(m_value, m_mask),
			ch5s(m_value, m_mask),
			ch6s(m_value, m_mask)
			{}

			hal::RegisterConfigField<uint32_t,1,0,bool> ch1c;
			hal::RegisterConfigField<uint32_t,1,1,bool> ch2c;
			hal::RegisterConfigField<uint32_t,1,2,bool> ch3c;
			hal::RegisterConfigField<uint32_t,1,3,bool> ch4c;
			hal::RegisterConfigField<uint32_t,1,4,bool> ch5c;
			hal::RegisterConfigField<uint32_t,1,5,bool> ch6c;
			hal::RegisterConfigField<uint32_t,1,16,bool> ch1s;
			hal::RegisterConfigField<uint32_t,1,17,bool> ch2s;
			hal::RegisterConfigField<uint32_t,1,18,bool> ch3s;
			hal::RegisterConfigField<uint32_t,1,19,bool> ch4s;
			hal::RegisterConfigField<uint32_t,1,20,bool> ch5s;
			hal::RegisterConfigField<uint32_t,1,21,bool> ch6s;
	}; // class C2scr
	class C2toc1sr : public hal::RegisterConfig
	{
		public:
			constexpr C2toc1sr() : RegisterConfig(),
						ch1f(m_value, m_mask),
			ch2f(m_value, m_mask),
			ch3f(m_value, m_mask),
			ch4f(m_value, m_mask),
			ch5f(m_value, m_mask),
			ch6f(m_value, m_mask)
			{}

			hal::RegisterConfigField<uint32_t,1,0,bool> ch1f;
			hal::RegisterConfigField<uint32_t,1,1,bool> ch2f;
			hal::RegisterConfigField<uint32_t,1,2,bool> ch3f;
			hal::RegisterConfigField<uint32_t,1,3,bool> ch4f;
			hal::RegisterConfigField<uint32_t,1,4,bool> ch5f;
			hal::RegisterConfigField<uint32_t,1,5,bool> ch6f;
	}; // class C2toc1sr
	class Hwcfgr : public hal::RegisterConfig
	{
		public:
			constexpr Hwcfgr() : RegisterConfig(),
						channels(m_value, m_mask)
			{}

			hal::RegisterConfigField<uint32_t,8,0,uint8_t> channels;
	}; // class Hwcfgr
	class Verr : public hal::RegisterConfig
	{
		public:
			constexpr Verr() : RegisterConfig(),
						minrev(m_value, m_mask),
			majrev(m_value, m_mask)
			{}

			hal::RegisterConfigField<uint32_t,4,0,uint8_t> minrev;
			hal::RegisterConfigField<uint32_t,4,4,uint8_t> majrev;
	}; // class Verr
	class Ipidr : public hal::RegisterConfig
	{
		public:
			constexpr Ipidr() : RegisterConfig(),
						id(m_value, m_mask)
			{}

			hal::RegisterConfigField<uint32_t,32,0,uint32_t> id;
	}; // class Ipidr
	class Sidr : public hal::RegisterConfig
	{
		public:
			constexpr Sidr() : RegisterConfig(),
						sid(m_value, m_mask)
			{}

			hal::RegisterConfigField<uint32_t,32,0,uint32_t> sid;
	}; // class Sidr
} // namespace ipcc
} // namespace values
} // namespace processor
