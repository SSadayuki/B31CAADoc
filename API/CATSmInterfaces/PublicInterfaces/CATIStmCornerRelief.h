/* -*-c++-*- */
#ifndef CATIStmCornerRelief_H
#define CATIStmCornerRelief_H

// COPYRIGHT DASSAULT SYSTEMES  1999

/**
 * @CAA2Level L0
 * @CAA2Usage U0
 */ 
#include "CATBaseUnknown.h"
#include "ExportedByCATSmInterfaces.h"
#include "CATLISTV_CATISpecObject.h"

class CATISpecObject_var;
class CATPoint_var;
class CATBody_var;

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATSmInterfaces IID IID_CATIStmCornerRelief;
#else
extern "C" const IID IID_CATIStmCornerRelief ;
#endif

/**
 * Interface representing the CornerRelief feature.
 */

class ExportedByCATSmInterfaces CATIStmCornerRelief : public CATBaseUnknown
  {
	CATDeclareInterface;
	
  public:
    
    /**
     * Retrieves the Supports ( 2 "Bends" )
     *
     * @param oSupportList
     *   Specifications of the Supports : Surfacic Flange, Bend or Flange.
     */    
    virtual HRESULT GetSupports (CATListValCATISpecObject_var & oSupportList) = 0;       
     
    /**
     * Retrieves the Support option
     *
     * @param oRedefintion
     *   = FALSE : NO redefinition
     *   = TRUE  : Redefinition ( Sides of the Surfacic Flanges impacted are recomputed )
     */
    virtual HRESULT GetSupportOption (CATBoolean & oRedefintion) = 0;
        
    /**
     * Retrieves the Profile Type
     *
     * @param oType
     *   = 1 : User Sketch
     *   = 2 : Circular profile with center defined by the Supports bend axis intersection
     *   = 3 : Circular profile with center defined by a Point
     */
    virtual HRESULT GetProfileType (int & oType) = 0;
       
    /**
     * Retrieves the User Profile spec if Profile Type = 1
     *
     * @param oProfileSpec
     *   a CATISpecObject : the specification of the Profile (a Sketch or a User defined feature)
     */
    virtual HRESULT GetUserProfile (CATISpecObject_var & ohProfileSpec) = 0;
       
    /**
     * Computes the circular Profile center if Profile Type = 2
     *
     * @param ohProfileCenter
     *   a CATPoint : the center of the circular Profile (-> Supports bend axis intersection )
     */
    virtual HRESULT ComputeCircularProfileCenter (CATPoint_var & ohProfileCenter) = 0;
        
    /**
     * Retrieves the circular Profile center if Profile Type = 3
     *
     * @param ohProfileCenter
     *   a CATPoint : the center of the circular Profile
     */
    virtual HRESULT GetCircularProfileCenter (CATPoint_var & ohProfileCenter) = 0;
    
    /**
     * Retrieves the Relief Profile result ( a wire ) in the definition view ( -> UnFolded view )
     *
     * @param ohProfile
     *   CATBody : a planar Wire.
     */    
    virtual HRESULT GetProfileResult (CATBody_var & ohProfile) = 0;
  };

CATDeclareHandler (CATIStmCornerRelief, CATBaseUnknown);

#endif
