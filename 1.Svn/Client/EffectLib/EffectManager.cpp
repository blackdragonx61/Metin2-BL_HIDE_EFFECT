///Add
#if defined(__BL_HIDE_EFFECT__)
bool CEffectManager::CanRenderFunction(CEffectInstance* pkEftInst) const
{
	static const std::vector<std::string> vEffectNames[CEffectManager::EFFECT_OPTION_MAX]
	{
		{
			"d:/ymir work/pc/shaman/effect/3hosin_loop.mse",
			"d:/ymir work/pc/shaman/effect/boho_loop.mse",
			"d:/ymir work/pc/shaman/effect/6gicheon_hand.mse",
			"d:/ymir work/pc/shaman/effect/jeungryeok_hand.mse"
		},
		{
			"d:/ymir work/pc/shaman/effect/10kwaesok_loop.mse",
			"d:/ymir work/pc/sura/effect/gwigeom_loop.mse",
			"d:/ymir work/pc/sura/effect/fear_loop.mse",
			"d:/ymir work/pc/sura/effect/jumagap_loop.mse",
			"d:/ymir work/pc/sura/effect/muyeong_loop.mse",
			"d:/ymir work/pc/sura/effect/heuksin_loop.mse",
			"d:/ymir work/pc/warrior/effect/gyeokgongjang_loop.mse",
			"d:/ymir work/pc/warrior/effect/geom_sword_loop.mse",
			"d:/ymir work/pc/warrior/effect/geom_spear_loop.mse",
			"d:/ymir work/pc/assassin/effect/gyeonggong_loop.mse",
		},
	};

	for (BYTE i = 0; i < CEffectManager::EFFECT_OPTION_MAX; i++)
	{
		if (!GetEffectOption(i))
			continue;

		if (!pkEftInst)
			break;

		CEffectData* EffectData = pkEftInst->GetEffectDataPointer();
		if (!EffectData)
			break;

		auto it = std::find(vEffectNames[i].begin(), vEffectNames[i].end(), EffectData->GetFileName());
		if (it != vEffectNames[i].end())
			return false;
	}

	return true;
}
#endif

//Find
struct CEffectManager_FEffectInstanceRender
{
	...
};
		
///Change
struct CEffectManager_FEffectInstanceRender
{
	inline void operator () (CEffectInstance* pkEftInst)
	{
#if defined(__BL_HIDE_EFFECT__)
		if (CEffectManager::Instance().CanRenderFunction(pkEftInst))
#endif
			pkEftInst->Render();
	}
};