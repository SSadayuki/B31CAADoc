// COPYRIGHT Dassault Systemes Provence 2007
//===================================================================
//
// CATICldCAATessellateOper.h
// Define the CATICldCAATessellateOper interface
//
//===================================================================
//
// Usage notes:
//   New interface: describe its use here
//
//===================================================================
#ifndef CATICldCAATessellateOper_H
#define CATICldCAATessellateOper_H

/**
 * @CAA2Level L0
 * @CAA2Usage U0
 */ 

#include "ExportedByCATCloudEditorInterfaces.h"
#include "CATBaseUnknown.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATCloudEditorInterfaces IID IID_CATICldCAATessellateOper;
#else
extern "C" const IID IID_CATICldCAATessellateOper ;
#endif

class CATBody ;
class CATCldBody ;

class ExportedByCATCloudEditorInterfaces CATICldCAATessellateOper: public CATBaseUnknown
{

  CATDeclareInterface ;

public:

  /**
   * Sets the sag.
   * @param iSag
   *   The maximum distance between an edge and the object to tessellate.
   */
  virtual HRESULT SetSag (const double iSag) = 0 ;

  /**
   * Sets the maximum length.
   * @param iMaxLength
   *   The maximum length of an edge.
   */
  virtual HRESULT SetMaxLength (const double iMaxLength) = 0 ;

  /**
   * Sets the body to tessellate.
   * @param iBody
   *   The <tt>CATBody</tt> to tessellate.
   */
  virtual HRESULT SetBody (CATBody * iBody) = 0 ;

  /**
   * Runs the operator and performs the tessellation.
   */
  virtual HRESULT Run () = 0 ;

  /**
   * Returns a pointer to the resulting CATCldBody.
   * <br> Must be called after the <tt>Run</tt> method.
   * @return
   * The pointer to the resulting body. Use @href CATICGMContainer#Remove if you do not want to keep it.
   */
   virtual CATCldBody * GetResult () = 0 ;

};

CATDeclareHandler (CATICldCAATessellateOper, CATBaseUnknown) ;

#endif
