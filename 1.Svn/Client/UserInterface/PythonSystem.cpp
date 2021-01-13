//Find
		else if (!stricmp(command, "SHOW_SALESTEXT"))
			m_Config.bShowSalesText = atoi(value) == 1 ? true : false;
			
///Add
#if defined(__BL_HIDE_EFFECT__)
		else if (!stricmp(command, "HIDE_BUFF_EFFECT"))
			CEffectManager::Instance().SetEffectOption(CEffectManager::EFFECT_OPTION_BUFF, (atoi(value) == 1));
		else if (!stricmp(command, "HIDE_SKILL_EFFECT"))
			CEffectManager::Instance().SetEffectOption(CEffectManager::EFFECT_OPTION_SKILL, (atoi(value) == 1));
#endif

//Find
	fprintf(fp, "SHADOW_LEVEL			%d\n", m_Config.iShadowLevel);
	
///Add
#if defined(__BL_HIDE_EFFECT__)
	fprintf(fp, "HIDE_BUFF_EFFECT		%d\n", CEffectManager::Instance().GetEffectOption(CEffectManager::EFFECT_OPTION_BUFF));
	fprintf(fp, "HIDE_SKILL_EFFECT		%d\n", CEffectManager::Instance().GetEffectOption(CEffectManager::EFFECT_OPTION_SKILL));
#endif