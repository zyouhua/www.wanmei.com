#pragma once

namespace std {

	class PropertyId
	{
	public:
		template<class __t>
		PropertyPtr _createProperty()
		{
			return shared_ptr<__t>(new __t());
		}

		template<class __t>
		__u32 _getId()
		{
			return typeid(__t).name();
		}
	};

}
