#ifndef CATIRouRadiusCornerSection_H
#define CATIRouRadiusCornerSection_H
// COPYRIGHT DASSAULT SYSTEMES 1999
/**
  * @CAA2Level L1
  * @CAA2Usage U3
  */


#include "CATArrangementItfCPP.h"
#include "CATIRouRectSection.h"


#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATArrangementItfCPP IID IID_CATIRouRadiusCornerSection;
#else
extern "C" const IID IID_CATIRouRadiusCornerSection;
#endif

/**
 * Interface on a RadiusCornerSection.
 * <b>Role</b>: To get/set the corresponding radius data.
 */

class ExportedByCATArrangementItfCPP CATIRouRadiusCornerSection : public CATIRouRectSection 
{

  CATDeclareInterface;

public:


  /**   
   * GetRadiusCorner.
   * @param oRadiusCorner
   *   The length of the outside radius at the corner of the section.
   */  
  virtual HRESULT GetRadiusCorner ( double& oRadiusCorner) = 0;

  /**
   * @nodoc
   * SetRadiusCorner.
   * @param iRadiusCorner
   *   The length of the outside radius at the corner of the section.
   */
  virtual HRESULT SetRadiusCorner ( const double iRadiusCorner) = 0;

  /**
   * GetInsideRadiusCorner.
   * @param oInsideRadiusCorner
   *   The length of the inside radius at the corner of the section.
   */  
  virtual HRESULT GetInsideRadiusCorner ( double& oInsideRadiusCorner) = 0;

  /**
   * @nodoc
   * SetInsideRadiusCorner.
   * @param iInsideRadiusCorner
   *   The length of the inside radius at the corner of the section.
   */
  virtual HRESULT SetInsideRadiusCorner ( const double iInsideRadiusCorner) = 0;
};

CATDeclareHandler( CATIRouRadiusCornerSection, CATBaseUnknown );

#endif
