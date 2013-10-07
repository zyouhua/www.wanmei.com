#pragma once

namespace std {

	template<class __t>
	class __singleton : noncopyable
	{
	public:
		static __t& _instance()
		{
			static __t t;
			return t;
		}
	};

}
