#ifndef CATISamImageAxisSystem_H
#define CATISamImageAxisSystem_H
//=============================================================================
// COPYRIGHT DASSAULT SYSTEMES 2001
//=============================================================================
//
// CATISamImageAxisSystem : interface designed to specify the current
//                          axis system to be used for image creation
//
//=============================================================================
// 14/11/01 Creation
//=============================================================================

/**
  * @CAA2Level L1
  * @CAA2Usage U3
  */

#include "CATBaseUnknown.h"

// prereqs Mathematics 
#include "CATMathAxis.h"

// prereqs SamVisuInterfaces
#include "CATSamCoordinateSystem.h"
#include "CATSamAxisSystemType.h"
class CATISamAnalysisAxis_var;
class CATILinkableObject_var;

// System
#include "CATUnicodeString.h"

#include "CATSamVisuUUID.h"

extern "C" const IID IID_CATISamImageAxisSystem;

/**
 * Analysis Images modification.
 * <b>Role: </b> Analysis <i>Images</i> are computed by default in the global axis system.<br>
 * Query this interface to modify the axis system ( definition, coordinate system, ...)
 */ 

class ExportedByCATSamVisuUUID CATISamImageAxisSystem : public CATBaseUnknown
{
  CATDeclareInterface;

  public :

  /**
    * Retrieves the current axis system type used for image computation <br>
    * @param oAxisType
    * the type of definition for the current axis system ( manual , user , ... )
    * @see CATSamAxisSystemType
    */
  virtual HRESULT GetAxisSystemType ( CATSamAxisSystemType & oAxisType ) = 0;

  /**
    * Retrieves the current axis system NLS type used for image computation <br>
    * @param oAxisType
    * the NLS string associated to the axis system type
    */
  virtual HRESULT GetAxisSystemType ( CATUnicodeString & oAxisType ) = 0;

  /**
    * Set the current axis system type
    * @param iAxisType
    * the type of definition for the current axis system ( manual , user , ... )
    * @see CATSamAxisSystemType
    */
  virtual HRESULT SetAxisSystemType ( CATSamAxisSystemType iAxisType ) = 0;

  /**
    * Retrieves the current coordinate system type
    * @param oCoordSystem
    * to know if the axis is cartesian,cylindrical or spherical
    * @see CATSamCoordinateSystem
    */
  virtual HRESULT GetCoordinateSystem ( CATSamCoordinateSystem & oCoordSystem ) = 0;

  /**
    * Set the current coordinate system type
    * @param oCoordSystem
    * to know if the axis is cartesian,cylindrical or spherical
    * @see CATSamCoordinateSystem
    */
  virtual HRESULT SetCoordinateSystem ( CATSamCoordinateSystem iCoordSystem ) = 0;

  /**
    * Retrieves the mathematical definition of the current axis system. <br>
    * Origin coordinates is given in MKS unit.
    * @param oAxis
    * a reference to a CATMathAxis that will be filled with the current axis system definition
    * @see CATMathAxis
    */
  virtual HRESULT GetAxisSystemDef ( CATMathAxis & oAxis ) = 0;

  /**
    * Set the mathematical definition of the current axis system for <b>"Manual"</b> axis system.<br>
    * Origin coordinates must be given in MKS unit.
    * @param oAxis
    * a reference to a CATMathAxis
    * @see CATMathAxis
    */
  virtual HRESULT SetAxisSystemDef ( const CATMathAxis & iAxis ) = 0;

  /**
    * Retrieves the pointed CATISamAnalysisAxis object for <b>"User"</b> axis system.
    * @param oUserAxis
    * a handler on a CATISamAnalysisAxis interface.
    * @see CATISamAnalysisAxis
    */
  virtual HRESULT GetUserAxisSystem ( CATISamAnalysisAxis_var & oUserAxis) = 0;

  /**
    * Retrieves the pointed CATISamAnalysisAxis or CATIPrdPublication object for <b>"User"</b> axis system.
    * @param oUserAxis
    * a handler on a the User axis system.
    * @param oLinkedPrd
    * a handler on the CATILinkableObject for positionning.
    * @see CATISamAnalysisAxis
    */
  virtual HRESULT GetUserAxisSystem ( CATBaseUnknown_var & oUserAxis , CATILinkableObject_var & oLinkedPrd ) = 0;

  /**
    * Sets the pointed CATISamAnalysisAxis object for <b>"User"</b> axis system.
    * @param iUserAxis
    * a handler on the pointed axis system which can be a CATISamAnalysisAxis or CATIPrdPublication. <br>
    * Note that only the origin and vectors definitions are taken into account. 
    * @param iLinkedPrd
    * a handler on the CATILinkableObject for positionning.
    * @see CATISamAnalysisAxis
    */
  virtual HRESULT SetUserAxisSystem ( CATBaseUnknown_var iUserAxis , CATILinkableObject_var iLinkedPrd ) = 0;
};

CATDeclareHandler ( CATISamImageAxisSystem , CATBaseUnknown );

#endif
