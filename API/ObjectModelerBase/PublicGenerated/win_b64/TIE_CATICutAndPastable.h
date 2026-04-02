#ifndef __TIE_CATICutAndPastable
#define __TIE_CATICutAndPastable

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATICutAndPastable.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATICutAndPastable */
#define declare_TIE_CATICutAndPastable(classe) \
 \
 \
class TIECATICutAndPastable##classe : public CATICutAndPastable \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATICutAndPastable, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual CATListPtrCATFormat ListExtractFormats() const; \
      virtual int BoundaryExtract(CATListValCATBaseUnknown_var& ioObjectsAlreadyInBoundary, const CATListValCATBaseUnknown_var* iObjectsToAdd=0, const CATFormat* iAnImposedFormat=0) const; \
      virtual CATBaseUnknown_var Extract(CATListValCATBaseUnknown_var& iObjectToCopy, const CATFormat* iAnImposedFormat=0) const; \
      virtual CATListPtrCATFormat ListPasteFormats() const; \
      virtual CATListValCATBaseUnknown_var Paste(CATListValCATBaseUnknown_var& iObjectToCopy, CATListValCATBaseUnknown_var* iToCurObjects=0, const CATFormat* iAnImposedFormat=0); \
      virtual int Create(CATBaseUnknown_Associations& ioAssociationOfObjects, const CATFormat* an_imposed_format=0); \
      virtual int Update      (CATBaseUnknown_Associations& ioAssociationOfObjects, const CATFormat* iAnImposedFormat=0, CATListValCATBaseUnknown_var* iToCurObjects=0); \
      virtual CATListPtrCATFormat ListLinkFormats() const; \
      virtual CATListValCATBaseUnknown_var Link(CATListValCATBaseUnknown_var& object_to_link, CATListValCATBaseUnknown_var* to_cur_objects=0, const CATFormat* an_imposed_format=0); \
      virtual CATListPtrCATFormat ListRemoveFormats() const; \
      virtual int BoundaryRemove(CATListValCATBaseUnknown_var& ioObjectsAlreadyInBoundary, const CATListValCATBaseUnknown_var* iObjectsToRemove=0, const CATFormat* iAnImposedFormat=0) const; \
      virtual int Remove      (CATListValCATBaseUnknown_var& iObjectToRemove, const CATFormat* iAnImposedFormat=0); \
};



#define ENVTIEdeclare_CATICutAndPastable(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual CATListPtrCATFormat ListExtractFormats() const; \
virtual int BoundaryExtract(CATListValCATBaseUnknown_var& ioObjectsAlreadyInBoundary, const CATListValCATBaseUnknown_var* iObjectsToAdd=0, const CATFormat* iAnImposedFormat=0) const; \
virtual CATBaseUnknown_var Extract(CATListValCATBaseUnknown_var& iObjectToCopy, const CATFormat* iAnImposedFormat=0) const; \
virtual CATListPtrCATFormat ListPasteFormats() const; \
virtual CATListValCATBaseUnknown_var Paste(CATListValCATBaseUnknown_var& iObjectToCopy, CATListValCATBaseUnknown_var* iToCurObjects=0, const CATFormat* iAnImposedFormat=0); \
virtual int Create(CATBaseUnknown_Associations& ioAssociationOfObjects, const CATFormat* an_imposed_format=0); \
virtual int Update      (CATBaseUnknown_Associations& ioAssociationOfObjects, const CATFormat* iAnImposedFormat=0, CATListValCATBaseUnknown_var* iToCurObjects=0); \
virtual CATListPtrCATFormat ListLinkFormats() const; \
virtual CATListValCATBaseUnknown_var Link(CATListValCATBaseUnknown_var& object_to_link, CATListValCATBaseUnknown_var* to_cur_objects=0, const CATFormat* an_imposed_format=0); \
virtual CATListPtrCATFormat ListRemoveFormats() const; \
virtual int BoundaryRemove(CATListValCATBaseUnknown_var& ioObjectsAlreadyInBoundary, const CATListValCATBaseUnknown_var* iObjectsToRemove=0, const CATFormat* iAnImposedFormat=0) const; \
virtual int Remove      (CATListValCATBaseUnknown_var& iObjectToRemove, const CATFormat* iAnImposedFormat=0); \


#define ENVTIEdefine_CATICutAndPastable(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
CATListPtrCATFormat  ENVTIEName::ListExtractFormats() const \
{ \
return (ENVTIECALL(CATICutAndPastable,ENVTIETypeLetter,ENVTIELetter)ListExtractFormats()); \
} \
int  ENVTIEName::BoundaryExtract(CATListValCATBaseUnknown_var& ioObjectsAlreadyInBoundary, const CATListValCATBaseUnknown_var* iObjectsToAdd, const CATFormat* iAnImposedFormat) const \
{ \
return (ENVTIECALL(CATICutAndPastable,ENVTIETypeLetter,ENVTIELetter)BoundaryExtract(ioObjectsAlreadyInBoundary,iObjectsToAdd,iAnImposedFormat)); \
} \
CATBaseUnknown_var  ENVTIEName::Extract(CATListValCATBaseUnknown_var& iObjectToCopy, const CATFormat* iAnImposedFormat) const \
{ \
return (ENVTIECALL(CATICutAndPastable,ENVTIETypeLetter,ENVTIELetter)Extract(iObjectToCopy,iAnImposedFormat)); \
} \
CATListPtrCATFormat  ENVTIEName::ListPasteFormats() const \
{ \
return (ENVTIECALL(CATICutAndPastable,ENVTIETypeLetter,ENVTIELetter)ListPasteFormats()); \
} \
CATListValCATBaseUnknown_var  ENVTIEName::Paste(CATListValCATBaseUnknown_var& iObjectToCopy, CATListValCATBaseUnknown_var* iToCurObjects, const CATFormat* iAnImposedFormat) \
{ \
return (ENVTIECALL(CATICutAndPastable,ENVTIETypeLetter,ENVTIELetter)Paste(iObjectToCopy,iToCurObjects,iAnImposedFormat)); \
} \
int  ENVTIEName::Create(CATBaseUnknown_Associations& ioAssociationOfObjects, const CATFormat* an_imposed_format) \
{ \
return (ENVTIECALL(CATICutAndPastable,ENVTIETypeLetter,ENVTIELetter)Create(ioAssociationOfObjects,an_imposed_format)); \
} \
int  ENVTIEName::Update      (CATBaseUnknown_Associations& ioAssociationOfObjects, const CATFormat* iAnImposedFormat, CATListValCATBaseUnknown_var* iToCurObjects) \
{ \
return (ENVTIECALL(CATICutAndPastable,ENVTIETypeLetter,ENVTIELetter)Update      (ioAssociationOfObjects,iAnImposedFormat,iToCurObjects)); \
} \
CATListPtrCATFormat  ENVTIEName::ListLinkFormats() const \
{ \
return (ENVTIECALL(CATICutAndPastable,ENVTIETypeLetter,ENVTIELetter)ListLinkFormats()); \
} \
CATListValCATBaseUnknown_var  ENVTIEName::Link(CATListValCATBaseUnknown_var& object_to_link, CATListValCATBaseUnknown_var* to_cur_objects, const CATFormat* an_imposed_format) \
{ \
return (ENVTIECALL(CATICutAndPastable,ENVTIETypeLetter,ENVTIELetter)Link(object_to_link,to_cur_objects,an_imposed_format)); \
} \
CATListPtrCATFormat  ENVTIEName::ListRemoveFormats() const \
{ \
return (ENVTIECALL(CATICutAndPastable,ENVTIETypeLetter,ENVTIELetter)ListRemoveFormats()); \
} \
int  ENVTIEName::BoundaryRemove(CATListValCATBaseUnknown_var& ioObjectsAlreadyInBoundary, const CATListValCATBaseUnknown_var* iObjectsToRemove, const CATFormat* iAnImposedFormat) const \
{ \
return (ENVTIECALL(CATICutAndPastable,ENVTIETypeLetter,ENVTIELetter)BoundaryRemove(ioObjectsAlreadyInBoundary,iObjectsToRemove,iAnImposedFormat)); \
} \
int  ENVTIEName::Remove      (CATListValCATBaseUnknown_var& iObjectToRemove, const CATFormat* iAnImposedFormat) \
{ \
return (ENVTIECALL(CATICutAndPastable,ENVTIETypeLetter,ENVTIELetter)Remove      (iObjectToRemove,iAnImposedFormat)); \
} \


/* Name of the TIE class */
#define class_TIE_CATICutAndPastable(classe)    TIECATICutAndPastable##classe


/* Common methods inside a TIE */
#define common_TIE_CATICutAndPastable(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATICutAndPastable, classe) \
 \
 \
CATImplementTIEMethods(CATICutAndPastable, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATICutAndPastable, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATICutAndPastable, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATICutAndPastable, classe) \
 \
CATListPtrCATFormat  TIECATICutAndPastable##classe::ListExtractFormats() const \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ListExtractFormats()); \
} \
int  TIECATICutAndPastable##classe::BoundaryExtract(CATListValCATBaseUnknown_var& ioObjectsAlreadyInBoundary, const CATListValCATBaseUnknown_var* iObjectsToAdd, const CATFormat* iAnImposedFormat) const \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->BoundaryExtract(ioObjectsAlreadyInBoundary,iObjectsToAdd,iAnImposedFormat)); \
} \
CATBaseUnknown_var  TIECATICutAndPastable##classe::Extract(CATListValCATBaseUnknown_var& iObjectToCopy, const CATFormat* iAnImposedFormat) const \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Extract(iObjectToCopy,iAnImposedFormat)); \
} \
CATListPtrCATFormat  TIECATICutAndPastable##classe::ListPasteFormats() const \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ListPasteFormats()); \
} \
CATListValCATBaseUnknown_var  TIECATICutAndPastable##classe::Paste(CATListValCATBaseUnknown_var& iObjectToCopy, CATListValCATBaseUnknown_var* iToCurObjects, const CATFormat* iAnImposedFormat) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Paste(iObjectToCopy,iToCurObjects,iAnImposedFormat)); \
} \
int  TIECATICutAndPastable##classe::Create(CATBaseUnknown_Associations& ioAssociationOfObjects, const CATFormat* an_imposed_format) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Create(ioAssociationOfObjects,an_imposed_format)); \
} \
int  TIECATICutAndPastable##classe::Update      (CATBaseUnknown_Associations& ioAssociationOfObjects, const CATFormat* iAnImposedFormat, CATListValCATBaseUnknown_var* iToCurObjects) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Update      (ioAssociationOfObjects,iAnImposedFormat,iToCurObjects)); \
} \
CATListPtrCATFormat  TIECATICutAndPastable##classe::ListLinkFormats() const \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ListLinkFormats()); \
} \
CATListValCATBaseUnknown_var  TIECATICutAndPastable##classe::Link(CATListValCATBaseUnknown_var& object_to_link, CATListValCATBaseUnknown_var* to_cur_objects, const CATFormat* an_imposed_format) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Link(object_to_link,to_cur_objects,an_imposed_format)); \
} \
CATListPtrCATFormat  TIECATICutAndPastable##classe::ListRemoveFormats() const \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ListRemoveFormats()); \
} \
int  TIECATICutAndPastable##classe::BoundaryRemove(CATListValCATBaseUnknown_var& ioObjectsAlreadyInBoundary, const CATListValCATBaseUnknown_var* iObjectsToRemove, const CATFormat* iAnImposedFormat) const \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->BoundaryRemove(ioObjectsAlreadyInBoundary,iObjectsToRemove,iAnImposedFormat)); \
} \
int  TIECATICutAndPastable##classe::Remove      (CATListValCATBaseUnknown_var& iObjectToRemove, const CATFormat* iAnImposedFormat) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Remove      (iObjectToRemove,iAnImposedFormat)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATICutAndPastable(classe) \
 \
 \
declare_TIE_CATICutAndPastable(classe) \
 \
 \
CATMetaClass * __stdcall TIECATICutAndPastable##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATICutAndPastable,"CATICutAndPastable",CATICutAndPastable::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATICutAndPastable(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATICutAndPastable, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATICutAndPastable##classe(classe::MetaObject(),CATICutAndPastable::MetaObject(),(void *)CreateTIECATICutAndPastable##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATICutAndPastable(classe) \
 \
 \
declare_TIE_CATICutAndPastable(classe) \
 \
 \
CATMetaClass * __stdcall TIECATICutAndPastable##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATICutAndPastable,"CATICutAndPastable",CATICutAndPastable::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATICutAndPastable(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATICutAndPastable, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATICutAndPastable##classe(classe::MetaObject(),CATICutAndPastable::MetaObject(),(void *)CreateTIECATICutAndPastable##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATICutAndPastable(classe) TIE_CATICutAndPastable(classe)
#else
#define BOA_CATICutAndPastable(classe) CATImplementBOA(CATICutAndPastable, classe)
#endif

#endif
