/* -*-c++-*- */
// COPYRIGHT DASSAULT SYSTEMES 2000
/** @CAA2Required */
//**********************************************************************
//* DON T DIRECTLY INCLUDE THIS HEADER IN YOUR APPLICATION CODE. IT IS *
//* REQUIRED TO BUILD CAA APPLICATIONS BUT IT MAY DISAPEAR AT ANY TIME *
//**********************************************************************

#ifndef CAT_MAC_FOR_INTERFACE_H
#define CAT_MAC_FOR_INTERFACE_H

#include "CATBaseUnknown.h"

///////////////////////////////////////////////////////////////////////////////
//    PROJET:............CNEXT                                               //
//    FRAMEWORK:.........Object Modeler                                      //
//    AUTEUR:............Jean-Louis MALAVAL                                  //
//    DATE:..............15/04/1996                                          //
//             -----------------------------------------------               //
//    AUTEUR:............Jean-Louis MALAVAL                                  //
//    MODIF:.............New TIE management                                  //
//    DATE:..............05/11/1996                                          //
//                                                                           //
//    AUTEUR:............                                                    //
//    MODIF:.............                                                    //
//    DATE:..............  /  /1996                                          //
///////////////////////////////////////////////////////////////////////////////

// ==========================================================================
//
//           Macro definitions used to define Interfaces
//
// ==========================================================================


// --------------------------------------------------------------------------
//                        Some usefull Macros
// --------------------------------------------------------------------------


// --------------------------------------------------------------------------
//               Macros needed for late typing
// --------------------------------------------------------------------------

#undef CATDeclareLateTyping
#define CATDeclareLateTyping						  \
									  \
private:                                                                  \
static CATMetaClass *  static_meta_object;                               \
static void             InitMeta();                             	  \
									  \
public:                                                         	  \
static CATMetaClass * 	MetaObject();					  \
static CATClassId	ClassName();					  \
static CATBaseUnknown *	CreateItself()


#undef  CATImplementLateTyping
#define CATImplementLateTyping( Class, Typeofclass, Basemeta, Impmeta ) \
									\
/* static method used to initialize the meta-object */          	\
void Class::InitMeta()                                          	\
{                                                                       \
                                                                        \
    /* function that returns the meta_object by name */			\
   ExportedByJS0CORBA CATMetaClass *fct_FindMetaObject(const char *);	\
   /* function that creates a CLSID */					\
   ExportedByJS0CORBA void fct_CreateCLSID(CLSID *);			\
									\
   if (!Class::static_meta_object)					\
   {									\
     CLSID iclsid;							\
     Class::static_meta_object = QueryMetaObject(#Class);		\
     if (!Class::static_meta_object)					\
     {									\
        fct_CreateCLSID(&iclsid);					\
        Class::static_meta_object = fct_FindMetaObject(#Class);		\
        AddDictionary(&iclsid,&CLSID_CATMetaClass,			\
		   #Class,"MetaObject",NULL,(void *)Class::static_meta_object);	\
        Class::static_meta_object->SetClassId(iclsid);			\
     }									\
     else								\
     {									\
	if (!&(Class::static_meta_object->GetClassId()))		\
	{								\
           fct_CreateCLSID(&iclsid);					\
           AddDictionary(&iclsid,&CLSID_CATMetaClass,			\
		   #Class,"MetaObject",NULL,(void *)Class::static_meta_object);	\
           Class::static_meta_object->SetClassId(iclsid);		\
	}								\
     }									\
     Class::static_meta_object->SetTypeOfClass(Implementation);		\
     Class::static_meta_object->SetMetaObjectOfBaseClass(CATImplementationAdapter::MetaObject());	\
     }                                                                    \
}									  \
									  \
CATMetaClass * Class::MetaObject()					  \
{									  \
  Class::InitMeta();							  \
  return (Class::static_meta_object);					  \
}									  \
									  \
Class *CreateClass##Class()						  \
{									  \
   return( NULL ) ;				                	  \
}									  \
									  \
CATClassId Class::ClassName()						  \
{									  \
  Class::InitMeta();							  \
  return (Class::static_meta_object->IsA());				  \
}									  \
									  \
CATBaseUnknown* Class::CreateItself()					  \
{									  \
	MacCreate##Typeofclass(Class)					  \
}									  \
									  \
CATMetaClass *  Class::static_meta_object = NULL                                              


#endif
