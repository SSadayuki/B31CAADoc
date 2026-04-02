/** @CAA2Required */
/*---------------------------------------------------------------------*/
/* DON'T DIRECTLY INCLUDE THIS HEADER IN YOUR APPLICATION CODE. IT IS  */
/* REQUIRED TO BUILD CAA APPLICATIONS BUT IT MAY DISAPPEAR AT ANY TIME */
/*---------------------------------------------------------------------*/

// ------------------------------------------------------------------------------------------------
// COPYRIGHT DASSAULT SYSTEMES  2001
// ------------------------------------------------------------------------------------------------
// SDAI -- C++ Language Binding -- SdaiEntBodyMacro -- Header
// macros for body of instance classes
// ------------------------------------------------------------------------------------------------

#ifndef SDAI_ENT_BODY_MACRO_H
#define SDAI_ENT_BODY_MACRO_H

#include <SdaiEntHeaderMacro.h>

// #define	CNEXT_CAT_CALLABLE
#include <SdaiBinary.h> // for schemas with a binary attribute

// ====================================================================
// =================<< MACROS  DEFINING METHODS >>=====================
// ====================================================================



// ------------------------------------------------------------------------------------------------
// Macro  defining method GET on attribute of SDAI entity
// ------------------------------------------------------------------------------------------------

#define SDAI_GET_ATTR(Schema, Entity, AttrName, AttrType)	\
	AttrType Sdai##Schema##Entity::AttrName()	const {		\
		return SdaiAppInstance::GetAttr(_att##AttrName);						\
	}									\

// ------------------------------------------------------------------------------------------------
// Macro  defining method TEST on attribute of SDAI entity
// ------------------------------------------------------------------------------------------------

#define SDAI_TEST_ATTR(Schema, Entity, AttrName, AttrType)	\
	const SdaiBoolean& Sdai##Schema##Entity::Test##AttrName() const {	\
		return SdaiAppInstance::TestAttr(_att##AttrName);					\
	}


// ------------------------------------------------------------------------------------------------
// MMacro  defining method PUT on attribute of SDAI entity
// ------------------------------------------------------------------------------------------------

#define SDAI_PUT_ATTR(Schema, Entity, AttrName, AttrType)	\
	void Sdai##Schema##Entity::AttrName(AttrType val) {				\
		SdaiAppInstance::PutAttr(_att##AttrName, (SdaiPrimitiveH) val);  \
	}
	

// ------------------------------------------------------------------------------------------------
// Macro  defining method UNSET on attribute of SDAI entity
// ------------------------------------------------------------------------------------------------

#define SDAI_UNSET_ATTR(Schema, Entity, AttrName, AttrType)	\
	void Sdai##Schema##Entity::Unset##AttrName() {				\
		SdaiAppInstance::UnsetAttr(_att##AttrName); \
	}

// ------------------------------------------------------------------------------------------------
// Macro  defining method GET on aggregate attribute of SDAI entity
// ------------------------------------------------------------------------------------------------

#define SDAI_GET_ATTR_AGGR(Schema, Entity, AttrName, AttrType)	\
	AttrType Sdai##Schema##Entity::AttrName()	const {		\
		return (AttrType) (SdaiAggrInstanceH) SdaiAppInstance::GetAttr(_att##AttrName);						\
	}									\

// ------------------------------------------------------------------------------------------------
// Macro  defining method PUT on aggregate attribute of SDAI entity
// ------------------------------------------------------------------------------------------------
#define SDAI_PUT_ATTR_AGGR(Schema, Entity, AttrName, AttrType)	\
	SDAI_PUT_ATTR (Schema,Entity, AttrName, AttrType)  \
//	void	Sdai##Schema##Entity##::##AttrName(SdaiAggrInstanceH val) {	\
//		AttrName((AttrType) val);  \
//	}



// ------------------------------------------------------------------------------------------------
// Macro  defining method CREATEAGGR on aggregate attribute of SDAI entity
// ------------------------------------------------------------------------------------------------
#define SDAI_CREATE_AGGR_ATTR(Schema, Entity, AttrName, AttrType)	\
	AttrType Sdai##Schema##Entity::CreateAggr##AttrName() {	\
		return (AttrType) SdaiAppInstance::CreateAggrInstance(*(SdaiExplicitAttrH*)(&_att##AttrName)) ; \
	}

// ------------------------------------------------------------------------------------------------
// Macro  defining method GET on aggregate attribute of SDAI entity
// ------------------------------------------------------------------------------------------------
#ifdef _WINDOWS_SOURCE
#define SDAI_GET_ATTR_INST(Schema, Entity, AttrName, AttrType)	\
	AttrType##H Sdai##Schema##Entity::AttrName()	const {		\
		SdaiEntityInstanceH _CATSdaival = SdaiAppInstance::GetAttr(_att##AttrName);	  \
		return (AttrType##H)(_CATSdaival); \
									      }
#else
#define SDAI_GET_ATTR_INST(Schema, Entity, AttrName, AttrType)	\
	AttrType##H Sdai##Schema##Entity::AttrName()	const {		\
		SdaiEntityInstanceH _CATSdaival = SdaiAppInstance::GetAttr(_att##AttrName);	  \
		return AttrType::Castdown(_CATSdaival); \
									      }
#endif


// ------------------------------------------------------------------------------------------------
// Macro  defining method GET on select attribute of SDAI entity
// ------------------------------------------------------------------------------------------------

#define SDAI_GET_ATTR_SEL(Schema, Entity, AttrName, AttrType)	\
	const AttrType& Sdai##Schema##Entity::AttrName()	const {		\
		SdaiSelectH _CATSdaisel = SdaiAppInstance::GetAttr(_att##AttrName);	  \
		static AttrType _CATSdaival;		\
		_CATSdaival = _CATSdaisel;		\
		return  _CATSdaival; \
	}	\

// ------------------------------------------------------------------------------------------------
// Macro  defining method GET on enum attribute of SDAI entity
// ------------------------------------------------------------------------------------------------
#ifdef _WINDOWS_SOURCE
#define SDAI_GET_ATTR_ENUM(Schema, Entity, AttrName, AttrType)	\
	const AttrType& Sdai##Schema##Entity::AttrName()	const {		\
		SdaiEnum _CATSdaitheEnum = SdaiAppInstance::GetAttr(_att##AttrName);	  \
		static AttrType _CATSdaival  ;	\
		_CATSdaival =  (AttrType)(_CATSdaitheEnum); 	\
		return _CATSdaival; \
	}
#else
#define SDAI_GET_ATTR_ENUM(Schema, Entity, AttrName, AttrType)	\
	const AttrType& Sdai##Schema##Entity::AttrName()	const {		\
		SdaiEnum _CATSdaitheEnum = SdaiAppInstance::GetAttr(_att##AttrName);	  \
		static AttrType _CATSdaival  ;	\
		_CATSdaival =  AttrType::Castdown(_CATSdaitheEnum); 	\
		return _CATSdaival; \
	}

#endif


// ================================================================================================
//               all general methods
// ================================================================================================

#define SDAI_ENTITY_BODY_START(Schema,Entity, FatherType)               		   \
 const SdaiString& Sdai##Schema##Entity::LeType()			        		   \
   {                          										   \
   static const SdaiString theType = #Entity;                    					   \
   return theType;                       								   \
   }                          										   \
 /* virtual */   const SdaiBoolean& Sdai##Schema##Entity::IsKindOf( const SdaiString& typeName )  const \
   {            											   \
   static const SdaiString &  letype = Sdai##Schema##Entity::LeType();           			   \
   if (&typeName == &letype) return sdaiTRUE ;      							   \
   if(FatherType::IsKindOf(typeName)) return sdaiTRUE;       						   \
   if (typeName == letype) return sdaiTRUE ;      							   \
   return sdaiFALSE ;				      							   \
   }                                                                    \
/* Constructor and Destructor : */ \
	 Sdai##Schema##Entity::Sdai##Schema##Entity ()			\
	: FatherType() { }  \
	SdaiAppInstanceH Sdai##Schema##Entity::Factory() {\
	return new Sdai##Schema##Entity;    \
	}   \
	int Sdai##Schema##Entity::InitDico() {\
		/* if (_schema == NULL) */     \
		{		\
			_schema = SdaiDictionaryRepo::TheOne()->GetSchemaDefinition(SdaiString(#Schema)); \
			if (_schema == NULL) return 0;			\
			_entity = _schema->EntityDefinition(SdaiString(#Entity));  \
			if (_entity == NULL) return 0; 

#define SDAI_STATIC_AFFECT_ATTR(Schema, Entity, AttrName) \
			_att##AttrName = _entity->AttrDefinition(SdaiString(#AttrName));
			
#define SDAI_AGGR_FACTORY(Schema, Entity, AttrName, AggrName) \
			_att##AttrName->InitAggrFactory(AggrName::CreateAggrOf);

#define SDAI_ENTITY_BODY_END(Schema, Entity, FatherType) \
		  }	 \
		   _entity->InitFactory(Sdai##Schema##Entity::Factory);  \
		   return 1; \
	}    \
	Sdai##Schema##Entity##H Sdai##Schema##Entity::CreateInstance(SdaiModelH model)  \
	{  \
		  SdaiAppInstanceH app = _entity->CreateEntityInstance(model);\
		  return (Sdai##Schema##Entity##H) app;   \
	} \
	 Sdai##Schema##Entity::~Sdai##Schema##Entity ()			\
	{ /* empty */ }									\
															 \
	/* Castdown   */   \
	 Sdai##Schema##Entity##H Sdai##Schema##Entity::Castdown(SdaiEntityInstanceH& ent) {		\
		if (ent->IsKindOf(LeType()) != sdaiTRUE) {				\
			char buffer[256] ;						\
			(void)sprintf(buffer,						\
			      "Impossible Castdown of a %s entity into a %s entity",	\
			      (const char *)(ent->GetInstanceTypeName()),		\
			      (const char *)LeType()) ;					\
			SDAI_RAISE_ERROR(sdaiEVALTYPER, buffer);			\
			return (( Sdai##Schema##Entity##H)NULL);			\
		}									\
		return (( Sdai##Schema##Entity##H)ent);				\
	}										\
	const  Sdai##Schema##Entity##H						\
	 Sdai##Schema##Entity::Castdown(const SdaiEntityInstanceH& ent) {	\
		if (ent->IsKindOf(LeType()) != sdaiTRUE) {				\
			char buffer[256] ;						\
			(void)sprintf(buffer,						\
			      "Impossible Castdown of a %s const entity "		\
			      "into a %s const entity",					\
			      (const char *)(ent->GetInstanceTypeName()),		\
			      (const char *)LeType()) ;					\
			SDAI_RAISE_ERROR(sdaiEVALTYPER, buffer);			\
			return ((const  Sdai##Schema##Entity##H)NULL);		\
		}									\
		return ((const  Sdai##Schema##Entity##H)ent);			\
	} \
/* Static initialization */ \
/* --------------------- */ \
SdaiSchemaH Sdai##Schema##Entity::_schema = NULL; \
SdaiEntityH Sdai##Schema##Entity::_entity = NULL;

#define SDAI_STATIC_INIT_ATTR(Schema, Entity,AttrName) \
SdaiAttrH Sdai##Schema##Entity::_att##AttrName = NULL;


// ------------------------------------------------------------------------------------------------
// Macro defining methods associated with simple attribute in SDAI entity
// ------------------------------------------------------------------------------------------------

#define SDAI_ATTR_BODY_SIMPLE(Schema, Entity , AttrName, AttrType)	\
SDAI_GET_ATTR(Schema, Entity, AttrName, AttrType)		\
SDAI_TEST_ATTR(Schema, Entity, AttrName, AttrType)		\
SDAI_PUT_ATTR(Schema, Entity, AttrName, AttrType )	\
SDAI_UNSET_ATTR(Schema, Entity, AttrName, AttrType )

// ------------------------------------------------------------------------------------------------
// Macro defining methods associated with enum attribute in SDAI entity
// ------------------------------------------------------------------------------------------------

#define SDAI_ATTR_BODY_ENUM(Schema, Entity , AttrName, AttrType)	\
SDAI_GET_ATTR_ENUM(Schema, Entity, AttrName, AttrType)		\
SDAI_TEST_ATTR(Schema, Entity, AttrName, const AttrType &)		\
SDAI_PUT_ATTR(Schema, Entity, AttrName, const AttrType & )	\
SDAI_UNSET_ATTR(Schema, Entity, AttrName, const AttrType & )
// ------------------------------------------------------------------------------------------------
// Macro defining methods associated with select attribute in SDAI entity
// ------------------------------------------------------------------------------------------------

#define SDAI_ATTR_BODY_SEL(Schema, Entity , AttrName, AttrType)	\
SDAI_GET_ATTR_SEL(Schema, Entity, AttrName, AttrType)		\
SDAI_TEST_ATTR(Schema, Entity, AttrName, const AttrType &)		\
SDAI_PUT_ATTR(Schema, Entity, AttrName, const AttrType & )	\
SDAI_UNSET_ATTR(Schema, Entity, AttrName, const AttrType & )

// ------------------------------------------------------------------------------------------------
// Macro defining methods associated with reference attribute in SDAI entity
// ------------------------------------------------------------------------------------------------

#define	SDAI_ATTR_BODY_INST(Schema, Entity , AttrName, AttrType)	\
SDAI_GET_ATTR_INST(Schema, Entity, AttrName, AttrType)		\
SDAI_TEST_ATTR(Schema, Entity, AttrName, AttrType##H)		\
SDAI_PUT_ATTR(Schema, Entity, AttrName, AttrType##H )	\
SDAI_UNSET_ATTR(Schema, Entity, AttrName, AttrType##H ) \
	void Sdai##Schema##Entity::AttrName(SdaiEntityInstanceH ent) {		\
		AttrType##H val = (AttrType##H) (ent) ;		\
		if (val != (AttrType##H)0)	AttrName(val) ;				\
	}


// ------------------------------------------------------------------------------------------------
// Macro defining methods associated with aggr. attribute in SDAI entity
// ------------------------------------------------------------------------------------------------

#define	SDAI_ATTR_BODY_AGGR(Schema, Entity , AttrName, AttrType)	\
SDAI_GET_ATTR_AGGR(Schema, Entity, AttrName, AttrType)		\
SDAI_TEST_ATTR(Schema, Entity, AttrName, AttrType)		\
SDAI_PUT_ATTR_AGGR(Schema, Entity, AttrName, AttrType )	\
SDAI_UNSET_ATTR(Schema, Entity, AttrName, AttrType ) \
SDAI_CREATE_AGGR_ATTR(Schema, Entity, AttrName, AttrType)


// ------------------------------------------------------------------------------------------------
// Macro defining methods associated with inverse simple attribute in SDAI entity
// ------------------------------------------------------------------------------------------------

#define	SDAI_ATTR_BODY_INV(Schema, Entity , AttrName, AttrType)	\
SDAI_GET_ATTR_INST(Schema, Entity, AttrName, AttrType)		\
SDAI_TEST_ATTR(Schema, Entity, AttrName, AttrType)

// ------------------------------------------------------------------------------------------------
// Macro defining methods associated with inverse aggr. attribute in SDAI entity
// ------------------------------------------------------------------------------------------------

#define	SDAI_ATTR_BODY_INVAGGR(Schema, Entity , AttrName, AttrType)	\
SDAI_GET_ATTR_AGGR(Schema, Entity, AttrName, AttrType)		\
SDAI_TEST_ATTR(Schema, Entity, AttrName, AttrType)

#endif	/* SDAI_ENT_BODY_MACRO_H*/

