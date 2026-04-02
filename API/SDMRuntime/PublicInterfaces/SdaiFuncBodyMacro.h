/** @CAA2Required */
/*---------------------------------------------------------------------*/
/* DON'T DIRECTLY INCLUDE THIS HEADER IN YOUR APPLICATION CODE. IT IS  */
/* REQUIRED TO BUILD CAA APPLICATIONS BUT IT MAY DISAPPEAR AT ANY TIME */
/*---------------------------------------------------------------------*/

// ------------------------------------------------------------------------------------------------
// COPYRIGHT DASSAULT SYSTEMES  2001
// ------------------------------------------------------------------------------------------------
// SDAI -- C++ Language Binding -- SdaiFuncBodyMacro -- Header
// macro for initialization of global function in dictionary
// ------------------------------------------------------------------------------------------------

#ifndef SDAI_FUNC_BODY_MACRO_H
#define SDAI_FUNC_BODY_MACRO_H

//#include <SdaiSchema.h>
//#include <SdaiDefinedType.h>
//#include <SdaiUnderlyingTypeH.h>
#include <SdaiLogical.h>
#include <SdaiBoolean.h>
//#include <SdaiGlobalFunction.h>
//#include <SdaiDictionaryRepo.h>

#define SDAI_FUNC_INIT(Schema, Function)		\
int CATSdai##Schema##Function##_InitDico()  {return 0;}	

//int CATSdai##Schema##Function##_InitDico()	\
//{											\
//	static SdaiSchema* _schema = NULL;				\
//	/* if (_schema == NULL) */				\
//	{										\
//		_schema = SdaiDictionaryRepo::TheOne()->GetSchemaDefinition(SdaiString(#Schema)); \
//		if (_schema == NULL) return 1;			\
//		SdaiGlobalFunction*_function = _schema->GetGlobalFunction(SdaiString(#Function));  \
//		if (_function == NULL) return 2;			\
//		_function->Set_PTR_LBCALL(CATSdai_LB_CALL_##Schema##Function);		\
//	}										\
//	return 0;								\
//}											\

#endif
