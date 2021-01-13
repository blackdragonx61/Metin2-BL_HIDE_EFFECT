///Add
#if defined(__BL_HIDE_EFFECT__)
#include "../EffectLib/EffectManager.h"
PyObject* systemGetBLEffectOption(PyObject* poSelf, PyObject* poArgs)
{
	int idx;
	if (!PyTuple_GetInteger(poArgs, 0, &idx))
		return Py_BuildException();

	return Py_BuildValue("i", CEffectManager::Instance().GetEffectOption(idx));
}

PyObject* systemSetBLEffectOption(PyObject* poSelf, PyObject* poArgs)
{
	int idx; 
	if (!PyTuple_GetInteger(poArgs, 0, &idx))
		return Py_BuildException();

	bool ret;
	if (!PyTuple_GetBoolean(poArgs, 1, &ret))
		return Py_BuildException();

	CEffectManager::Instance().SetEffectOption(idx, ret);
	return Py_BuildNone();
}
#endif

//Find
		{ "IsShowSalesText",			systemIsShowSalesText,			METH_VARARGS },
	
///Add
#if defined(__BL_HIDE_EFFECT__)
		{ "SetBLEffectOption",			systemSetBLEffectOption,		METH_VARARGS },
		{ "GetBLEffectOption",			systemGetBLEffectOption,		METH_VARARGS },
#endif