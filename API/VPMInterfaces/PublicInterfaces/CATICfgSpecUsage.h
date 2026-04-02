//=============================================================================
// COPYRIGHT DASSAULT SYSTEMES 2001
/** @CAA2Required */
/**********************************************************************/
/* DON T DIRECTLY INCLUDE THIS HEADER IN YOUR APPLICATION CODE. IT IS */
/* REQUIRED TO BUILD CAA APPLICATIONS BUT IT MAY DISAPEAR AT ANY TIME */
/**********************************************************************/
//=============================================================================
#ifndef CATICfgSpecUsage_h_
#define CATICfgSpecUsage_h_

// =================================================================
// Includes
// =================================================================

//System
#include "CATBaseUnknown.h"
//Interface ID
#include "GUIDVPMInterfaces.h"


class CATICfgSimpleSpecification_var;
class CATICfgSpecUsage_var;
class CATListValCATICfgComponent_var;
class CATUnicodeString;

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByGUIDVPMInterfaces IID IID_CATICfgSpecUsage ;
#else
extern "C" const IID IID_CATICfgSpecUsage ;
#endif

class ExportedByGUIDVPMInterfaces CATICfgSpecUsage : public CATBaseUnknown {

 
CATDeclareInterface;
public:
     /**
      *
      * SpecUsage name
      *
      **/
    virtual HRESULT GetName(CATUnicodeString &oName) const = 0;     

     /**
      *
      * Retrieve the spec from a <b>SpecUsage</b> 
      *
      **/
     virtual HRESULT GetSpec(CATICfgSimpleSpecification_var& oSpec) const = 0;     

     /**
      *
      * Set the spec from a <b>SpecUsage</b> 
      *
      **/
     virtual HRESULT SetSpec(const CATICfgSimpleSpecification_var& iSpec) = 0;     

     /**
      *
      * Retrieve the path from a <b>SpecUsage</b> 
      *
      **/
     virtual HRESULT GetPath(CATListValCATICfgComponent_var& oList) const = 0;          

     /**
      *
      * Set the path from a <b>SpecUsage</b> 
      *
      **/
     virtual HRESULT SetPath(const CATListValCATICfgComponent_var& iList) = 0;             

     /**
      *
      * Dump a <b>SpecUsage</b> 
      *
      **/
     virtual HRESULT Dump() const = 0;

     virtual int Compare(const CATICfgSpecUsage_var& iSpecToCompare) const = 0;

};
CATDeclareHandler(CATICfgSpecUsage, CATBaseUnknown);

#endif
