///Add
#include "../UserInterface/Locale_inc.h"

//Find
		void SetEffectDataPointer(CEffectData * pEffectData);
		
///Add
#if defined(__BL_HIDE_EFFECT__)
		CEffectData* GetEffectDataPointer() { return m_pkEftData; };
#endif