

#pragma once
#include <cstdint>
#include "volund/hal/hardware/RegisterField.hpp"
#include "volund/hal/RegisterConfig.hpp"
#include "yggdrasil/interfaces/IVectorsManager.hpp"
#include "../values/HsemValues.hpp"

namespace core{
namespace peripherals{
	namespace hsem {
	class Hsem_r0{
		public:
			constexpr Hsem_r0(volatile uint32_t * reg) : 
			m_register(*reg),
			procid(reg),
			coreid(reg),
			lock(reg)
			{}

			hardware::RegisterField<8,0,uint8_t> procid;
			hardware::RegisterField<4,8,uint8_t> coreid;
			hardware::RegisterField<1,31,bool> lock;
			
			volatile uint32_t& operator=(Hsem_r0& self)
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

			void operator=(const processor::values::hsem::Hsem_r0& t_value)
			{
				m_register = ((m_register & ~static_cast<uint32_t>(t_value.getMask())) | static_cast<uint32_t>(t_value.getValue()));
			}



		private:
			volatile uint32_t& m_register;
	}; // class Hsem_r0
	class Hsem_r1{
		public:
			constexpr Hsem_r1(volatile uint32_t * reg) : 
			m_register(*reg),
			procid(reg),
			coreid(reg),
			lock(reg)
			{}

			hardware::RegisterField<8,0,uint8_t> procid;
			hardware::RegisterField<4,8,uint8_t> coreid;
			hardware::RegisterField<1,31,bool> lock;
			
			volatile uint32_t& operator=(Hsem_r1& self)
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

			void operator=(const processor::values::hsem::Hsem_r1& t_value)
			{
				m_register = ((m_register & ~static_cast<uint32_t>(t_value.getMask())) | static_cast<uint32_t>(t_value.getValue()));
			}



		private:
			volatile uint32_t& m_register;
	}; // class Hsem_r1
	class Hsem_r2{
		public:
			constexpr Hsem_r2(volatile uint32_t * reg) : 
			m_register(*reg),
			procid(reg),
			coreid(reg),
			lock(reg)
			{}

			hardware::RegisterField<8,0,uint8_t> procid;
			hardware::RegisterField<4,8,uint8_t> coreid;
			hardware::RegisterField<1,31,bool> lock;
			
			volatile uint32_t& operator=(Hsem_r2& self)
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

			void operator=(const processor::values::hsem::Hsem_r2& t_value)
			{
				m_register = ((m_register & ~static_cast<uint32_t>(t_value.getMask())) | static_cast<uint32_t>(t_value.getValue()));
			}



		private:
			volatile uint32_t& m_register;
	}; // class Hsem_r2
	class Hsem_r3{
		public:
			constexpr Hsem_r3(volatile uint32_t * reg) : 
			m_register(*reg),
			procid(reg),
			coreid(reg),
			lock(reg)
			{}

			hardware::RegisterField<8,0,uint8_t> procid;
			hardware::RegisterField<4,8,uint8_t> coreid;
			hardware::RegisterField<1,31,bool> lock;
			
			volatile uint32_t& operator=(Hsem_r3& self)
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

			void operator=(const processor::values::hsem::Hsem_r3& t_value)
			{
				m_register = ((m_register & ~static_cast<uint32_t>(t_value.getMask())) | static_cast<uint32_t>(t_value.getValue()));
			}



		private:
			volatile uint32_t& m_register;
	}; // class Hsem_r3
	class Hsem_r4{
		public:
			constexpr Hsem_r4(volatile uint32_t * reg) : 
			m_register(*reg),
			procid(reg),
			coreid(reg),
			lock(reg)
			{}

			hardware::RegisterField<8,0,uint8_t> procid;
			hardware::RegisterField<4,8,uint8_t> coreid;
			hardware::RegisterField<1,31,bool> lock;
			
			volatile uint32_t& operator=(Hsem_r4& self)
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

			void operator=(const processor::values::hsem::Hsem_r4& t_value)
			{
				m_register = ((m_register & ~static_cast<uint32_t>(t_value.getMask())) | static_cast<uint32_t>(t_value.getValue()));
			}



		private:
			volatile uint32_t& m_register;
	}; // class Hsem_r4
	class Hsem_r5{
		public:
			constexpr Hsem_r5(volatile uint32_t * reg) : 
			m_register(*reg),
			procid(reg),
			coreid(reg),
			lock(reg)
			{}

			hardware::RegisterField<8,0,uint8_t> procid;
			hardware::RegisterField<4,8,uint8_t> coreid;
			hardware::RegisterField<1,31,bool> lock;
			
			volatile uint32_t& operator=(Hsem_r5& self)
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

			void operator=(const processor::values::hsem::Hsem_r5& t_value)
			{
				m_register = ((m_register & ~static_cast<uint32_t>(t_value.getMask())) | static_cast<uint32_t>(t_value.getValue()));
			}



		private:
			volatile uint32_t& m_register;
	}; // class Hsem_r5
	class Hsem_r6{
		public:
			constexpr Hsem_r6(volatile uint32_t * reg) : 
			m_register(*reg),
			procid(reg),
			coreid(reg),
			lock(reg)
			{}

			hardware::RegisterField<8,0,uint8_t> procid;
			hardware::RegisterField<4,8,uint8_t> coreid;
			hardware::RegisterField<1,31,bool> lock;
			
			volatile uint32_t& operator=(Hsem_r6& self)
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

			void operator=(const processor::values::hsem::Hsem_r6& t_value)
			{
				m_register = ((m_register & ~static_cast<uint32_t>(t_value.getMask())) | static_cast<uint32_t>(t_value.getValue()));
			}



		private:
			volatile uint32_t& m_register;
	}; // class Hsem_r6
	class Hsem_r7{
		public:
			constexpr Hsem_r7(volatile uint32_t * reg) : 
			m_register(*reg),
			procid(reg),
			coreid(reg),
			lock(reg)
			{}

			hardware::RegisterField<8,0,uint8_t> procid;
			hardware::RegisterField<4,8,uint8_t> coreid;
			hardware::RegisterField<1,31,bool> lock;
			
			volatile uint32_t& operator=(Hsem_r7& self)
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

			void operator=(const processor::values::hsem::Hsem_r7& t_value)
			{
				m_register = ((m_register & ~static_cast<uint32_t>(t_value.getMask())) | static_cast<uint32_t>(t_value.getValue()));
			}



		private:
			volatile uint32_t& m_register;
	}; // class Hsem_r7
	class Hsem_r8{
		public:
			constexpr Hsem_r8(volatile uint32_t * reg) : 
			m_register(*reg),
			procid(reg),
			coreid(reg),
			lock(reg)
			{}

			hardware::RegisterField<8,0,uint8_t> procid;
			hardware::RegisterField<4,8,uint8_t> coreid;
			hardware::RegisterField<1,31,bool> lock;
			
			volatile uint32_t& operator=(Hsem_r8& self)
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

			void operator=(const processor::values::hsem::Hsem_r8& t_value)
			{
				m_register = ((m_register & ~static_cast<uint32_t>(t_value.getMask())) | static_cast<uint32_t>(t_value.getValue()));
			}



		private:
			volatile uint32_t& m_register;
	}; // class Hsem_r8
	class Hsem_r9{
		public:
			constexpr Hsem_r9(volatile uint32_t * reg) : 
			m_register(*reg),
			procid(reg),
			coreid(reg),
			lock(reg)
			{}

			hardware::RegisterField<8,0,uint8_t> procid;
			hardware::RegisterField<4,8,uint8_t> coreid;
			hardware::RegisterField<1,31,bool> lock;
			
			volatile uint32_t& operator=(Hsem_r9& self)
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

			void operator=(const processor::values::hsem::Hsem_r9& t_value)
			{
				m_register = ((m_register & ~static_cast<uint32_t>(t_value.getMask())) | static_cast<uint32_t>(t_value.getValue()));
			}



		private:
			volatile uint32_t& m_register;
	}; // class Hsem_r9
	class Hsem_r10{
		public:
			constexpr Hsem_r10(volatile uint32_t * reg) : 
			m_register(*reg),
			procid(reg),
			coreid(reg),
			lock(reg)
			{}

			hardware::RegisterField<8,0,uint8_t> procid;
			hardware::RegisterField<4,8,uint8_t> coreid;
			hardware::RegisterField<1,31,bool> lock;
			
			volatile uint32_t& operator=(Hsem_r10& self)
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

			void operator=(const processor::values::hsem::Hsem_r10& t_value)
			{
				m_register = ((m_register & ~static_cast<uint32_t>(t_value.getMask())) | static_cast<uint32_t>(t_value.getValue()));
			}



		private:
			volatile uint32_t& m_register;
	}; // class Hsem_r10
	class Hsem_r11{
		public:
			constexpr Hsem_r11(volatile uint32_t * reg) : 
			m_register(*reg),
			procid(reg),
			coreid(reg),
			lock(reg)
			{}

			hardware::RegisterField<8,0,uint8_t> procid;
			hardware::RegisterField<4,8,uint8_t> coreid;
			hardware::RegisterField<1,31,bool> lock;
			
			volatile uint32_t& operator=(Hsem_r11& self)
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

			void operator=(const processor::values::hsem::Hsem_r11& t_value)
			{
				m_register = ((m_register & ~static_cast<uint32_t>(t_value.getMask())) | static_cast<uint32_t>(t_value.getValue()));
			}



		private:
			volatile uint32_t& m_register;
	}; // class Hsem_r11
	class Hsem_r12{
		public:
			constexpr Hsem_r12(volatile uint32_t * reg) : 
			m_register(*reg),
			procid(reg),
			coreid(reg),
			lock(reg)
			{}

			hardware::RegisterField<8,0,uint8_t> procid;
			hardware::RegisterField<4,8,uint8_t> coreid;
			hardware::RegisterField<1,31,bool> lock;
			
			volatile uint32_t& operator=(Hsem_r12& self)
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

			void operator=(const processor::values::hsem::Hsem_r12& t_value)
			{
				m_register = ((m_register & ~static_cast<uint32_t>(t_value.getMask())) | static_cast<uint32_t>(t_value.getValue()));
			}



		private:
			volatile uint32_t& m_register;
	}; // class Hsem_r12
	class Hsem_r13{
		public:
			constexpr Hsem_r13(volatile uint32_t * reg) : 
			m_register(*reg),
			procid(reg),
			coreid(reg),
			lock(reg)
			{}

			hardware::RegisterField<8,0,uint8_t> procid;
			hardware::RegisterField<4,8,uint8_t> coreid;
			hardware::RegisterField<1,31,bool> lock;
			
			volatile uint32_t& operator=(Hsem_r13& self)
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

			void operator=(const processor::values::hsem::Hsem_r13& t_value)
			{
				m_register = ((m_register & ~static_cast<uint32_t>(t_value.getMask())) | static_cast<uint32_t>(t_value.getValue()));
			}



		private:
			volatile uint32_t& m_register;
	}; // class Hsem_r13
	class Hsem_r14{
		public:
			constexpr Hsem_r14(volatile uint32_t * reg) : 
			m_register(*reg),
			procid(reg),
			coreid(reg),
			lock(reg)
			{}

			hardware::RegisterField<8,0,uint8_t> procid;
			hardware::RegisterField<4,8,uint8_t> coreid;
			hardware::RegisterField<1,31,bool> lock;
			
			volatile uint32_t& operator=(Hsem_r14& self)
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

			void operator=(const processor::values::hsem::Hsem_r14& t_value)
			{
				m_register = ((m_register & ~static_cast<uint32_t>(t_value.getMask())) | static_cast<uint32_t>(t_value.getValue()));
			}



		private:
			volatile uint32_t& m_register;
	}; // class Hsem_r14
	class Hsem_r15{
		public:
			constexpr Hsem_r15(volatile uint32_t * reg) : 
			m_register(*reg),
			procid(reg),
			coreid(reg),
			lock(reg)
			{}

			hardware::RegisterField<8,0,uint8_t> procid;
			hardware::RegisterField<4,8,uint8_t> coreid;
			hardware::RegisterField<1,31,bool> lock;
			
			volatile uint32_t& operator=(Hsem_r15& self)
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

			void operator=(const processor::values::hsem::Hsem_r15& t_value)
			{
				m_register = ((m_register & ~static_cast<uint32_t>(t_value.getMask())) | static_cast<uint32_t>(t_value.getValue()));
			}



		private:
			volatile uint32_t& m_register;
	}; // class Hsem_r15
	class Hsem_rlr0{
		public:
			constexpr Hsem_rlr0(volatile uint32_t * reg) : 
			m_register(*reg),
			procid(reg),
			coreid(reg),
			lock(reg)
			{}

			hardware::RegisterField<8,0,uint8_t> procid;
			hardware::RegisterField<4,8,uint8_t> coreid;
			hardware::RegisterField<1,31,bool> lock;
			
			volatile uint32_t& operator=(Hsem_rlr0& self)
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

			void operator=(const processor::values::hsem::Hsem_rlr0& t_value)
			{
				m_register = ((m_register & ~static_cast<uint32_t>(t_value.getMask())) | static_cast<uint32_t>(t_value.getValue()));
			}



		private:
			volatile uint32_t& m_register;
	}; // class Hsem_rlr0
	class Hsem_rlr1{
		public:
			constexpr Hsem_rlr1(volatile uint32_t * reg) : 
			m_register(*reg),
			procid(reg),
			coreid(reg),
			lock(reg)
			{}

			hardware::RegisterField<8,0,uint8_t> procid;
			hardware::RegisterField<4,8,uint8_t> coreid;
			hardware::RegisterField<1,31,bool> lock;
			
			volatile uint32_t& operator=(Hsem_rlr1& self)
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

			void operator=(const processor::values::hsem::Hsem_rlr1& t_value)
			{
				m_register = ((m_register & ~static_cast<uint32_t>(t_value.getMask())) | static_cast<uint32_t>(t_value.getValue()));
			}



		private:
			volatile uint32_t& m_register;
	}; // class Hsem_rlr1
	class Hsem_rlr2{
		public:
			constexpr Hsem_rlr2(volatile uint32_t * reg) : 
			m_register(*reg),
			procid(reg),
			coreid(reg),
			lock(reg)
			{}

			hardware::RegisterField<8,0,uint8_t> procid;
			hardware::RegisterField<4,8,uint8_t> coreid;
			hardware::RegisterField<1,31,bool> lock;
			
			volatile uint32_t& operator=(Hsem_rlr2& self)
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

			void operator=(const processor::values::hsem::Hsem_rlr2& t_value)
			{
				m_register = ((m_register & ~static_cast<uint32_t>(t_value.getMask())) | static_cast<uint32_t>(t_value.getValue()));
			}



		private:
			volatile uint32_t& m_register;
	}; // class Hsem_rlr2
	class Hsem_rlr3{
		public:
			constexpr Hsem_rlr3(volatile uint32_t * reg) : 
			m_register(*reg),
			procid(reg),
			coreid(reg),
			lock(reg)
			{}

			hardware::RegisterField<8,0,uint8_t> procid;
			hardware::RegisterField<4,8,uint8_t> coreid;
			hardware::RegisterField<1,31,bool> lock;
			
			volatile uint32_t& operator=(Hsem_rlr3& self)
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

			void operator=(const processor::values::hsem::Hsem_rlr3& t_value)
			{
				m_register = ((m_register & ~static_cast<uint32_t>(t_value.getMask())) | static_cast<uint32_t>(t_value.getValue()));
			}



		private:
			volatile uint32_t& m_register;
	}; // class Hsem_rlr3
	class Hsem_rlr4{
		public:
			constexpr Hsem_rlr4(volatile uint32_t * reg) : 
			m_register(*reg),
			procid(reg),
			coreid(reg),
			lock(reg)
			{}

			hardware::RegisterField<8,0,uint8_t> procid;
			hardware::RegisterField<4,8,uint8_t> coreid;
			hardware::RegisterField<1,31,bool> lock;
			
			volatile uint32_t& operator=(Hsem_rlr4& self)
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

			void operator=(const processor::values::hsem::Hsem_rlr4& t_value)
			{
				m_register = ((m_register & ~static_cast<uint32_t>(t_value.getMask())) | static_cast<uint32_t>(t_value.getValue()));
			}



		private:
			volatile uint32_t& m_register;
	}; // class Hsem_rlr4
	class Hsem_rlr5{
		public:
			constexpr Hsem_rlr5(volatile uint32_t * reg) : 
			m_register(*reg),
			procid(reg),
			coreid(reg),
			lock(reg)
			{}

			hardware::RegisterField<8,0,uint8_t> procid;
			hardware::RegisterField<4,8,uint8_t> coreid;
			hardware::RegisterField<1,31,bool> lock;
			
			volatile uint32_t& operator=(Hsem_rlr5& self)
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

			void operator=(const processor::values::hsem::Hsem_rlr5& t_value)
			{
				m_register = ((m_register & ~static_cast<uint32_t>(t_value.getMask())) | static_cast<uint32_t>(t_value.getValue()));
			}



		private:
			volatile uint32_t& m_register;
	}; // class Hsem_rlr5
	class Hsem_rlr6{
		public:
			constexpr Hsem_rlr6(volatile uint32_t * reg) : 
			m_register(*reg),
			procid(reg),
			coreid(reg),
			lock(reg)
			{}

			hardware::RegisterField<8,0,uint8_t> procid;
			hardware::RegisterField<4,8,uint8_t> coreid;
			hardware::RegisterField<1,31,bool> lock;
			
			volatile uint32_t& operator=(Hsem_rlr6& self)
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

			void operator=(const processor::values::hsem::Hsem_rlr6& t_value)
			{
				m_register = ((m_register & ~static_cast<uint32_t>(t_value.getMask())) | static_cast<uint32_t>(t_value.getValue()));
			}



		private:
			volatile uint32_t& m_register;
	}; // class Hsem_rlr6
	class Hsem_rlr7{
		public:
			constexpr Hsem_rlr7(volatile uint32_t * reg) : 
			m_register(*reg),
			procid(reg),
			coreid(reg),
			lock(reg)
			{}

			hardware::RegisterField<8,0,uint8_t> procid;
			hardware::RegisterField<4,8,uint8_t> coreid;
			hardware::RegisterField<1,31,bool> lock;
			
			volatile uint32_t& operator=(Hsem_rlr7& self)
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

			void operator=(const processor::values::hsem::Hsem_rlr7& t_value)
			{
				m_register = ((m_register & ~static_cast<uint32_t>(t_value.getMask())) | static_cast<uint32_t>(t_value.getValue()));
			}



		private:
			volatile uint32_t& m_register;
	}; // class Hsem_rlr7
	class Hsem_rlr8{
		public:
			constexpr Hsem_rlr8(volatile uint32_t * reg) : 
			m_register(*reg),
			procid(reg),
			coreid(reg),
			lock(reg)
			{}

			hardware::RegisterField<8,0,uint8_t> procid;
			hardware::RegisterField<4,8,uint8_t> coreid;
			hardware::RegisterField<1,31,bool> lock;
			
			volatile uint32_t& operator=(Hsem_rlr8& self)
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

			void operator=(const processor::values::hsem::Hsem_rlr8& t_value)
			{
				m_register = ((m_register & ~static_cast<uint32_t>(t_value.getMask())) | static_cast<uint32_t>(t_value.getValue()));
			}



		private:
			volatile uint32_t& m_register;
	}; // class Hsem_rlr8
	class Hsem_rlr9{
		public:
			constexpr Hsem_rlr9(volatile uint32_t * reg) : 
			m_register(*reg),
			procid(reg),
			coreid(reg),
			lock(reg)
			{}

			hardware::RegisterField<8,0,uint8_t> procid;
			hardware::RegisterField<4,8,uint8_t> coreid;
			hardware::RegisterField<1,31,bool> lock;
			
			volatile uint32_t& operator=(Hsem_rlr9& self)
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

			void operator=(const processor::values::hsem::Hsem_rlr9& t_value)
			{
				m_register = ((m_register & ~static_cast<uint32_t>(t_value.getMask())) | static_cast<uint32_t>(t_value.getValue()));
			}



		private:
			volatile uint32_t& m_register;
	}; // class Hsem_rlr9
	class Hsem_rlr10{
		public:
			constexpr Hsem_rlr10(volatile uint32_t * reg) : 
			m_register(*reg),
			procid(reg),
			coreid(reg),
			lock(reg)
			{}

			hardware::RegisterField<8,0,uint8_t> procid;
			hardware::RegisterField<4,8,uint8_t> coreid;
			hardware::RegisterField<1,31,bool> lock;
			
			volatile uint32_t& operator=(Hsem_rlr10& self)
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

			void operator=(const processor::values::hsem::Hsem_rlr10& t_value)
			{
				m_register = ((m_register & ~static_cast<uint32_t>(t_value.getMask())) | static_cast<uint32_t>(t_value.getValue()));
			}



		private:
			volatile uint32_t& m_register;
	}; // class Hsem_rlr10
	class Hsem_rlr11{
		public:
			constexpr Hsem_rlr11(volatile uint32_t * reg) : 
			m_register(*reg),
			procid(reg),
			coreid(reg),
			lock(reg)
			{}

			hardware::RegisterField<8,0,uint8_t> procid;
			hardware::RegisterField<4,8,uint8_t> coreid;
			hardware::RegisterField<1,31,bool> lock;
			
			volatile uint32_t& operator=(Hsem_rlr11& self)
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

			void operator=(const processor::values::hsem::Hsem_rlr11& t_value)
			{
				m_register = ((m_register & ~static_cast<uint32_t>(t_value.getMask())) | static_cast<uint32_t>(t_value.getValue()));
			}



		private:
			volatile uint32_t& m_register;
	}; // class Hsem_rlr11
	class Hsem_rlr12{
		public:
			constexpr Hsem_rlr12(volatile uint32_t * reg) : 
			m_register(*reg),
			procid(reg),
			coreid(reg),
			lock(reg)
			{}

			hardware::RegisterField<8,0,uint8_t> procid;
			hardware::RegisterField<4,8,uint8_t> coreid;
			hardware::RegisterField<1,31,bool> lock;
			
			volatile uint32_t& operator=(Hsem_rlr12& self)
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

			void operator=(const processor::values::hsem::Hsem_rlr12& t_value)
			{
				m_register = ((m_register & ~static_cast<uint32_t>(t_value.getMask())) | static_cast<uint32_t>(t_value.getValue()));
			}



		private:
			volatile uint32_t& m_register;
	}; // class Hsem_rlr12
	class Hsem_rlr13{
		public:
			constexpr Hsem_rlr13(volatile uint32_t * reg) : 
			m_register(*reg),
			procid(reg),
			coreid(reg),
			lock(reg)
			{}

			hardware::RegisterField<8,0,uint8_t> procid;
			hardware::RegisterField<4,8,uint8_t> coreid;
			hardware::RegisterField<1,31,bool> lock;
			
			volatile uint32_t& operator=(Hsem_rlr13& self)
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

			void operator=(const processor::values::hsem::Hsem_rlr13& t_value)
			{
				m_register = ((m_register & ~static_cast<uint32_t>(t_value.getMask())) | static_cast<uint32_t>(t_value.getValue()));
			}



		private:
			volatile uint32_t& m_register;
	}; // class Hsem_rlr13
	class Hsem_rlr14{
		public:
			constexpr Hsem_rlr14(volatile uint32_t * reg) : 
			m_register(*reg),
			procid(reg),
			coreid(reg),
			lock(reg)
			{}

			hardware::RegisterField<8,0,uint8_t> procid;
			hardware::RegisterField<4,8,uint8_t> coreid;
			hardware::RegisterField<1,31,bool> lock;
			
			volatile uint32_t& operator=(Hsem_rlr14& self)
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

			void operator=(const processor::values::hsem::Hsem_rlr14& t_value)
			{
				m_register = ((m_register & ~static_cast<uint32_t>(t_value.getMask())) | static_cast<uint32_t>(t_value.getValue()));
			}



		private:
			volatile uint32_t& m_register;
	}; // class Hsem_rlr14
	class Hsem_rlr15{
		public:
			constexpr Hsem_rlr15(volatile uint32_t * reg) : 
			m_register(*reg),
			procid(reg),
			coreid(reg),
			lock(reg)
			{}

			hardware::RegisterField<8,0,uint8_t> procid;
			hardware::RegisterField<4,8,uint8_t> coreid;
			hardware::RegisterField<1,31,bool> lock;
			
			volatile uint32_t& operator=(Hsem_rlr15& self)
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

			void operator=(const processor::values::hsem::Hsem_rlr15& t_value)
			{
				m_register = ((m_register & ~static_cast<uint32_t>(t_value.getMask())) | static_cast<uint32_t>(t_value.getValue()));
			}



		private:
			volatile uint32_t& m_register;
	}; // class Hsem_rlr15
	class Hsem_c1ier{
		public:
			constexpr Hsem_c1ier(volatile uint32_t * reg) : 
			m_register(*reg),
			ise0(reg),
			ise1(reg),
			ise2(reg),
			ise3(reg),
			ise4(reg),
			ise5(reg),
			ise6(reg),
			ise7(reg),
			ise8(reg),
			ise9(reg),
			ise10(reg),
			ise11(reg),
			ise12(reg),
			ise13(reg),
			ise14(reg),
			ise15(reg)
			{}

			hardware::RegisterField<1,0,bool> ise0;
			hardware::RegisterField<1,1,bool> ise1;
			hardware::RegisterField<1,2,bool> ise2;
			hardware::RegisterField<1,3,bool> ise3;
			hardware::RegisterField<1,4,bool> ise4;
			hardware::RegisterField<1,5,bool> ise5;
			hardware::RegisterField<1,6,bool> ise6;
			hardware::RegisterField<1,7,bool> ise7;
			hardware::RegisterField<1,8,bool> ise8;
			hardware::RegisterField<1,9,bool> ise9;
			hardware::RegisterField<1,10,bool> ise10;
			hardware::RegisterField<1,11,bool> ise11;
			hardware::RegisterField<1,12,bool> ise12;
			hardware::RegisterField<1,13,bool> ise13;
			hardware::RegisterField<1,14,bool> ise14;
			hardware::RegisterField<1,15,bool> ise15;
			
			volatile uint32_t& operator=(Hsem_c1ier& self)
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

			void operator=(const processor::values::hsem::Hsem_c1ier& t_value)
			{
				m_register = ((m_register & ~static_cast<uint32_t>(t_value.getMask())) | static_cast<uint32_t>(t_value.getValue()));
			}



		private:
			volatile uint32_t& m_register;
	}; // class Hsem_c1ier
	class Hsem_c1icr{
		public:
			constexpr Hsem_c1icr(volatile uint32_t * reg) : 
			m_register(*reg),
			isc0(reg),
			isc1(reg),
			isc2(reg),
			isc3(reg),
			isc4(reg),
			isc5(reg),
			isc6(reg),
			isc7(reg),
			isc8(reg),
			isc9(reg),
			isc10(reg),
			isc11(reg),
			isc12(reg),
			isc13(reg),
			isc14(reg),
			isc15(reg)
			{}

			hardware::RegisterField<1,0,bool> isc0;
			hardware::RegisterField<1,1,bool> isc1;
			hardware::RegisterField<1,2,bool> isc2;
			hardware::RegisterField<1,3,bool> isc3;
			hardware::RegisterField<1,4,bool> isc4;
			hardware::RegisterField<1,5,bool> isc5;
			hardware::RegisterField<1,6,bool> isc6;
			hardware::RegisterField<1,7,bool> isc7;
			hardware::RegisterField<1,8,bool> isc8;
			hardware::RegisterField<1,9,bool> isc9;
			hardware::RegisterField<1,10,bool> isc10;
			hardware::RegisterField<1,11,bool> isc11;
			hardware::RegisterField<1,12,bool> isc12;
			hardware::RegisterField<1,13,bool> isc13;
			hardware::RegisterField<1,14,bool> isc14;
			hardware::RegisterField<1,15,bool> isc15;
			
			volatile uint32_t& operator=(Hsem_c1icr& self)
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

			void operator=(const processor::values::hsem::Hsem_c1icr& t_value)
			{
				m_register = ((m_register & ~static_cast<uint32_t>(t_value.getMask())) | static_cast<uint32_t>(t_value.getValue()));
			}



		private:
			volatile uint32_t& m_register;
	}; // class Hsem_c1icr
	class Hsem_c1isr{
		public:
			constexpr Hsem_c1isr(volatile uint32_t * reg) : 
			m_register(*reg),
			isf0(reg),
			isf1(reg),
			isf2(reg),
			isf3(reg),
			isf4(reg),
			isf5(reg),
			isf6(reg),
			isf7(reg),
			isf8(reg),
			isf9(reg),
			isf10(reg),
			isf11(reg),
			isf12(reg),
			isf13(reg),
			isf14(reg),
			isf15(reg)
			{}

			hardware::RegisterField<1,0,bool> isf0;
			hardware::RegisterField<1,1,bool> isf1;
			hardware::RegisterField<1,2,bool> isf2;
			hardware::RegisterField<1,3,bool> isf3;
			hardware::RegisterField<1,4,bool> isf4;
			hardware::RegisterField<1,5,bool> isf5;
			hardware::RegisterField<1,6,bool> isf6;
			hardware::RegisterField<1,7,bool> isf7;
			hardware::RegisterField<1,8,bool> isf8;
			hardware::RegisterField<1,9,bool> isf9;
			hardware::RegisterField<1,10,bool> isf10;
			hardware::RegisterField<1,11,bool> isf11;
			hardware::RegisterField<1,12,bool> isf12;
			hardware::RegisterField<1,13,bool> isf13;
			hardware::RegisterField<1,14,bool> isf14;
			hardware::RegisterField<1,15,bool> isf15;
			
			volatile uint32_t& operator=(Hsem_c1isr& self)
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

			void operator=(const processor::values::hsem::Hsem_c1isr& t_value)
			{
				m_register = ((m_register & ~static_cast<uint32_t>(t_value.getMask())) | static_cast<uint32_t>(t_value.getValue()));
			}



		private:
			volatile uint32_t& m_register;
	}; // class Hsem_c1isr
	class Hsem_c1misr{
		public:
			constexpr Hsem_c1misr(volatile uint32_t * reg) : 
			m_register(*reg),
			misf0(reg),
			misf1(reg),
			misf2(reg),
			misf3(reg),
			misf4(reg),
			misf5(reg),
			misf6(reg),
			misf7(reg),
			misf8(reg),
			misf9(reg),
			misf10(reg),
			misf11(reg),
			misf12(reg),
			misf13(reg),
			misf14(reg),
			misf15(reg)
			{}

			hardware::RegisterField<1,0,bool> misf0;
			hardware::RegisterField<1,1,bool> misf1;
			hardware::RegisterField<1,2,bool> misf2;
			hardware::RegisterField<1,3,bool> misf3;
			hardware::RegisterField<1,4,bool> misf4;
			hardware::RegisterField<1,5,bool> misf5;
			hardware::RegisterField<1,6,bool> misf6;
			hardware::RegisterField<1,7,bool> misf7;
			hardware::RegisterField<1,8,bool> misf8;
			hardware::RegisterField<1,9,bool> misf9;
			hardware::RegisterField<1,10,bool> misf10;
			hardware::RegisterField<1,11,bool> misf11;
			hardware::RegisterField<1,12,bool> misf12;
			hardware::RegisterField<1,13,bool> misf13;
			hardware::RegisterField<1,14,bool> misf14;
			hardware::RegisterField<1,15,bool> misf15;
			
			volatile uint32_t& operator=(Hsem_c1misr& self)
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

			void operator=(const processor::values::hsem::Hsem_c1misr& t_value)
			{
				m_register = ((m_register & ~static_cast<uint32_t>(t_value.getMask())) | static_cast<uint32_t>(t_value.getValue()));
			}



		private:
			volatile uint32_t& m_register;
	}; // class Hsem_c1misr
	class Hsem_c2ier{
		public:
			constexpr Hsem_c2ier(volatile uint32_t * reg) : 
			m_register(*reg),
			ise0(reg),
			ise1(reg),
			ise2(reg),
			ise3(reg),
			ise4(reg),
			ise5(reg),
			ise6(reg),
			ise7(reg),
			ise8(reg),
			ise9(reg),
			ise10(reg),
			ise11(reg),
			ise12(reg),
			ise13(reg),
			ise14(reg),
			ise15(reg)
			{}

			hardware::RegisterField<1,0,bool> ise0;
			hardware::RegisterField<1,1,bool> ise1;
			hardware::RegisterField<1,2,bool> ise2;
			hardware::RegisterField<1,3,bool> ise3;
			hardware::RegisterField<1,4,bool> ise4;
			hardware::RegisterField<1,5,bool> ise5;
			hardware::RegisterField<1,6,bool> ise6;
			hardware::RegisterField<1,7,bool> ise7;
			hardware::RegisterField<1,8,bool> ise8;
			hardware::RegisterField<1,9,bool> ise9;
			hardware::RegisterField<1,10,bool> ise10;
			hardware::RegisterField<1,11,bool> ise11;
			hardware::RegisterField<1,12,bool> ise12;
			hardware::RegisterField<1,13,bool> ise13;
			hardware::RegisterField<1,14,bool> ise14;
			hardware::RegisterField<1,15,bool> ise15;
			
			volatile uint32_t& operator=(Hsem_c2ier& self)
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

			void operator=(const processor::values::hsem::Hsem_c2ier& t_value)
			{
				m_register = ((m_register & ~static_cast<uint32_t>(t_value.getMask())) | static_cast<uint32_t>(t_value.getValue()));
			}



		private:
			volatile uint32_t& m_register;
	}; // class Hsem_c2ier
	class Hsem_c2icr{
		public:
			constexpr Hsem_c2icr(volatile uint32_t * reg) : 
			m_register(*reg),
			isc0(reg),
			isc1(reg),
			isc2(reg),
			isc3(reg),
			isc4(reg),
			isc5(reg),
			isc6(reg),
			isc7(reg),
			isc8(reg),
			isc9(reg),
			isc10(reg),
			isc11(reg),
			isc12(reg),
			isc13(reg),
			isc14(reg),
			isc15(reg)
			{}

			hardware::RegisterField<1,0,bool> isc0;
			hardware::RegisterField<1,1,bool> isc1;
			hardware::RegisterField<1,2,bool> isc2;
			hardware::RegisterField<1,3,bool> isc3;
			hardware::RegisterField<1,4,bool> isc4;
			hardware::RegisterField<1,5,bool> isc5;
			hardware::RegisterField<1,6,bool> isc6;
			hardware::RegisterField<1,7,bool> isc7;
			hardware::RegisterField<1,8,bool> isc8;
			hardware::RegisterField<1,9,bool> isc9;
			hardware::RegisterField<1,10,bool> isc10;
			hardware::RegisterField<1,11,bool> isc11;
			hardware::RegisterField<1,12,bool> isc12;
			hardware::RegisterField<1,13,bool> isc13;
			hardware::RegisterField<1,14,bool> isc14;
			hardware::RegisterField<1,15,bool> isc15;
			
			volatile uint32_t& operator=(Hsem_c2icr& self)
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

			void operator=(const processor::values::hsem::Hsem_c2icr& t_value)
			{
				m_register = ((m_register & ~static_cast<uint32_t>(t_value.getMask())) | static_cast<uint32_t>(t_value.getValue()));
			}



		private:
			volatile uint32_t& m_register;
	}; // class Hsem_c2icr
	class Hsem_c2isr{
		public:
			constexpr Hsem_c2isr(volatile uint32_t * reg) : 
			m_register(*reg),
			isf0(reg),
			isf1(reg),
			isf2(reg),
			isf3(reg),
			isf4(reg),
			isf5(reg),
			isf6(reg),
			isf7(reg),
			isf8(reg),
			isf9(reg),
			isf10(reg),
			isf11(reg),
			isf12(reg),
			isf13(reg),
			isf14(reg),
			isf15(reg)
			{}

			hardware::RegisterField<1,0,bool> isf0;
			hardware::RegisterField<1,1,bool> isf1;
			hardware::RegisterField<1,2,bool> isf2;
			hardware::RegisterField<1,3,bool> isf3;
			hardware::RegisterField<1,4,bool> isf4;
			hardware::RegisterField<1,5,bool> isf5;
			hardware::RegisterField<1,6,bool> isf6;
			hardware::RegisterField<1,7,bool> isf7;
			hardware::RegisterField<1,8,bool> isf8;
			hardware::RegisterField<1,9,bool> isf9;
			hardware::RegisterField<1,10,bool> isf10;
			hardware::RegisterField<1,11,bool> isf11;
			hardware::RegisterField<1,12,bool> isf12;
			hardware::RegisterField<1,13,bool> isf13;
			hardware::RegisterField<1,14,bool> isf14;
			hardware::RegisterField<1,15,bool> isf15;
			
			volatile uint32_t& operator=(Hsem_c2isr& self)
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

			void operator=(const processor::values::hsem::Hsem_c2isr& t_value)
			{
				m_register = ((m_register & ~static_cast<uint32_t>(t_value.getMask())) | static_cast<uint32_t>(t_value.getValue()));
			}



		private:
			volatile uint32_t& m_register;
	}; // class Hsem_c2isr
	class Hsem_c2misr{
		public:
			constexpr Hsem_c2misr(volatile uint32_t * reg) : 
			m_register(*reg),
			misf0(reg),
			misf1(reg),
			misf2(reg),
			misf3(reg),
			misf4(reg),
			misf5(reg),
			misf6(reg),
			misf7(reg),
			misf8(reg),
			misf9(reg),
			misf10(reg),
			misf11(reg),
			misf12(reg),
			misf13(reg),
			misf14(reg),
			misf15(reg)
			{}

			hardware::RegisterField<1,0,bool> misf0;
			hardware::RegisterField<1,1,bool> misf1;
			hardware::RegisterField<1,2,bool> misf2;
			hardware::RegisterField<1,3,bool> misf3;
			hardware::RegisterField<1,4,bool> misf4;
			hardware::RegisterField<1,5,bool> misf5;
			hardware::RegisterField<1,6,bool> misf6;
			hardware::RegisterField<1,7,bool> misf7;
			hardware::RegisterField<1,8,bool> misf8;
			hardware::RegisterField<1,9,bool> misf9;
			hardware::RegisterField<1,10,bool> misf10;
			hardware::RegisterField<1,11,bool> misf11;
			hardware::RegisterField<1,12,bool> misf12;
			hardware::RegisterField<1,13,bool> misf13;
			hardware::RegisterField<1,14,bool> misf14;
			hardware::RegisterField<1,15,bool> misf15;
			
			volatile uint32_t& operator=(Hsem_c2misr& self)
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

			void operator=(const processor::values::hsem::Hsem_c2misr& t_value)
			{
				m_register = ((m_register & ~static_cast<uint32_t>(t_value.getMask())) | static_cast<uint32_t>(t_value.getValue()));
			}



		private:
			volatile uint32_t& m_register;
	}; // class Hsem_c2misr
	class Hsem_cr{
		public:
			constexpr Hsem_cr(volatile uint32_t * reg) : 
			m_register(*reg),
			coreid(reg),
			key(reg)
			{}

			hardware::RegisterField<4,8,uint8_t> coreid;
			hardware::RegisterField<16,16,uint16_t> key;
			
			volatile uint32_t& operator=(Hsem_cr& self)
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

			void operator=(const processor::values::hsem::Hsem_cr& t_value)
			{
				m_register = ((m_register & ~static_cast<uint32_t>(t_value.getMask())) | static_cast<uint32_t>(t_value.getValue()));
			}



		private:
			volatile uint32_t& m_register;
	}; // class Hsem_cr
	class Hsem_keyr{
		public:
			constexpr Hsem_keyr(volatile uint32_t * reg) : 
			m_register(*reg),
			key(reg)
			{}

			hardware::RegisterField<16,16,uint16_t> key;
			
			volatile uint32_t& operator=(Hsem_keyr& self)
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

			void operator=(const processor::values::hsem::Hsem_keyr& t_value)
			{
				m_register = ((m_register & ~static_cast<uint32_t>(t_value.getMask())) | static_cast<uint32_t>(t_value.getValue()));
			}



		private:
			volatile uint32_t& m_register;
	}; // class Hsem_keyr
} // namespace hsem

	class Hsem
	{
		public:
			constexpr Hsem(volatile uint32_t * t_reg, const uint32_t t_irq) :
			hsem_r0(t_reg+0),
			hsem_r1(t_reg+1),
			hsem_r2(t_reg+2),
			hsem_r3(t_reg+3),
			hsem_r4(t_reg+4),
			hsem_r5(t_reg+5),
			hsem_r6(t_reg+6),
			hsem_r7(t_reg+7),
			hsem_r8(t_reg+8),
			hsem_r9(t_reg+9),
			hsem_r10(t_reg+10),
			hsem_r11(t_reg+11),
			hsem_r12(t_reg+12),
			hsem_r13(t_reg+13),
			hsem_r14(t_reg+14),
			hsem_r15(t_reg+15),
			hsem_rlr0(t_reg+32),
			hsem_rlr1(t_reg+33),
			hsem_rlr2(t_reg+34),
			hsem_rlr3(t_reg+35),
			hsem_rlr4(t_reg+36),
			hsem_rlr5(t_reg+37),
			hsem_rlr6(t_reg+38),
			hsem_rlr7(t_reg+39),
			hsem_rlr8(t_reg+40),
			hsem_rlr9(t_reg+41),
			hsem_rlr10(t_reg+42),
			hsem_rlr11(t_reg+43),
			hsem_rlr12(t_reg+44),
			hsem_rlr13(t_reg+45),
			hsem_rlr14(t_reg+46),
			hsem_rlr15(t_reg+47),
			hsem_c1ier(t_reg+64),
			hsem_c1icr(t_reg+65),
			hsem_c1isr(t_reg+66),
			hsem_c1misr(t_reg+67),
			hsem_c2ier(t_reg+68),
			hsem_c2icr(t_reg+69),
			hsem_c2isr(t_reg+70),
			hsem_c2misr(t_reg+71),
			hsem_cr(t_reg+80),
			hsem_keyr(t_reg+81),
			irq(t_irq)	
		{}




			hsem::Hsem_r0 hsem_r0;
			hsem::Hsem_r1 hsem_r1;
			hsem::Hsem_r2 hsem_r2;
			hsem::Hsem_r3 hsem_r3;
			hsem::Hsem_r4 hsem_r4;
			hsem::Hsem_r5 hsem_r5;
			hsem::Hsem_r6 hsem_r6;
			hsem::Hsem_r7 hsem_r7;
			hsem::Hsem_r8 hsem_r8;
			hsem::Hsem_r9 hsem_r9;
			hsem::Hsem_r10 hsem_r10;
			hsem::Hsem_r11 hsem_r11;
			hsem::Hsem_r12 hsem_r12;
			hsem::Hsem_r13 hsem_r13;
			hsem::Hsem_r14 hsem_r14;
			hsem::Hsem_r15 hsem_r15;
			hsem::Hsem_rlr0 hsem_rlr0;
			hsem::Hsem_rlr1 hsem_rlr1;
			hsem::Hsem_rlr2 hsem_rlr2;
			hsem::Hsem_rlr3 hsem_rlr3;
			hsem::Hsem_rlr4 hsem_rlr4;
			hsem::Hsem_rlr5 hsem_rlr5;
			hsem::Hsem_rlr6 hsem_rlr6;
			hsem::Hsem_rlr7 hsem_rlr7;
			hsem::Hsem_rlr8 hsem_rlr8;
			hsem::Hsem_rlr9 hsem_rlr9;
			hsem::Hsem_rlr10 hsem_rlr10;
			hsem::Hsem_rlr11 hsem_rlr11;
			hsem::Hsem_rlr12 hsem_rlr12;
			hsem::Hsem_rlr13 hsem_rlr13;
			hsem::Hsem_rlr14 hsem_rlr14;
			hsem::Hsem_rlr15 hsem_rlr15;
			hsem::Hsem_c1ier hsem_c1ier;
			hsem::Hsem_c1icr hsem_c1icr;
			hsem::Hsem_c1isr hsem_c1isr;
			hsem::Hsem_c1misr hsem_c1misr;
			hsem::Hsem_c2ier hsem_c2ier;
			hsem::Hsem_c2icr hsem_c2icr;
			hsem::Hsem_c2isr hsem_c2isr;
			hsem::Hsem_c2misr hsem_c2misr;
			hsem::Hsem_cr hsem_cr;
			hsem::Hsem_keyr hsem_keyr;

			core::interfaces::Irq irq;
				
	}; // class Hsem
}// namespace peripherals
} // namespace processor
