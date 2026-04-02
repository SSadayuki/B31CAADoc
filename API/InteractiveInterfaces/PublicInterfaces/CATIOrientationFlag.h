/* -*-c++-*- */
#ifndef CATIOrientationFlag_H
#define CATIOrientationFlag_H
// -------------------------------------------------------------------
// Copyright Dassault Systemes 2001
//---------------------------------------------------------------------
/**
* @CAA2Level L1
* @CAA2Usage U3
*/
#include "CATBaseUnknown.h"

#include "CATInteractiveInterfaces.h"
#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATInteractiveInterfaces IID IID_CATIOrientationFlag;
#else
extern "C" const IID IID_CATIOrientationFlag;
#endif

/**
* Interface to manage the orientation status of an element.
* <b>Role</b>: Use by interactive commands to retrieve
*              the user orientation of an element,
*              and if this element is inverted, to retrieve
*              the inverse feature.
*/
class ExportedByCATInteractiveInterfaces CATIOrientationFlag : public CATBaseUnknown
{
   CATDeclareInterface;
   
public:
   
   /**
   * Gets the inverse status of the element.
   * @return
   *  The inverse status.
   *  <br><b>Legal values</b>: 0:not inverted, 1:inverted, -1:no meaning
   */
   virtual int IsInversed() = 0;

   /**
   * Sets an inverse status on the element.
   * <br><b>Role</b>: Use this method to notify that the default orientation
   * of the geometrical element is not the one desired by the user.<br>
   * In some applications, this will lead to the creation of an inverse
   * element, and in other applications, this will just be used to invert
   * the orientation of material.
   * @param iInverse
   *  The inverse status.
   *  <br><b>Legal values</b>: 0:not inverted, 1:inverted
   */
   virtual void SetInverse(const int iInverse) = 0;
   
   
   /**
   * Gets the inverse element.
   * <br><b>Role</b>: Use this method to retrieve the inverse element
   * created by some applications when the initial element is marked
   * as inverted.
   * @param oInverse
   *  The inverse feature of the element
   * @return
   * <dl>
   * <dt><tt>S_OK</tt><dd> if an inverse element has been found or calculated successfully.
   * <dt><tt>E_FAIL</tt><dd> if there is no inverse for this kind of element.
   * </dl>
   */
   virtual HRESULT GetInverse(CATBaseUnknown_var& oInverse) = 0;
   
};

CATDeclareHandler( CATIOrientationFlag, CATBaseUnknown);

#endif

