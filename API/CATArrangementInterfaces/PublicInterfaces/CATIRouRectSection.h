#ifndef CATIRouRectSection_H
#define CATIRouRectSection_H
// COPYRIGHT DASSAULT SYSTEMES 1999
/**
  * @CAA2Level L1
  * @CAA2Usage U3
  */


#include "CATArrangementItfCPP.h"
#include "CATIRouSection.h"


#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATArrangementItfCPP IID IID_CATIRouRectSection;
#else
extern "C" const IID IID_CATIRouRectSection;
#endif

/**
 * Interface on a RouRectSection.
 * <b>Role</b>: To get/set the corresponding Height/Width data.
 */

class ExportedByCATArrangementItfCPP CATIRouRectSection : public CATIRouSection 
{

  CATDeclareInterface;

public:

  /**
   * GetWidth.
   * @return
   *   double.
   */  
  virtual HRESULT GetWidth ( double& oWidth) = 0;

  /**
   * @nodoc
   * SetWidth.
   * @return
   *   double.
   */
  virtual HRESULT SetWidth ( const double iWidth) = 0;

  /**
   * GetHeight.
   * @return
   *   double.
   */  
  virtual HRESULT GetHeight ( double& oHeight) = 0;

  /**
   * @nodoc
   * SetHeight.
   * @return
   *   double.
   */
  virtual HRESULT SetHeight ( const double iHeight) = 0;

  /**
   * GetInsideWidth.
   * @return
   *   double.
   */  
  virtual HRESULT GetInsideWidth ( double& oWidth) = 0;

  /**
   * @nodoc
   * SetInsideWidth.
   * @return
   *   double.
   */
  virtual HRESULT SetInsideWidth ( const double iWidth) = 0;

  /**
   * GetInsideHeight.
   * @return
   *   double.
   */  
  virtual HRESULT GetInsideHeight ( double& oHeight) = 0;

  /**
   * @nodoc
   * SetInsideHeight.
   * @return
   *   double.
   */
  virtual HRESULT SetInsideHeight ( const double iHeight) = 0;

};

CATDeclareHandler( CATIRouRectSection, CATBaseUnknown );

#endif
