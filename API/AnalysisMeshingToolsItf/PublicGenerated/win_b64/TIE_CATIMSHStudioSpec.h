#ifndef __TIE_CATIMSHStudioSpec
#define __TIE_CATIMSHStudioSpec

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIMSHStudioSpec.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIMSHStudioSpec */
#define declare_TIE_CATIMSHStudioSpec(classe) \
 \
 \
class TIECATIMSHStudioSpec##classe : public CATIMSHStudioSpec \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIMSHStudioSpec, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual CATIMSHStudio * GetStudio() const; \
      virtual void SetStudio ( CATIMSHStudio * Studio ) ; \
      virtual HRESULT GetSupport(CATMSHStGeometryLink * &GeometryLink ); \
      virtual HRESULT SetSupport(CATMSHStGeometryLink * GeometryLink) ; \
      virtual HRESULT GetPartitions(CATMSHStListOfPartitions &Partitions ); \
      virtual HRESULT SetPartitions(CATMSHStListOfPartitions &Partitions) ; \
      virtual HRESULT ComputeMeshCondition( const CATIMSHStPartition * Partition, CATMSHStSpecCondition &Mesh ); \
      virtual int GetImpactMode() const; \
      virtual void SetImpactMode( int WithImpact ); \
      virtual HRESULT GetNumberOfValues ( const CATUnicodeString &iName , int &oNumber ); \
      virtual HRESULT SetLocalSpecification ( const CATUnicodeString &iName, int iNumber, const double iValues[] ); \
      virtual HRESULT GetLocalSpecification ( const CATUnicodeString &iName, int iNumber, double oValues[] ); \
      virtual HRESULT SetLocalSpecification ( const CATUnicodeString &iName, int iNumber , const int iValues[] ); \
      virtual HRESULT GetLocalSpecification ( const CATUnicodeString &iName, int iNumber, int oValues[] ); \
      virtual HRESULT SetLocalSpecification ( const CATUnicodeString &iName, int iNumber, const CATUnicodeString iValue[] ); \
      virtual HRESULT GetLocalSpecification ( const CATUnicodeString &iName, int iNumber, CATUnicodeString oValue[] ); \
      virtual HRESULT SetLocalSpecification ( const CATUnicodeString &iName, const CATMSHStListOfPartitions &iPartitions ); \
      virtual HRESULT GetLocalSpecification ( const CATUnicodeString &iName, CATMSHStListOfPartitions &oPartitions ); \
      virtual HRESULT IsMeshUpToDate( int &oUpToUpdate ) ; \
      virtual HRESULT UpdateSizeMap(CATIMSHSizeMap * iMap, CATIMSHStPartition * Partition=0); \
      virtual int GetSupportDimension() ; \
      virtual HRESULT UpdateMesh( CATIMSHStPartition * Partition=0); \
      virtual int IsExclusivePartition( const CATIMSHStPartition * Partition ); \
      virtual int GetPerpetuity() const; \
      virtual void SetPerpetuity(int Perpetuity) ; \
      virtual unsigned int GetInternalTag () const; \
      virtual void SetInternalTag (unsigned int Tag) ; \
      virtual unsigned int GetExternalTag () const; \
      virtual unsigned int * GetPExternalTag () const; \
      virtual void SetExternalTag (unsigned int Tag) ; \
      virtual void SetAttributesStamp (unsigned int Stamp) ; \
      virtual State GetState () ; \
      virtual void SetState (State) ; \
      virtual HRESULT ComputeState(State &StateSpec); \
      virtual HRESULT ComputeMeshState(CATMSHStMeshState &State); \
      virtual HRESULT SetCompatibility( const CATMSHStSpecCompatibility Compatibility[] ) ; \
      virtual const CATMSHStSpecCompatibility * GetCompatibility() const; \
      virtual CATRep * BuildRep () ; \
      virtual void Dump ( CATTrace * Trace=0 ) const; \
      virtual HRESULT GetName ( CATUnicodeString & Name ) ; \
      virtual void DeleteAttributes () ; \
      virtual HRESULT Load() ; \
      virtual HRESULT LoadAttributes ( CATIMSHLocalSpecification * LocalSpec ) ; \
      virtual CATIMSHStudioSpec * Clone () ; \
      virtual void InvalidComputation () ; \
      virtual HRESULT MigrateData ( int StreamVersion ) ; \
      virtual HRESULT Remove () ; \
      virtual void AddInstanceListener() ; \
      virtual void RemoveInstanceListener() ; \
      virtual void ResetSupport () ; \
};



#define ENVTIEdeclare_CATIMSHStudioSpec(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual CATIMSHStudio * GetStudio() const; \
virtual void SetStudio ( CATIMSHStudio * Studio ) ; \
virtual HRESULT GetSupport(CATMSHStGeometryLink * &GeometryLink ); \
virtual HRESULT SetSupport(CATMSHStGeometryLink * GeometryLink) ; \
virtual HRESULT GetPartitions(CATMSHStListOfPartitions &Partitions ); \
virtual HRESULT SetPartitions(CATMSHStListOfPartitions &Partitions) ; \
virtual HRESULT ComputeMeshCondition( const CATIMSHStPartition * Partition, CATMSHStSpecCondition &Mesh ); \
virtual int GetImpactMode() const; \
virtual void SetImpactMode( int WithImpact ); \
virtual HRESULT GetNumberOfValues ( const CATUnicodeString &iName , int &oNumber ); \
virtual HRESULT SetLocalSpecification ( const CATUnicodeString &iName, int iNumber, const double iValues[] ); \
virtual HRESULT GetLocalSpecification ( const CATUnicodeString &iName, int iNumber, double oValues[] ); \
virtual HRESULT SetLocalSpecification ( const CATUnicodeString &iName, int iNumber , const int iValues[] ); \
virtual HRESULT GetLocalSpecification ( const CATUnicodeString &iName, int iNumber, int oValues[] ); \
virtual HRESULT SetLocalSpecification ( const CATUnicodeString &iName, int iNumber, const CATUnicodeString iValue[] ); \
virtual HRESULT GetLocalSpecification ( const CATUnicodeString &iName, int iNumber, CATUnicodeString oValue[] ); \
virtual HRESULT SetLocalSpecification ( const CATUnicodeString &iName, const CATMSHStListOfPartitions &iPartitions ); \
virtual HRESULT GetLocalSpecification ( const CATUnicodeString &iName, CATMSHStListOfPartitions &oPartitions ); \
virtual HRESULT IsMeshUpToDate( int &oUpToUpdate ) ; \
virtual HRESULT UpdateSizeMap(CATIMSHSizeMap * iMap, CATIMSHStPartition * Partition=0); \
virtual int GetSupportDimension() ; \
virtual HRESULT UpdateMesh( CATIMSHStPartition * Partition=0); \
virtual int IsExclusivePartition( const CATIMSHStPartition * Partition ); \
virtual int GetPerpetuity() const; \
virtual void SetPerpetuity(int Perpetuity) ; \
virtual unsigned int GetInternalTag () const; \
virtual void SetInternalTag (unsigned int Tag) ; \
virtual unsigned int GetExternalTag () const; \
virtual unsigned int * GetPExternalTag () const; \
virtual void SetExternalTag (unsigned int Tag) ; \
virtual void SetAttributesStamp (unsigned int Stamp) ; \
virtual State GetState () ; \
virtual void SetState (State) ; \
virtual HRESULT ComputeState(State &StateSpec); \
virtual HRESULT ComputeMeshState(CATMSHStMeshState &State); \
virtual HRESULT SetCompatibility( const CATMSHStSpecCompatibility Compatibility[] ) ; \
virtual const CATMSHStSpecCompatibility * GetCompatibility() const; \
virtual CATRep * BuildRep () ; \
virtual void Dump ( CATTrace * Trace=0 ) const; \
virtual HRESULT GetName ( CATUnicodeString & Name ) ; \
virtual void DeleteAttributes () ; \
virtual HRESULT Load() ; \
virtual HRESULT LoadAttributes ( CATIMSHLocalSpecification * LocalSpec ) ; \
virtual CATIMSHStudioSpec * Clone () ; \
virtual void InvalidComputation () ; \
virtual HRESULT MigrateData ( int StreamVersion ) ; \
virtual HRESULT Remove () ; \
virtual void AddInstanceListener() ; \
virtual void RemoveInstanceListener() ; \
virtual void ResetSupport () ; \


#define ENVTIEdefine_CATIMSHStudioSpec(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
CATIMSHStudio *  ENVTIEName::GetStudio() const \
{ \
return (ENVTIECALL(CATIMSHStudioSpec,ENVTIETypeLetter,ENVTIELetter)GetStudio()); \
} \
void  ENVTIEName::SetStudio ( CATIMSHStudio * Studio )  \
{ \
 (ENVTIECALL(CATIMSHStudioSpec,ENVTIETypeLetter,ENVTIELetter)SetStudio (Studio )); \
} \
HRESULT  ENVTIEName::GetSupport(CATMSHStGeometryLink * &GeometryLink ) \
{ \
return (ENVTIECALL(CATIMSHStudioSpec,ENVTIETypeLetter,ENVTIELetter)GetSupport(GeometryLink )); \
} \
HRESULT  ENVTIEName::SetSupport(CATMSHStGeometryLink * GeometryLink)  \
{ \
return (ENVTIECALL(CATIMSHStudioSpec,ENVTIETypeLetter,ENVTIELetter)SetSupport(GeometryLink)); \
} \
HRESULT  ENVTIEName::GetPartitions(CATMSHStListOfPartitions &Partitions ) \
{ \
return (ENVTIECALL(CATIMSHStudioSpec,ENVTIETypeLetter,ENVTIELetter)GetPartitions(Partitions )); \
} \
HRESULT  ENVTIEName::SetPartitions(CATMSHStListOfPartitions &Partitions)  \
{ \
return (ENVTIECALL(CATIMSHStudioSpec,ENVTIETypeLetter,ENVTIELetter)SetPartitions(Partitions)); \
} \
HRESULT  ENVTIEName::ComputeMeshCondition( const CATIMSHStPartition * Partition, CATMSHStSpecCondition &Mesh ) \
{ \
return (ENVTIECALL(CATIMSHStudioSpec,ENVTIETypeLetter,ENVTIELetter)ComputeMeshCondition(Partition,Mesh )); \
} \
int  ENVTIEName::GetImpactMode() const \
{ \
return (ENVTIECALL(CATIMSHStudioSpec,ENVTIETypeLetter,ENVTIELetter)GetImpactMode()); \
} \
void  ENVTIEName::SetImpactMode( int WithImpact ) \
{ \
 (ENVTIECALL(CATIMSHStudioSpec,ENVTIETypeLetter,ENVTIELetter)SetImpactMode(WithImpact )); \
} \
HRESULT  ENVTIEName::GetNumberOfValues ( const CATUnicodeString &iName , int &oNumber ) \
{ \
return (ENVTIECALL(CATIMSHStudioSpec,ENVTIETypeLetter,ENVTIELetter)GetNumberOfValues (iName ,oNumber )); \
} \
HRESULT  ENVTIEName::SetLocalSpecification ( const CATUnicodeString &iName, int iNumber, const double iValues[] ) \
{ \
return (ENVTIECALL(CATIMSHStudioSpec,ENVTIETypeLetter,ENVTIELetter)SetLocalSpecification (iName,iNumber,iValues)); \
} \
HRESULT  ENVTIEName::GetLocalSpecification ( const CATUnicodeString &iName, int iNumber, double oValues[] ) \
{ \
return (ENVTIECALL(CATIMSHStudioSpec,ENVTIETypeLetter,ENVTIELetter)GetLocalSpecification (iName,iNumber,oValues)); \
} \
HRESULT  ENVTIEName::SetLocalSpecification ( const CATUnicodeString &iName, int iNumber , const int iValues[] ) \
{ \
return (ENVTIECALL(CATIMSHStudioSpec,ENVTIETypeLetter,ENVTIELetter)SetLocalSpecification (iName,iNumber ,iValues)); \
} \
HRESULT  ENVTIEName::GetLocalSpecification ( const CATUnicodeString &iName, int iNumber, int oValues[] ) \
{ \
return (ENVTIECALL(CATIMSHStudioSpec,ENVTIETypeLetter,ENVTIELetter)GetLocalSpecification (iName,iNumber,oValues)); \
} \
HRESULT  ENVTIEName::SetLocalSpecification ( const CATUnicodeString &iName, int iNumber, const CATUnicodeString iValue[] ) \
{ \
return (ENVTIECALL(CATIMSHStudioSpec,ENVTIETypeLetter,ENVTIELetter)SetLocalSpecification (iName,iNumber,iValue)); \
} \
HRESULT  ENVTIEName::GetLocalSpecification ( const CATUnicodeString &iName, int iNumber, CATUnicodeString oValue[] ) \
{ \
return (ENVTIECALL(CATIMSHStudioSpec,ENVTIETypeLetter,ENVTIELetter)GetLocalSpecification (iName,iNumber,oValue)); \
} \
HRESULT  ENVTIEName::SetLocalSpecification ( const CATUnicodeString &iName, const CATMSHStListOfPartitions &iPartitions ) \
{ \
return (ENVTIECALL(CATIMSHStudioSpec,ENVTIETypeLetter,ENVTIELetter)SetLocalSpecification (iName,iPartitions )); \
} \
HRESULT  ENVTIEName::GetLocalSpecification ( const CATUnicodeString &iName, CATMSHStListOfPartitions &oPartitions ) \
{ \
return (ENVTIECALL(CATIMSHStudioSpec,ENVTIETypeLetter,ENVTIELetter)GetLocalSpecification (iName,oPartitions )); \
} \
HRESULT  ENVTIEName::IsMeshUpToDate( int &oUpToUpdate )  \
{ \
return (ENVTIECALL(CATIMSHStudioSpec,ENVTIETypeLetter,ENVTIELetter)IsMeshUpToDate(oUpToUpdate )); \
} \
HRESULT  ENVTIEName::UpdateSizeMap(CATIMSHSizeMap * iMap, CATIMSHStPartition * Partition) \
{ \
return (ENVTIECALL(CATIMSHStudioSpec,ENVTIETypeLetter,ENVTIELetter)UpdateSizeMap(iMap,Partition)); \
} \
int  ENVTIEName::GetSupportDimension()  \
{ \
return (ENVTIECALL(CATIMSHStudioSpec,ENVTIETypeLetter,ENVTIELetter)GetSupportDimension()); \
} \
HRESULT  ENVTIEName::UpdateMesh( CATIMSHStPartition * Partition) \
{ \
return (ENVTIECALL(CATIMSHStudioSpec,ENVTIETypeLetter,ENVTIELetter)UpdateMesh(Partition)); \
} \
int  ENVTIEName::IsExclusivePartition( const CATIMSHStPartition * Partition ) \
{ \
return (ENVTIECALL(CATIMSHStudioSpec,ENVTIETypeLetter,ENVTIELetter)IsExclusivePartition(Partition )); \
} \
int  ENVTIEName::GetPerpetuity() const \
{ \
return (ENVTIECALL(CATIMSHStudioSpec,ENVTIETypeLetter,ENVTIELetter)GetPerpetuity()); \
} \
void  ENVTIEName::SetPerpetuity(int Perpetuity)  \
{ \
 (ENVTIECALL(CATIMSHStudioSpec,ENVTIETypeLetter,ENVTIELetter)SetPerpetuity(Perpetuity)); \
} \
unsigned int  ENVTIEName::GetInternalTag () const \
{ \
return (ENVTIECALL(CATIMSHStudioSpec,ENVTIETypeLetter,ENVTIELetter)GetInternalTag ()); \
} \
void  ENVTIEName::SetInternalTag (unsigned int Tag)  \
{ \
 (ENVTIECALL(CATIMSHStudioSpec,ENVTIETypeLetter,ENVTIELetter)SetInternalTag (Tag)); \
} \
unsigned int  ENVTIEName::GetExternalTag () const \
{ \
return (ENVTIECALL(CATIMSHStudioSpec,ENVTIETypeLetter,ENVTIELetter)GetExternalTag ()); \
} \
unsigned int *  ENVTIEName::GetPExternalTag () const \
{ \
return (ENVTIECALL(CATIMSHStudioSpec,ENVTIETypeLetter,ENVTIELetter)GetPExternalTag ()); \
} \
void  ENVTIEName::SetExternalTag (unsigned int Tag)  \
{ \
 (ENVTIECALL(CATIMSHStudioSpec,ENVTIETypeLetter,ENVTIELetter)SetExternalTag (Tag)); \
} \
void  ENVTIEName::SetAttributesStamp (unsigned int Stamp)  \
{ \
 (ENVTIECALL(CATIMSHStudioSpec,ENVTIETypeLetter,ENVTIELetter)SetAttributesStamp (Stamp)); \
} \
State  ENVTIEName::GetState ()  \
{ \
return (ENVTIECALL(CATIMSHStudioSpec,ENVTIETypeLetter,ENVTIELetter)GetState ()); \
} \
void  ENVTIEName::SetState (State)  \
{ \
 (ENVTIECALL(CATIMSHStudioSpec,ENVTIETypeLetter,ENVTIELetter)SetState ()); \
} \
HRESULT  ENVTIEName::ComputeState(State &StateSpec) \
{ \
return (ENVTIECALL(CATIMSHStudioSpec,ENVTIETypeLetter,ENVTIELetter)ComputeState(StateSpec)); \
} \
HRESULT  ENVTIEName::ComputeMeshState(CATMSHStMeshState &State) \
{ \
return (ENVTIECALL(CATIMSHStudioSpec,ENVTIETypeLetter,ENVTIELetter)ComputeMeshState(State)); \
} \
HRESULT  ENVTIEName::SetCompatibility( const CATMSHStSpecCompatibility Compatibility[] )  \
{ \
return (ENVTIECALL(CATIMSHStudioSpec,ENVTIETypeLetter,ENVTIELetter)SetCompatibility(Compatibility)); \
} \
const CATMSHStSpecCompatibility *  ENVTIEName::GetCompatibility() const \
{ \
return (ENVTIECALL(CATIMSHStudioSpec,ENVTIETypeLetter,ENVTIELetter)GetCompatibility()); \
} \
CATRep *  ENVTIEName::BuildRep ()  \
{ \
return (ENVTIECALL(CATIMSHStudioSpec,ENVTIETypeLetter,ENVTIELetter)BuildRep ()); \
} \
void  ENVTIEName::Dump ( CATTrace * Trace) const \
{ \
 (ENVTIECALL(CATIMSHStudioSpec,ENVTIETypeLetter,ENVTIELetter)Dump (Trace)); \
} \
HRESULT  ENVTIEName::GetName ( CATUnicodeString & Name )  \
{ \
return (ENVTIECALL(CATIMSHStudioSpec,ENVTIETypeLetter,ENVTIELetter)GetName (Name )); \
} \
void  ENVTIEName::DeleteAttributes ()  \
{ \
 (ENVTIECALL(CATIMSHStudioSpec,ENVTIETypeLetter,ENVTIELetter)DeleteAttributes ()); \
} \
HRESULT  ENVTIEName::Load()  \
{ \
return (ENVTIECALL(CATIMSHStudioSpec,ENVTIETypeLetter,ENVTIELetter)Load()); \
} \
HRESULT  ENVTIEName::LoadAttributes ( CATIMSHLocalSpecification * LocalSpec )  \
{ \
return (ENVTIECALL(CATIMSHStudioSpec,ENVTIETypeLetter,ENVTIELetter)LoadAttributes (LocalSpec )); \
} \
CATIMSHStudioSpec *  ENVTIEName::Clone ()  \
{ \
return (ENVTIECALL(CATIMSHStudioSpec,ENVTIETypeLetter,ENVTIELetter)Clone ()); \
} \
void  ENVTIEName::InvalidComputation ()  \
{ \
 (ENVTIECALL(CATIMSHStudioSpec,ENVTIETypeLetter,ENVTIELetter)InvalidComputation ()); \
} \
HRESULT  ENVTIEName::MigrateData ( int StreamVersion )  \
{ \
return (ENVTIECALL(CATIMSHStudioSpec,ENVTIETypeLetter,ENVTIELetter)MigrateData (StreamVersion )); \
} \
HRESULT  ENVTIEName::Remove ()  \
{ \
return (ENVTIECALL(CATIMSHStudioSpec,ENVTIETypeLetter,ENVTIELetter)Remove ()); \
} \
void  ENVTIEName::AddInstanceListener()  \
{ \
 (ENVTIECALL(CATIMSHStudioSpec,ENVTIETypeLetter,ENVTIELetter)AddInstanceListener()); \
} \
void  ENVTIEName::RemoveInstanceListener()  \
{ \
 (ENVTIECALL(CATIMSHStudioSpec,ENVTIETypeLetter,ENVTIELetter)RemoveInstanceListener()); \
} \
void  ENVTIEName::ResetSupport ()  \
{ \
 (ENVTIECALL(CATIMSHStudioSpec,ENVTIETypeLetter,ENVTIELetter)ResetSupport ()); \
} \


/* Name of the TIE class */
#define class_TIE_CATIMSHStudioSpec(classe)    TIECATIMSHStudioSpec##classe


/* Common methods inside a TIE */
#define common_TIE_CATIMSHStudioSpec(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIMSHStudioSpec, classe) \
 \
 \
CATImplementTIEMethods(CATIMSHStudioSpec, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIMSHStudioSpec, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIMSHStudioSpec, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIMSHStudioSpec, classe) \
 \
CATIMSHStudio *  TIECATIMSHStudioSpec##classe::GetStudio() const \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetStudio()); \
} \
void  TIECATIMSHStudioSpec##classe::SetStudio ( CATIMSHStudio * Studio )  \
{ \
   ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetStudio (Studio ); \
} \
HRESULT  TIECATIMSHStudioSpec##classe::GetSupport(CATMSHStGeometryLink * &GeometryLink ) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetSupport(GeometryLink )); \
} \
HRESULT  TIECATIMSHStudioSpec##classe::SetSupport(CATMSHStGeometryLink * GeometryLink)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetSupport(GeometryLink)); \
} \
HRESULT  TIECATIMSHStudioSpec##classe::GetPartitions(CATMSHStListOfPartitions &Partitions ) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetPartitions(Partitions )); \
} \
HRESULT  TIECATIMSHStudioSpec##classe::SetPartitions(CATMSHStListOfPartitions &Partitions)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetPartitions(Partitions)); \
} \
HRESULT  TIECATIMSHStudioSpec##classe::ComputeMeshCondition( const CATIMSHStPartition * Partition, CATMSHStSpecCondition &Mesh ) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ComputeMeshCondition(Partition,Mesh )); \
} \
int  TIECATIMSHStudioSpec##classe::GetImpactMode() const \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetImpactMode()); \
} \
void  TIECATIMSHStudioSpec##classe::SetImpactMode( int WithImpact ) \
{ \
   ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetImpactMode(WithImpact ); \
} \
HRESULT  TIECATIMSHStudioSpec##classe::GetNumberOfValues ( const CATUnicodeString &iName , int &oNumber ) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetNumberOfValues (iName ,oNumber )); \
} \
HRESULT  TIECATIMSHStudioSpec##classe::SetLocalSpecification ( const CATUnicodeString &iName, int iNumber, const double iValues[] ) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetLocalSpecification (iName,iNumber,iValues)); \
} \
HRESULT  TIECATIMSHStudioSpec##classe::GetLocalSpecification ( const CATUnicodeString &iName, int iNumber, double oValues[] ) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetLocalSpecification (iName,iNumber,oValues)); \
} \
HRESULT  TIECATIMSHStudioSpec##classe::SetLocalSpecification ( const CATUnicodeString &iName, int iNumber , const int iValues[] ) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetLocalSpecification (iName,iNumber ,iValues)); \
} \
HRESULT  TIECATIMSHStudioSpec##classe::GetLocalSpecification ( const CATUnicodeString &iName, int iNumber, int oValues[] ) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetLocalSpecification (iName,iNumber,oValues)); \
} \
HRESULT  TIECATIMSHStudioSpec##classe::SetLocalSpecification ( const CATUnicodeString &iName, int iNumber, const CATUnicodeString iValue[] ) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetLocalSpecification (iName,iNumber,iValue)); \
} \
HRESULT  TIECATIMSHStudioSpec##classe::GetLocalSpecification ( const CATUnicodeString &iName, int iNumber, CATUnicodeString oValue[] ) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetLocalSpecification (iName,iNumber,oValue)); \
} \
HRESULT  TIECATIMSHStudioSpec##classe::SetLocalSpecification ( const CATUnicodeString &iName, const CATMSHStListOfPartitions &iPartitions ) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetLocalSpecification (iName,iPartitions )); \
} \
HRESULT  TIECATIMSHStudioSpec##classe::GetLocalSpecification ( const CATUnicodeString &iName, CATMSHStListOfPartitions &oPartitions ) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetLocalSpecification (iName,oPartitions )); \
} \
HRESULT  TIECATIMSHStudioSpec##classe::IsMeshUpToDate( int &oUpToUpdate )  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->IsMeshUpToDate(oUpToUpdate )); \
} \
HRESULT  TIECATIMSHStudioSpec##classe::UpdateSizeMap(CATIMSHSizeMap * iMap, CATIMSHStPartition * Partition) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->UpdateSizeMap(iMap,Partition)); \
} \
int  TIECATIMSHStudioSpec##classe::GetSupportDimension()  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetSupportDimension()); \
} \
HRESULT  TIECATIMSHStudioSpec##classe::UpdateMesh( CATIMSHStPartition * Partition) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->UpdateMesh(Partition)); \
} \
int  TIECATIMSHStudioSpec##classe::IsExclusivePartition( const CATIMSHStPartition * Partition ) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->IsExclusivePartition(Partition )); \
} \
int  TIECATIMSHStudioSpec##classe::GetPerpetuity() const \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetPerpetuity()); \
} \
void  TIECATIMSHStudioSpec##classe::SetPerpetuity(int Perpetuity)  \
{ \
   ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetPerpetuity(Perpetuity); \
} \
unsigned int  TIECATIMSHStudioSpec##classe::GetInternalTag () const \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetInternalTag ()); \
} \
void  TIECATIMSHStudioSpec##classe::SetInternalTag (unsigned int Tag)  \
{ \
   ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetInternalTag (Tag); \
} \
unsigned int  TIECATIMSHStudioSpec##classe::GetExternalTag () const \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetExternalTag ()); \
} \
unsigned int *  TIECATIMSHStudioSpec##classe::GetPExternalTag () const \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetPExternalTag ()); \
} \
void  TIECATIMSHStudioSpec##classe::SetExternalTag (unsigned int Tag)  \
{ \
   ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetExternalTag (Tag); \
} \
void  TIECATIMSHStudioSpec##classe::SetAttributesStamp (unsigned int Stamp)  \
{ \
   ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetAttributesStamp (Stamp); \
} \
State  TIECATIMSHStudioSpec##classe::GetState ()  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetState ()); \
} \
void  TIECATIMSHStudioSpec##classe::SetState (State)  \
{ \
   ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetState (); \
} \
HRESULT  TIECATIMSHStudioSpec##classe::ComputeState(State &StateSpec) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ComputeState(StateSpec)); \
} \
HRESULT  TIECATIMSHStudioSpec##classe::ComputeMeshState(CATMSHStMeshState &State) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ComputeMeshState(State)); \
} \
HRESULT  TIECATIMSHStudioSpec##classe::SetCompatibility( const CATMSHStSpecCompatibility Compatibility[] )  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetCompatibility(Compatibility)); \
} \
const CATMSHStSpecCompatibility *  TIECATIMSHStudioSpec##classe::GetCompatibility() const \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetCompatibility()); \
} \
CATRep *  TIECATIMSHStudioSpec##classe::BuildRep ()  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->BuildRep ()); \
} \
void  TIECATIMSHStudioSpec##classe::Dump ( CATTrace * Trace) const \
{ \
   ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Dump (Trace); \
} \
HRESULT  TIECATIMSHStudioSpec##classe::GetName ( CATUnicodeString & Name )  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetName (Name )); \
} \
void  TIECATIMSHStudioSpec##classe::DeleteAttributes ()  \
{ \
   ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->DeleteAttributes (); \
} \
HRESULT  TIECATIMSHStudioSpec##classe::Load()  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Load()); \
} \
HRESULT  TIECATIMSHStudioSpec##classe::LoadAttributes ( CATIMSHLocalSpecification * LocalSpec )  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->LoadAttributes (LocalSpec )); \
} \
CATIMSHStudioSpec *  TIECATIMSHStudioSpec##classe::Clone ()  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Clone ()); \
} \
void  TIECATIMSHStudioSpec##classe::InvalidComputation ()  \
{ \
   ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->InvalidComputation (); \
} \
HRESULT  TIECATIMSHStudioSpec##classe::MigrateData ( int StreamVersion )  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->MigrateData (StreamVersion )); \
} \
HRESULT  TIECATIMSHStudioSpec##classe::Remove ()  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Remove ()); \
} \
void  TIECATIMSHStudioSpec##classe::AddInstanceListener()  \
{ \
   ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddInstanceListener(); \
} \
void  TIECATIMSHStudioSpec##classe::RemoveInstanceListener()  \
{ \
   ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->RemoveInstanceListener(); \
} \
void  TIECATIMSHStudioSpec##classe::ResetSupport ()  \
{ \
   ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ResetSupport (); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIMSHStudioSpec(classe) \
 \
 \
declare_TIE_CATIMSHStudioSpec(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIMSHStudioSpec##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIMSHStudioSpec,"CATIMSHStudioSpec",CATIMSHStudioSpec::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIMSHStudioSpec(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIMSHStudioSpec, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIMSHStudioSpec##classe(classe::MetaObject(),CATIMSHStudioSpec::MetaObject(),(void *)CreateTIECATIMSHStudioSpec##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIMSHStudioSpec(classe) \
 \
 \
declare_TIE_CATIMSHStudioSpec(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIMSHStudioSpec##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIMSHStudioSpec,"CATIMSHStudioSpec",CATIMSHStudioSpec::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIMSHStudioSpec(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIMSHStudioSpec, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIMSHStudioSpec##classe(classe::MetaObject(),CATIMSHStudioSpec::MetaObject(),(void *)CreateTIECATIMSHStudioSpec##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIMSHStudioSpec(classe) TIE_CATIMSHStudioSpec(classe)
#else
#define BOA_CATIMSHStudioSpec(classe) CATImplementBOA(CATIMSHStudioSpec, classe)
#endif

#endif
