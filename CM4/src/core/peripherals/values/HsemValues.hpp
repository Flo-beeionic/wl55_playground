

#pragma once
#include <cstdint>
#include "volund/hal/hardware/RegisterField.hpp"
#include "volund/hal/RegisterConfig.hpp"
#include "volund/hal/RegisterConfigField.hpp"

namespace core{
namespace values{
	namespace hsem{
	class Hsem_r0 : public hal::RegisterConfig
	{
		public:
			constexpr Hsem_r0() : RegisterConfig(),
						procid(m_value, m_mask),
			coreid(m_value, m_mask),
			lock(m_value, m_mask)
			{}

			hal::RegisterConfigField<uint32_t,8,0,uint8_t> procid;
			hal::RegisterConfigField<uint32_t,4,8,uint8_t> coreid;
			hal::RegisterConfigField<uint32_t,1,31,bool> lock;
	}; // class Hsem_r0
	class Hsem_r1 : public hal::RegisterConfig
	{
		public:
			constexpr Hsem_r1() : RegisterConfig(),
						procid(m_value, m_mask),
			coreid(m_value, m_mask),
			lock(m_value, m_mask)
			{}

			hal::RegisterConfigField<uint32_t,8,0,uint8_t> procid;
			hal::RegisterConfigField<uint32_t,4,8,uint8_t> coreid;
			hal::RegisterConfigField<uint32_t,1,31,bool> lock;
	}; // class Hsem_r1
	class Hsem_r2 : public hal::RegisterConfig
	{
		public:
			constexpr Hsem_r2() : RegisterConfig(),
						procid(m_value, m_mask),
			coreid(m_value, m_mask),
			lock(m_value, m_mask)
			{}

			hal::RegisterConfigField<uint32_t,8,0,uint8_t> procid;
			hal::RegisterConfigField<uint32_t,4,8,uint8_t> coreid;
			hal::RegisterConfigField<uint32_t,1,31,bool> lock;
	}; // class Hsem_r2
	class Hsem_r3 : public hal::RegisterConfig
	{
		public:
			constexpr Hsem_r3() : RegisterConfig(),
						procid(m_value, m_mask),
			coreid(m_value, m_mask),
			lock(m_value, m_mask)
			{}

			hal::RegisterConfigField<uint32_t,8,0,uint8_t> procid;
			hal::RegisterConfigField<uint32_t,4,8,uint8_t> coreid;
			hal::RegisterConfigField<uint32_t,1,31,bool> lock;
	}; // class Hsem_r3
	class Hsem_r4 : public hal::RegisterConfig
	{
		public:
			constexpr Hsem_r4() : RegisterConfig(),
						procid(m_value, m_mask),
			coreid(m_value, m_mask),
			lock(m_value, m_mask)
			{}

			hal::RegisterConfigField<uint32_t,8,0,uint8_t> procid;
			hal::RegisterConfigField<uint32_t,4,8,uint8_t> coreid;
			hal::RegisterConfigField<uint32_t,1,31,bool> lock;
	}; // class Hsem_r4
	class Hsem_r5 : public hal::RegisterConfig
	{
		public:
			constexpr Hsem_r5() : RegisterConfig(),
						procid(m_value, m_mask),
			coreid(m_value, m_mask),
			lock(m_value, m_mask)
			{}

			hal::RegisterConfigField<uint32_t,8,0,uint8_t> procid;
			hal::RegisterConfigField<uint32_t,4,8,uint8_t> coreid;
			hal::RegisterConfigField<uint32_t,1,31,bool> lock;
	}; // class Hsem_r5
	class Hsem_r6 : public hal::RegisterConfig
	{
		public:
			constexpr Hsem_r6() : RegisterConfig(),
						procid(m_value, m_mask),
			coreid(m_value, m_mask),
			lock(m_value, m_mask)
			{}

			hal::RegisterConfigField<uint32_t,8,0,uint8_t> procid;
			hal::RegisterConfigField<uint32_t,4,8,uint8_t> coreid;
			hal::RegisterConfigField<uint32_t,1,31,bool> lock;
	}; // class Hsem_r6
	class Hsem_r7 : public hal::RegisterConfig
	{
		public:
			constexpr Hsem_r7() : RegisterConfig(),
						procid(m_value, m_mask),
			coreid(m_value, m_mask),
			lock(m_value, m_mask)
			{}

			hal::RegisterConfigField<uint32_t,8,0,uint8_t> procid;
			hal::RegisterConfigField<uint32_t,4,8,uint8_t> coreid;
			hal::RegisterConfigField<uint32_t,1,31,bool> lock;
	}; // class Hsem_r7
	class Hsem_r8 : public hal::RegisterConfig
	{
		public:
			constexpr Hsem_r8() : RegisterConfig(),
						procid(m_value, m_mask),
			coreid(m_value, m_mask),
			lock(m_value, m_mask)
			{}

			hal::RegisterConfigField<uint32_t,8,0,uint8_t> procid;
			hal::RegisterConfigField<uint32_t,4,8,uint8_t> coreid;
			hal::RegisterConfigField<uint32_t,1,31,bool> lock;
	}; // class Hsem_r8
	class Hsem_r9 : public hal::RegisterConfig
	{
		public:
			constexpr Hsem_r9() : RegisterConfig(),
						procid(m_value, m_mask),
			coreid(m_value, m_mask),
			lock(m_value, m_mask)
			{}

			hal::RegisterConfigField<uint32_t,8,0,uint8_t> procid;
			hal::RegisterConfigField<uint32_t,4,8,uint8_t> coreid;
			hal::RegisterConfigField<uint32_t,1,31,bool> lock;
	}; // class Hsem_r9
	class Hsem_r10 : public hal::RegisterConfig
	{
		public:
			constexpr Hsem_r10() : RegisterConfig(),
						procid(m_value, m_mask),
			coreid(m_value, m_mask),
			lock(m_value, m_mask)
			{}

			hal::RegisterConfigField<uint32_t,8,0,uint8_t> procid;
			hal::RegisterConfigField<uint32_t,4,8,uint8_t> coreid;
			hal::RegisterConfigField<uint32_t,1,31,bool> lock;
	}; // class Hsem_r10
	class Hsem_r11 : public hal::RegisterConfig
	{
		public:
			constexpr Hsem_r11() : RegisterConfig(),
						procid(m_value, m_mask),
			coreid(m_value, m_mask),
			lock(m_value, m_mask)
			{}

			hal::RegisterConfigField<uint32_t,8,0,uint8_t> procid;
			hal::RegisterConfigField<uint32_t,4,8,uint8_t> coreid;
			hal::RegisterConfigField<uint32_t,1,31,bool> lock;
	}; // class Hsem_r11
	class Hsem_r12 : public hal::RegisterConfig
	{
		public:
			constexpr Hsem_r12() : RegisterConfig(),
						procid(m_value, m_mask),
			coreid(m_value, m_mask),
			lock(m_value, m_mask)
			{}

			hal::RegisterConfigField<uint32_t,8,0,uint8_t> procid;
			hal::RegisterConfigField<uint32_t,4,8,uint8_t> coreid;
			hal::RegisterConfigField<uint32_t,1,31,bool> lock;
	}; // class Hsem_r12
	class Hsem_r13 : public hal::RegisterConfig
	{
		public:
			constexpr Hsem_r13() : RegisterConfig(),
						procid(m_value, m_mask),
			coreid(m_value, m_mask),
			lock(m_value, m_mask)
			{}

			hal::RegisterConfigField<uint32_t,8,0,uint8_t> procid;
			hal::RegisterConfigField<uint32_t,4,8,uint8_t> coreid;
			hal::RegisterConfigField<uint32_t,1,31,bool> lock;
	}; // class Hsem_r13
	class Hsem_r14 : public hal::RegisterConfig
	{
		public:
			constexpr Hsem_r14() : RegisterConfig(),
						procid(m_value, m_mask),
			coreid(m_value, m_mask),
			lock(m_value, m_mask)
			{}

			hal::RegisterConfigField<uint32_t,8,0,uint8_t> procid;
			hal::RegisterConfigField<uint32_t,4,8,uint8_t> coreid;
			hal::RegisterConfigField<uint32_t,1,31,bool> lock;
	}; // class Hsem_r14
	class Hsem_r15 : public hal::RegisterConfig
	{
		public:
			constexpr Hsem_r15() : RegisterConfig(),
						procid(m_value, m_mask),
			coreid(m_value, m_mask),
			lock(m_value, m_mask)
			{}

			hal::RegisterConfigField<uint32_t,8,0,uint8_t> procid;
			hal::RegisterConfigField<uint32_t,4,8,uint8_t> coreid;
			hal::RegisterConfigField<uint32_t,1,31,bool> lock;
	}; // class Hsem_r15
	class Hsem_rlr0 : public hal::RegisterConfig
	{
		public:
			constexpr Hsem_rlr0() : RegisterConfig(),
						procid(m_value, m_mask),
			coreid(m_value, m_mask),
			lock(m_value, m_mask)
			{}

			hal::RegisterConfigField<uint32_t,8,0,uint8_t> procid;
			hal::RegisterConfigField<uint32_t,4,8,uint8_t> coreid;
			hal::RegisterConfigField<uint32_t,1,31,bool> lock;
	}; // class Hsem_rlr0
	class Hsem_rlr1 : public hal::RegisterConfig
	{
		public:
			constexpr Hsem_rlr1() : RegisterConfig(),
						procid(m_value, m_mask),
			coreid(m_value, m_mask),
			lock(m_value, m_mask)
			{}

			hal::RegisterConfigField<uint32_t,8,0,uint8_t> procid;
			hal::RegisterConfigField<uint32_t,4,8,uint8_t> coreid;
			hal::RegisterConfigField<uint32_t,1,31,bool> lock;
	}; // class Hsem_rlr1
	class Hsem_rlr2 : public hal::RegisterConfig
	{
		public:
			constexpr Hsem_rlr2() : RegisterConfig(),
						procid(m_value, m_mask),
			coreid(m_value, m_mask),
			lock(m_value, m_mask)
			{}

			hal::RegisterConfigField<uint32_t,8,0,uint8_t> procid;
			hal::RegisterConfigField<uint32_t,4,8,uint8_t> coreid;
			hal::RegisterConfigField<uint32_t,1,31,bool> lock;
	}; // class Hsem_rlr2
	class Hsem_rlr3 : public hal::RegisterConfig
	{
		public:
			constexpr Hsem_rlr3() : RegisterConfig(),
						procid(m_value, m_mask),
			coreid(m_value, m_mask),
			lock(m_value, m_mask)
			{}

			hal::RegisterConfigField<uint32_t,8,0,uint8_t> procid;
			hal::RegisterConfigField<uint32_t,4,8,uint8_t> coreid;
			hal::RegisterConfigField<uint32_t,1,31,bool> lock;
	}; // class Hsem_rlr3
	class Hsem_rlr4 : public hal::RegisterConfig
	{
		public:
			constexpr Hsem_rlr4() : RegisterConfig(),
						procid(m_value, m_mask),
			coreid(m_value, m_mask),
			lock(m_value, m_mask)
			{}

			hal::RegisterConfigField<uint32_t,8,0,uint8_t> procid;
			hal::RegisterConfigField<uint32_t,4,8,uint8_t> coreid;
			hal::RegisterConfigField<uint32_t,1,31,bool> lock;
	}; // class Hsem_rlr4
	class Hsem_rlr5 : public hal::RegisterConfig
	{
		public:
			constexpr Hsem_rlr5() : RegisterConfig(),
						procid(m_value, m_mask),
			coreid(m_value, m_mask),
			lock(m_value, m_mask)
			{}

			hal::RegisterConfigField<uint32_t,8,0,uint8_t> procid;
			hal::RegisterConfigField<uint32_t,4,8,uint8_t> coreid;
			hal::RegisterConfigField<uint32_t,1,31,bool> lock;
	}; // class Hsem_rlr5
	class Hsem_rlr6 : public hal::RegisterConfig
	{
		public:
			constexpr Hsem_rlr6() : RegisterConfig(),
						procid(m_value, m_mask),
			coreid(m_value, m_mask),
			lock(m_value, m_mask)
			{}

			hal::RegisterConfigField<uint32_t,8,0,uint8_t> procid;
			hal::RegisterConfigField<uint32_t,4,8,uint8_t> coreid;
			hal::RegisterConfigField<uint32_t,1,31,bool> lock;
	}; // class Hsem_rlr6
	class Hsem_rlr7 : public hal::RegisterConfig
	{
		public:
			constexpr Hsem_rlr7() : RegisterConfig(),
						procid(m_value, m_mask),
			coreid(m_value, m_mask),
			lock(m_value, m_mask)
			{}

			hal::RegisterConfigField<uint32_t,8,0,uint8_t> procid;
			hal::RegisterConfigField<uint32_t,4,8,uint8_t> coreid;
			hal::RegisterConfigField<uint32_t,1,31,bool> lock;
	}; // class Hsem_rlr7
	class Hsem_rlr8 : public hal::RegisterConfig
	{
		public:
			constexpr Hsem_rlr8() : RegisterConfig(),
						procid(m_value, m_mask),
			coreid(m_value, m_mask),
			lock(m_value, m_mask)
			{}

			hal::RegisterConfigField<uint32_t,8,0,uint8_t> procid;
			hal::RegisterConfigField<uint32_t,4,8,uint8_t> coreid;
			hal::RegisterConfigField<uint32_t,1,31,bool> lock;
	}; // class Hsem_rlr8
	class Hsem_rlr9 : public hal::RegisterConfig
	{
		public:
			constexpr Hsem_rlr9() : RegisterConfig(),
						procid(m_value, m_mask),
			coreid(m_value, m_mask),
			lock(m_value, m_mask)
			{}

			hal::RegisterConfigField<uint32_t,8,0,uint8_t> procid;
			hal::RegisterConfigField<uint32_t,4,8,uint8_t> coreid;
			hal::RegisterConfigField<uint32_t,1,31,bool> lock;
	}; // class Hsem_rlr9
	class Hsem_rlr10 : public hal::RegisterConfig
	{
		public:
			constexpr Hsem_rlr10() : RegisterConfig(),
						procid(m_value, m_mask),
			coreid(m_value, m_mask),
			lock(m_value, m_mask)
			{}

			hal::RegisterConfigField<uint32_t,8,0,uint8_t> procid;
			hal::RegisterConfigField<uint32_t,4,8,uint8_t> coreid;
			hal::RegisterConfigField<uint32_t,1,31,bool> lock;
	}; // class Hsem_rlr10
	class Hsem_rlr11 : public hal::RegisterConfig
	{
		public:
			constexpr Hsem_rlr11() : RegisterConfig(),
						procid(m_value, m_mask),
			coreid(m_value, m_mask),
			lock(m_value, m_mask)
			{}

			hal::RegisterConfigField<uint32_t,8,0,uint8_t> procid;
			hal::RegisterConfigField<uint32_t,4,8,uint8_t> coreid;
			hal::RegisterConfigField<uint32_t,1,31,bool> lock;
	}; // class Hsem_rlr11
	class Hsem_rlr12 : public hal::RegisterConfig
	{
		public:
			constexpr Hsem_rlr12() : RegisterConfig(),
						procid(m_value, m_mask),
			coreid(m_value, m_mask),
			lock(m_value, m_mask)
			{}

			hal::RegisterConfigField<uint32_t,8,0,uint8_t> procid;
			hal::RegisterConfigField<uint32_t,4,8,uint8_t> coreid;
			hal::RegisterConfigField<uint32_t,1,31,bool> lock;
	}; // class Hsem_rlr12
	class Hsem_rlr13 : public hal::RegisterConfig
	{
		public:
			constexpr Hsem_rlr13() : RegisterConfig(),
						procid(m_value, m_mask),
			coreid(m_value, m_mask),
			lock(m_value, m_mask)
			{}

			hal::RegisterConfigField<uint32_t,8,0,uint8_t> procid;
			hal::RegisterConfigField<uint32_t,4,8,uint8_t> coreid;
			hal::RegisterConfigField<uint32_t,1,31,bool> lock;
	}; // class Hsem_rlr13
	class Hsem_rlr14 : public hal::RegisterConfig
	{
		public:
			constexpr Hsem_rlr14() : RegisterConfig(),
						procid(m_value, m_mask),
			coreid(m_value, m_mask),
			lock(m_value, m_mask)
			{}

			hal::RegisterConfigField<uint32_t,8,0,uint8_t> procid;
			hal::RegisterConfigField<uint32_t,4,8,uint8_t> coreid;
			hal::RegisterConfigField<uint32_t,1,31,bool> lock;
	}; // class Hsem_rlr14
	class Hsem_rlr15 : public hal::RegisterConfig
	{
		public:
			constexpr Hsem_rlr15() : RegisterConfig(),
						procid(m_value, m_mask),
			coreid(m_value, m_mask),
			lock(m_value, m_mask)
			{}

			hal::RegisterConfigField<uint32_t,8,0,uint8_t> procid;
			hal::RegisterConfigField<uint32_t,4,8,uint8_t> coreid;
			hal::RegisterConfigField<uint32_t,1,31,bool> lock;
	}; // class Hsem_rlr15
	class Hsem_c1ier : public hal::RegisterConfig
	{
		public:
			constexpr Hsem_c1ier() : RegisterConfig(),
						ise0(m_value, m_mask),
			ise1(m_value, m_mask),
			ise2(m_value, m_mask),
			ise3(m_value, m_mask),
			ise4(m_value, m_mask),
			ise5(m_value, m_mask),
			ise6(m_value, m_mask),
			ise7(m_value, m_mask),
			ise8(m_value, m_mask),
			ise9(m_value, m_mask),
			ise10(m_value, m_mask),
			ise11(m_value, m_mask),
			ise12(m_value, m_mask),
			ise13(m_value, m_mask),
			ise14(m_value, m_mask),
			ise15(m_value, m_mask)
			{}

			hal::RegisterConfigField<uint32_t,1,0,bool> ise0;
			hal::RegisterConfigField<uint32_t,1,1,bool> ise1;
			hal::RegisterConfigField<uint32_t,1,2,bool> ise2;
			hal::RegisterConfigField<uint32_t,1,3,bool> ise3;
			hal::RegisterConfigField<uint32_t,1,4,bool> ise4;
			hal::RegisterConfigField<uint32_t,1,5,bool> ise5;
			hal::RegisterConfigField<uint32_t,1,6,bool> ise6;
			hal::RegisterConfigField<uint32_t,1,7,bool> ise7;
			hal::RegisterConfigField<uint32_t,1,8,bool> ise8;
			hal::RegisterConfigField<uint32_t,1,9,bool> ise9;
			hal::RegisterConfigField<uint32_t,1,10,bool> ise10;
			hal::RegisterConfigField<uint32_t,1,11,bool> ise11;
			hal::RegisterConfigField<uint32_t,1,12,bool> ise12;
			hal::RegisterConfigField<uint32_t,1,13,bool> ise13;
			hal::RegisterConfigField<uint32_t,1,14,bool> ise14;
			hal::RegisterConfigField<uint32_t,1,15,bool> ise15;
	}; // class Hsem_c1ier
	class Hsem_c1icr : public hal::RegisterConfig
	{
		public:
			constexpr Hsem_c1icr() : RegisterConfig(),
						isc0(m_value, m_mask),
			isc1(m_value, m_mask),
			isc2(m_value, m_mask),
			isc3(m_value, m_mask),
			isc4(m_value, m_mask),
			isc5(m_value, m_mask),
			isc6(m_value, m_mask),
			isc7(m_value, m_mask),
			isc8(m_value, m_mask),
			isc9(m_value, m_mask),
			isc10(m_value, m_mask),
			isc11(m_value, m_mask),
			isc12(m_value, m_mask),
			isc13(m_value, m_mask),
			isc14(m_value, m_mask),
			isc15(m_value, m_mask)
			{}

			hal::RegisterConfigField<uint32_t,1,0,bool> isc0;
			hal::RegisterConfigField<uint32_t,1,1,bool> isc1;
			hal::RegisterConfigField<uint32_t,1,2,bool> isc2;
			hal::RegisterConfigField<uint32_t,1,3,bool> isc3;
			hal::RegisterConfigField<uint32_t,1,4,bool> isc4;
			hal::RegisterConfigField<uint32_t,1,5,bool> isc5;
			hal::RegisterConfigField<uint32_t,1,6,bool> isc6;
			hal::RegisterConfigField<uint32_t,1,7,bool> isc7;
			hal::RegisterConfigField<uint32_t,1,8,bool> isc8;
			hal::RegisterConfigField<uint32_t,1,9,bool> isc9;
			hal::RegisterConfigField<uint32_t,1,10,bool> isc10;
			hal::RegisterConfigField<uint32_t,1,11,bool> isc11;
			hal::RegisterConfigField<uint32_t,1,12,bool> isc12;
			hal::RegisterConfigField<uint32_t,1,13,bool> isc13;
			hal::RegisterConfigField<uint32_t,1,14,bool> isc14;
			hal::RegisterConfigField<uint32_t,1,15,bool> isc15;
	}; // class Hsem_c1icr
	class Hsem_c1isr : public hal::RegisterConfig
	{
		public:
			constexpr Hsem_c1isr() : RegisterConfig(),
						isf0(m_value, m_mask),
			isf1(m_value, m_mask),
			isf2(m_value, m_mask),
			isf3(m_value, m_mask),
			isf4(m_value, m_mask),
			isf5(m_value, m_mask),
			isf6(m_value, m_mask),
			isf7(m_value, m_mask),
			isf8(m_value, m_mask),
			isf9(m_value, m_mask),
			isf10(m_value, m_mask),
			isf11(m_value, m_mask),
			isf12(m_value, m_mask),
			isf13(m_value, m_mask),
			isf14(m_value, m_mask),
			isf15(m_value, m_mask)
			{}

			hal::RegisterConfigField<uint32_t,1,0,bool> isf0;
			hal::RegisterConfigField<uint32_t,1,1,bool> isf1;
			hal::RegisterConfigField<uint32_t,1,2,bool> isf2;
			hal::RegisterConfigField<uint32_t,1,3,bool> isf3;
			hal::RegisterConfigField<uint32_t,1,4,bool> isf4;
			hal::RegisterConfigField<uint32_t,1,5,bool> isf5;
			hal::RegisterConfigField<uint32_t,1,6,bool> isf6;
			hal::RegisterConfigField<uint32_t,1,7,bool> isf7;
			hal::RegisterConfigField<uint32_t,1,8,bool> isf8;
			hal::RegisterConfigField<uint32_t,1,9,bool> isf9;
			hal::RegisterConfigField<uint32_t,1,10,bool> isf10;
			hal::RegisterConfigField<uint32_t,1,11,bool> isf11;
			hal::RegisterConfigField<uint32_t,1,12,bool> isf12;
			hal::RegisterConfigField<uint32_t,1,13,bool> isf13;
			hal::RegisterConfigField<uint32_t,1,14,bool> isf14;
			hal::RegisterConfigField<uint32_t,1,15,bool> isf15;
	}; // class Hsem_c1isr
	class Hsem_c1misr : public hal::RegisterConfig
	{
		public:
			constexpr Hsem_c1misr() : RegisterConfig(),
						misf0(m_value, m_mask),
			misf1(m_value, m_mask),
			misf2(m_value, m_mask),
			misf3(m_value, m_mask),
			misf4(m_value, m_mask),
			misf5(m_value, m_mask),
			misf6(m_value, m_mask),
			misf7(m_value, m_mask),
			misf8(m_value, m_mask),
			misf9(m_value, m_mask),
			misf10(m_value, m_mask),
			misf11(m_value, m_mask),
			misf12(m_value, m_mask),
			misf13(m_value, m_mask),
			misf14(m_value, m_mask),
			misf15(m_value, m_mask)
			{}

			hal::RegisterConfigField<uint32_t,1,0,bool> misf0;
			hal::RegisterConfigField<uint32_t,1,1,bool> misf1;
			hal::RegisterConfigField<uint32_t,1,2,bool> misf2;
			hal::RegisterConfigField<uint32_t,1,3,bool> misf3;
			hal::RegisterConfigField<uint32_t,1,4,bool> misf4;
			hal::RegisterConfigField<uint32_t,1,5,bool> misf5;
			hal::RegisterConfigField<uint32_t,1,6,bool> misf6;
			hal::RegisterConfigField<uint32_t,1,7,bool> misf7;
			hal::RegisterConfigField<uint32_t,1,8,bool> misf8;
			hal::RegisterConfigField<uint32_t,1,9,bool> misf9;
			hal::RegisterConfigField<uint32_t,1,10,bool> misf10;
			hal::RegisterConfigField<uint32_t,1,11,bool> misf11;
			hal::RegisterConfigField<uint32_t,1,12,bool> misf12;
			hal::RegisterConfigField<uint32_t,1,13,bool> misf13;
			hal::RegisterConfigField<uint32_t,1,14,bool> misf14;
			hal::RegisterConfigField<uint32_t,1,15,bool> misf15;
	}; // class Hsem_c1misr
	class Hsem_c2ier : public hal::RegisterConfig
	{
		public:
			constexpr Hsem_c2ier() : RegisterConfig(),
						ise0(m_value, m_mask),
			ise1(m_value, m_mask),
			ise2(m_value, m_mask),
			ise3(m_value, m_mask),
			ise4(m_value, m_mask),
			ise5(m_value, m_mask),
			ise6(m_value, m_mask),
			ise7(m_value, m_mask),
			ise8(m_value, m_mask),
			ise9(m_value, m_mask),
			ise10(m_value, m_mask),
			ise11(m_value, m_mask),
			ise12(m_value, m_mask),
			ise13(m_value, m_mask),
			ise14(m_value, m_mask),
			ise15(m_value, m_mask)
			{}

			hal::RegisterConfigField<uint32_t,1,0,bool> ise0;
			hal::RegisterConfigField<uint32_t,1,1,bool> ise1;
			hal::RegisterConfigField<uint32_t,1,2,bool> ise2;
			hal::RegisterConfigField<uint32_t,1,3,bool> ise3;
			hal::RegisterConfigField<uint32_t,1,4,bool> ise4;
			hal::RegisterConfigField<uint32_t,1,5,bool> ise5;
			hal::RegisterConfigField<uint32_t,1,6,bool> ise6;
			hal::RegisterConfigField<uint32_t,1,7,bool> ise7;
			hal::RegisterConfigField<uint32_t,1,8,bool> ise8;
			hal::RegisterConfigField<uint32_t,1,9,bool> ise9;
			hal::RegisterConfigField<uint32_t,1,10,bool> ise10;
			hal::RegisterConfigField<uint32_t,1,11,bool> ise11;
			hal::RegisterConfigField<uint32_t,1,12,bool> ise12;
			hal::RegisterConfigField<uint32_t,1,13,bool> ise13;
			hal::RegisterConfigField<uint32_t,1,14,bool> ise14;
			hal::RegisterConfigField<uint32_t,1,15,bool> ise15;
	}; // class Hsem_c2ier
	class Hsem_c2icr : public hal::RegisterConfig
	{
		public:
			constexpr Hsem_c2icr() : RegisterConfig(),
						isc0(m_value, m_mask),
			isc1(m_value, m_mask),
			isc2(m_value, m_mask),
			isc3(m_value, m_mask),
			isc4(m_value, m_mask),
			isc5(m_value, m_mask),
			isc6(m_value, m_mask),
			isc7(m_value, m_mask),
			isc8(m_value, m_mask),
			isc9(m_value, m_mask),
			isc10(m_value, m_mask),
			isc11(m_value, m_mask),
			isc12(m_value, m_mask),
			isc13(m_value, m_mask),
			isc14(m_value, m_mask),
			isc15(m_value, m_mask)
			{}

			hal::RegisterConfigField<uint32_t,1,0,bool> isc0;
			hal::RegisterConfigField<uint32_t,1,1,bool> isc1;
			hal::RegisterConfigField<uint32_t,1,2,bool> isc2;
			hal::RegisterConfigField<uint32_t,1,3,bool> isc3;
			hal::RegisterConfigField<uint32_t,1,4,bool> isc4;
			hal::RegisterConfigField<uint32_t,1,5,bool> isc5;
			hal::RegisterConfigField<uint32_t,1,6,bool> isc6;
			hal::RegisterConfigField<uint32_t,1,7,bool> isc7;
			hal::RegisterConfigField<uint32_t,1,8,bool> isc8;
			hal::RegisterConfigField<uint32_t,1,9,bool> isc9;
			hal::RegisterConfigField<uint32_t,1,10,bool> isc10;
			hal::RegisterConfigField<uint32_t,1,11,bool> isc11;
			hal::RegisterConfigField<uint32_t,1,12,bool> isc12;
			hal::RegisterConfigField<uint32_t,1,13,bool> isc13;
			hal::RegisterConfigField<uint32_t,1,14,bool> isc14;
			hal::RegisterConfigField<uint32_t,1,15,bool> isc15;
	}; // class Hsem_c2icr
	class Hsem_c2isr : public hal::RegisterConfig
	{
		public:
			constexpr Hsem_c2isr() : RegisterConfig(),
						isf0(m_value, m_mask),
			isf1(m_value, m_mask),
			isf2(m_value, m_mask),
			isf3(m_value, m_mask),
			isf4(m_value, m_mask),
			isf5(m_value, m_mask),
			isf6(m_value, m_mask),
			isf7(m_value, m_mask),
			isf8(m_value, m_mask),
			isf9(m_value, m_mask),
			isf10(m_value, m_mask),
			isf11(m_value, m_mask),
			isf12(m_value, m_mask),
			isf13(m_value, m_mask),
			isf14(m_value, m_mask),
			isf15(m_value, m_mask)
			{}

			hal::RegisterConfigField<uint32_t,1,0,bool> isf0;
			hal::RegisterConfigField<uint32_t,1,1,bool> isf1;
			hal::RegisterConfigField<uint32_t,1,2,bool> isf2;
			hal::RegisterConfigField<uint32_t,1,3,bool> isf3;
			hal::RegisterConfigField<uint32_t,1,4,bool> isf4;
			hal::RegisterConfigField<uint32_t,1,5,bool> isf5;
			hal::RegisterConfigField<uint32_t,1,6,bool> isf6;
			hal::RegisterConfigField<uint32_t,1,7,bool> isf7;
			hal::RegisterConfigField<uint32_t,1,8,bool> isf8;
			hal::RegisterConfigField<uint32_t,1,9,bool> isf9;
			hal::RegisterConfigField<uint32_t,1,10,bool> isf10;
			hal::RegisterConfigField<uint32_t,1,11,bool> isf11;
			hal::RegisterConfigField<uint32_t,1,12,bool> isf12;
			hal::RegisterConfigField<uint32_t,1,13,bool> isf13;
			hal::RegisterConfigField<uint32_t,1,14,bool> isf14;
			hal::RegisterConfigField<uint32_t,1,15,bool> isf15;
	}; // class Hsem_c2isr
	class Hsem_c2misr : public hal::RegisterConfig
	{
		public:
			constexpr Hsem_c2misr() : RegisterConfig(),
						misf0(m_value, m_mask),
			misf1(m_value, m_mask),
			misf2(m_value, m_mask),
			misf3(m_value, m_mask),
			misf4(m_value, m_mask),
			misf5(m_value, m_mask),
			misf6(m_value, m_mask),
			misf7(m_value, m_mask),
			misf8(m_value, m_mask),
			misf9(m_value, m_mask),
			misf10(m_value, m_mask),
			misf11(m_value, m_mask),
			misf12(m_value, m_mask),
			misf13(m_value, m_mask),
			misf14(m_value, m_mask),
			misf15(m_value, m_mask)
			{}

			hal::RegisterConfigField<uint32_t,1,0,bool> misf0;
			hal::RegisterConfigField<uint32_t,1,1,bool> misf1;
			hal::RegisterConfigField<uint32_t,1,2,bool> misf2;
			hal::RegisterConfigField<uint32_t,1,3,bool> misf3;
			hal::RegisterConfigField<uint32_t,1,4,bool> misf4;
			hal::RegisterConfigField<uint32_t,1,5,bool> misf5;
			hal::RegisterConfigField<uint32_t,1,6,bool> misf6;
			hal::RegisterConfigField<uint32_t,1,7,bool> misf7;
			hal::RegisterConfigField<uint32_t,1,8,bool> misf8;
			hal::RegisterConfigField<uint32_t,1,9,bool> misf9;
			hal::RegisterConfigField<uint32_t,1,10,bool> misf10;
			hal::RegisterConfigField<uint32_t,1,11,bool> misf11;
			hal::RegisterConfigField<uint32_t,1,12,bool> misf12;
			hal::RegisterConfigField<uint32_t,1,13,bool> misf13;
			hal::RegisterConfigField<uint32_t,1,14,bool> misf14;
			hal::RegisterConfigField<uint32_t,1,15,bool> misf15;
	}; // class Hsem_c2misr
	class Hsem_cr : public hal::RegisterConfig
	{
		public:
			constexpr Hsem_cr() : RegisterConfig(),
						coreid(m_value, m_mask),
			key(m_value, m_mask)
			{}

			hal::RegisterConfigField<uint32_t,4,8,uint8_t> coreid;
			hal::RegisterConfigField<uint32_t,16,16,uint16_t> key;
	}; // class Hsem_cr
	class Hsem_keyr : public hal::RegisterConfig
	{
		public:
			constexpr Hsem_keyr() : RegisterConfig(),
						key(m_value, m_mask)
			{}

			hal::RegisterConfigField<uint32_t,16,16,uint16_t> key;
	}; // class Hsem_keyr
} // namespace hsem
} // namespace values
} // namespace processor
