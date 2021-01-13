///Add
#include "../UserInterface/Locale_inc.h"

//Find
		void DeactiveEffectInstance(DWORD dwInstanceIndex);
		
///Add
#if defined(__BL_HIDE_EFFECT__)
		void SetEffectOption(BYTE Type, bool bVisible) { BLDisableEffects[Type] = bVisible; };
		bool GetEffectOption(BYTE Type) const { return BLDisableEffects[Type]; };
		bool CanRenderFunction(CEffectInstance* pkEftInst) const;
		enum {
			EFFECT_OPTION_BUFF,
			EFFECT_OPTION_SKILL,
			EFFECT_OPTION_MAX
		};
#endif

//Find
		CEffectInstance *				m_pSelectedEffectInstance;
		
///Add
#if defined(__BL_HIDE_EFFECT__)
		bool							BLDisableEffects[EFFECT_OPTION_MAX];
#endif