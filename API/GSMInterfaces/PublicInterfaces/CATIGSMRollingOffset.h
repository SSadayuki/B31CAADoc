#ifndef CATIGSMRollingOffset_H
#define CATIGSMRollingOffset_H

// COPYRIGHT DASSAULT SYSTEMES 2000

/**
 * @CAA2Level L0
 * @CAA2Usage U0
 */

//__________________________________________________________________
//
//                         CATIGSMRollingOffset
//__________________________________________________________________
//
// Interface du RollingOffset.
// - SPECIFIC MICHELIN -
// 
//______________________________________________________Nov-2000____

//___Prereqs________________________________________________________
#include "CATGitInterfacesExportedBy.h"
#include "CATDataType.h"
#include "CATISpecObject.h"
#include "CATICkeParm.h"

//___IID____________________________________________________________
#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATGitInterfaces IID  IID_CATIGSMRollingOffset;
#else
extern "C" const IID   IID_CATIGSMRollingOffset;
#endif

/**
 * Rolling Offset.
 * <b>Role</b>: 
 * Gets, sets the Rolling Offset definition elements
 * @see CATIGSMFactory#CreateRollingOffset
 */
class ExportedByCATGitInterfaces CATIGSMRollingOffset : public CATBaseUnknown
{
 CATDeclareInterface;
public: 
 
 /** 
  * Gets the reference list of curves.
  *   @param oElem
  *      the reference list of curves
  */
 virtual    HRESULT GetCurves(CATLISTV(CATISpecObject_var)& oElem)=0;
 
 /**
  * Gets the support of the curve(s).
  *   @param oSupport
  *      new curve support
  */
 virtual    HRESULT GetSupport(CATISpecObject_var & oSupport)=0;
 
 /**
  * Gets the offset value.
  *   @param oOffset
  *      Offset value
  */
 virtual    HRESULT GetOffset(double & oOffset)=0;
 
 /**
  * Gets the offset value.
  *   @param oOffValue
  *      Offset value
  */
 virtual    HRESULT GetOffset(CATICkeParm_var & oOffset)=0;

 /**
  * Gets the Geodesic mode.
  *   @param oGeodesic
  *     False : Euclidian mode
  *     True  : Geodesic mode
  */ 
 //virtual    HRESULT  GetGeodesic(CATBoolean & oGeodesic)=0;

 /**
  * Set a Curve to the list of curves.
  *   @param iElem
  *      if the curve iElem is already in list, it is removed
  *      else it is appended.
  */
 virtual HRESULT SetCurve(const CATISpecObject_var& iElem)=0;

 /**
  * Appends a Curve to the reference list of curves.
  *   @param iElem
  *      the curve to append.
  */
 virtual HRESULT AppendCurve(const CATISpecObject_var& iElem)=0;

 /**
  * Removes a Curve to the reference list of curves.
  *   @param iElem
  *      the curve to remove.
  */
 virtual    HRESULT RemoveCurve(const CATISpecObject_var& iElem)=0;

 /**
  * Removes the Curve at the position i to the reference list of curves.
  *   @param i
  *      the position of the curve to remove.
  */
 virtual    HRESULT RemoveCurve(const CATLONG32 i)=0;
 
 /** 
  * Sets the reference support.
  *   @param iSupport
  *      new curve support
  */
 virtual    HRESULT SetSupport(const CATISpecObject_var iSupport)=0;
 
 /**
  * Sets the offset value.
  *   @param iOffset
  *      Offset value
  */
 virtual    HRESULT SetOffset(const double iOffset)=0;
 
 /**
  * Sets the offset value.
  *   @param iOffset
  *      Offset value
  */
 virtual    HRESULT SetOffset(const CATICkeParm_var iOffset)=0;

 /**
  * Sets the Geodesic mode. 
  *   @param iGeodesic
  *     False : Euclidian mode
  *     True : Geodesic mode
  */
 //virtual    HRESULT SetGeodesic(CATBoolean iGeodesic)=0;

};
CATDeclareHandler (CATIGSMRollingOffset, CATBaseUnknown);
#endif
