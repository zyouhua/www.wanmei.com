#pragma once

namespace std {

	class MpqHead
	{
	public:
		static __u32 _hashSize();
		template<class __t>
		void _serialize(__t * nT);
		MpqHead();
		~MpqHead();
	private:
	};

	template<class __t>
	void MpqHead::_serialize(__t * nT)
	{
	}

}
