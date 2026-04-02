#ifndef CATIRouSection_H
#define CATIRouSection_H
// COPYRIGHT DASSAULT SYSTEMES 1999
/**
  * @CAA2Level L1
  * @CAA2Usage U3
  */

#include "CATArrangementItfCPP.h"

#include "CATBaseUnknown.h"

#include "CATRouSetPointNames.h"
#include "CATRouSectionTypes.h"
#include "CATCkeListOfInterface.h"

class CATMathLine;
class CATMathPlane;
class CATIMovable_var;

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATArrangementItfCPP IID IID_CATIRouSection;
#else
extern "C" const IID IID_CATIRouSection;
#endif

/**
 * Interface to the Section subobject of a Routable String.
 * <b>Role:</b>
 * The Section is optional in a String, and defines the cross sectional
 * shape of this String.
 */  
class ExportedByCATArrangementItfCPP CATIRouSection : public CATBaseUnknown
{

  CATDeclareInterface;

public:

  /**
   * Retrieve the type of shape for this Section.
   * @param oType  
   *   The type of shape of this section.
   */  
  virtual HRESULT GetSectionType ( CATRouSectionTypes& oType ) = 0;

  /**
   * @nodoc
   * Compute the requested SetPoint line geometry given the necessary 
   * geometry and parameters for a linear segment using this Section.
   * @param iSupportLine  
   *   The support line for a segment.
   * @param iOrientation 
   *   The orientation (clocking) plane of the segment  
   * @param iCurrentPointName  
   *   The current set point that positions the Section relative to the 
   *   support line.
   * @param Dx, Dy, Angle  
   *   The position of the current section setpoint with respect to the 
   *   support line.
   * @param iWantPointName  
   *   The new line is to go through this set point.
   * @param oLine  
   *   The resultant line parallel to the suppport line that goes through iWantPointName  
   */  
  virtual HRESULT GetSetPointLine ( const CATMathLine& iSupportLine, 
                                    const CATMathPlane& iOrientation,
                                    const CATRouSetPointNames iCurrentPointName,
                                    const double iDx, const double iDy,
                                    const double iAngle, 
                                    const CATRouSetPointNames iWantPointName, 
                                    CATMathLine& oLine ) = 0;
  /**
   * @nodoc
   * ListParams
   * @param oListParams
   *   A list of CKE parameters
   */  
  virtual HRESULT ListParams ( CATCkeListOf(Parm)& oListParams ) = 0;

  // Depreciated (desupported)
  /** @nodoc */
  virtual HRESULT GetSetPointLine ( const CATMathLine& iSupportLine, 
                                    const CATMathPlane& iOrientation,
                                    const CATRouSetPointNames iCurrentPointName,
                                    const double iDx, const double iDy,
                                    const double iAngle, 
                                    const CATRouSetPointNames iWantPointName, 
                                    const CATIMovable_var &ihRelAxis,
                                    CATMathLine& oLine ) = 0;
};

CATDeclareHandler( CATIRouSection, CATBaseUnknown );

#endif
