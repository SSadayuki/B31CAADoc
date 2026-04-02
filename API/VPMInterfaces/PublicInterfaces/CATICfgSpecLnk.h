//=============================================================================
// COPYRIGHT DASSAULT SYSTEMES 2001
/** @CAA2Required */
/**********************************************************************/
/* DON T DIRECTLY INCLUDE THIS HEADER IN YOUR APPLICATION CODE. IT IS */
/* REQUIRED TO BUILD CAA APPLICATIONS BUT IT MAY DISAPEAR AT ANY TIME */
/**********************************************************************/
//=============================================================================
#ifndef CATICfgSpecLnk_h
#define CATICfgSpecLnk_h

//==============================================
// INTERFACES 
// BUT : Permettre le Lien entre la Specification et le CO ou CV
//===============================================
//===============================================
// INCLUDES
//===============================================
#include "CATBaseUnknown.h"
#include "GUIDVPMInterfaces.h"

// 
//===============================================
// -- forward declaration
//===============================================
class CATListValCATICfgSpecLnk_var;
class CATICfgSimpleSpecification_var;

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByGUIDVPMInterfaces IID IID_CATICfgSpecLnk ;
#else
extern "C" const IID IID_CATICfgSpecLnk ;
#endif

class ExportedByGUIDVPMInterfaces CATICfgSpecLnk : public CATBaseUnknown {
  CATDeclareInterface;
    public:

        /** @nodoc */
        enum Type {replaceable_standard, non_replaceable_standard, availability, identification, option};


        //Define the relation between specification and CO or CV
        /** @nodoc */
        virtual HRESULT SetSpecLnkType(CATICfgSpecLnk::Type iLnkType)=0;
        /** @nodoc */
        virtual HRESULT GetSpecLnkType(CATICfgSpecLnk::Type &oLnkType)=0;

        // Manage the Package definition
        /** @nodoc */
        virtual HRESULT SetPackageDef(CATListValCATICfgSpecLnk_var& iSpecLnkList)=0;
        /** @nodoc */
        virtual HRESULT GetPackageDef(CATListValCATICfgSpecLnk_var& oSpecLnkList)=0;
        /** @nodoc */
        virtual HRESULT ResetPackageDef()=0;

        //----------------------------------------------------------------
        // Retourne la specification associee     
        //----------------------------------------------------------------
        /** @nodoc */
        virtual HRESULT GetSpec(CATICfgSimpleSpecification_var &oSpecification)=0;

        /** @nodoc */
        virtual HRESULT Delete()=0;

};
//-----------------------------------------------------------------
// Handler definition 
//-----------------------------------------------------------------
CATDeclareHandler(CATICfgSpecLnk, CATBaseUnknown);

#endif

