#ifndef CATISchCompGraphic_H
#define CATISchCompGraphic_H

//	COPYRIGHT DASSAULT SYSTEMES 2000

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

// System
#include "IUnknown.h"
#include "CATBooleanDef.h"
#include "CATUnicodeString.h"

class CATISchGRRComp;
class CATIUnknownList;

extern "C" const IID IID_CATISchCompGraphic ;

/**
 * Interface to manage Schematic component's association with its
 * graphical representations.  
 * <b>Role</b>: To modify component's links to its
 * graphical representations.
 */
class CATISchCompGraphic : public IUnknown
{
  public:   
  
  /**
  * Add a graphical representation to a component.
  * @param iGRRToAdd
  *   The graphical representation to be added to the component.
  * @return
  *   An HRESULT value.
  *   <br><b>Legal values</b>:
  *   <dl>
  *     <dt>S_OK</dt>
  *     <dd>operation is successful</dd>
  *     <dt>E_FAIL</dt>
  *     <dd>operation failed</dd>
  *   </dl>
  */
  virtual HRESULT AddGraphicalRepresentation (CATISchGRRComp *iGRRToAdd) = 0;

  /**
  * Remove a graphical representation from a component.
  * @param iGRRToRemove
  *   The graphical representation to be removed from the component.
  * @return
  *   An HRESULT value.
  *   <br><b>Legal values</b>:
  *   <dl>
  *     <dt>S_OK</dt>
  *     <dd>operation is successful</dd>
  *     <dt>E_FAIL</dt>
  *     <dd>operation failed</dd>
  *   </dl>
  */
  virtual HRESULT RemoveGraphicalRepresentation (CATISchGRRComp *iGRRToRemove) = 0;

  /**
  * List all graphical representation of a component.
  * @param oLGRR
  *   A list of graphical representations
  *   (members are CATISchGRRComp interface pointers).
  * @return
  *   An HRESULT value.
  *   <br><b>Legal values</b>:
  *   <dl>
  *     <dt>S_OK</dt>
  *     <dd>operation is successful</dd>
  *     <dt>E_FAIL</dt>
  *     <dd>operation failed</dd>
  *   </dl>
  */
  virtual HRESULT ListGraphicalRepresentations (CATIUnknownList **oLGRR) = 0;

  /**
  * List all graphical images (instances of the rep) of a component.
  * @param oLGRR
  *   A list of graphical images
  *   (members are CATISchGRRComp interface pointers).
  * @return
  *   An HRESULT value.
  *   <br><b>Legal values</b>:
  *   <dl>
  *     <dt>S_OK</dt>
  *     <dd>operation is successful</dd>
  *     <dt>E_FAIL</dt>
  *     <dd>operation failed</dd>
  *   </dl>
  */
  virtual HRESULT ListGraphicalImages (CATIUnknownList **oLGRR) = 0;

  /**
  * @deprecated V5R15 
  * Use @href CATISchCompGraphic#SwitchAll2 instead.
  * Replace all occurances of the images of this component with those of
  * the graphical representation with the input name.
  * @param iGRRName
  *   The name of the graphical representation
  * @return
  *   An HRESULT value.
  *   <br><b>Legal values</b>:
  *   <dl>
  *     <dt>S_OK</dt>
  *     <dd>operation is successful</dd>
  *     <dt>E_FAIL</dt>
  *     <dd>operation failed</dd>
  *   </dl>
  */
  virtual HRESULT SwitchAll (const char *iGRRName) = 0;

  /**
  * @deprecated V5R15 
  * Use @href CATISchCompGraphic#Switch2 instead.
  * Replace the input image object with an image of the graphical.
  * representation with the input name
  * @param iGRR
  *   Pointer to the component graphical image to be switched.
  * @param oGRR
  *   Pointer to the new graphical image of the component.
  * @return
  *   An HRESULT value.
  *   <br><b>Legal values</b>:
  *   <dl>
  *     <dt>S_OK</dt>
  *     <dd>operation is successful</dd>
  *     <dt>E_FAIL</dt>
  *     <dd>operation failed</dd>
  *   </dl>
  */
  virtual HRESULT Switch (CATISchGRRComp *iGRR,
    const char *iGRRName, CATISchGRRComp **oGRR) = 0;

  /**
  * @deprecated V5R15 
  * Use @href CATISchCompGraphic#Activate2 instead.
  * To add a new image to an existing object. This new image is
  * an instance of graphical representation with the input
  * name. 
  * @param iGRRName
  *   The name of the graphic representation
  * @param iDb2WhereAt
  *   The x-y coordinates of the image position. If NULL, the image
  *   will be positioned at the origin.
  * @param oGRR
  *   Pointer to the new graphical image of the component.
  * @return
  *   An HRESULT value.
  *   <br><b>Legal values</b>:
  *   <dl>
  *     <dt>S_OK</dt>
  *     <dd>operation is successful</dd>
  *     <dt>E_FAIL</dt>
  *     <dd>operation failed</dd>
  *   </dl>
  */
  virtual HRESULT Activate (const char *iGRRName,
    double *iDb2WhereAt, CATISchGRRComp **oGRR) = 0;

  /**
  * To remove an image to an existing object. 
  * @param iGRR
  *   The graphical image to be removed from the component. 
  * @param iDb2WhereAt
  *   The x-y coordinates of the image position. If NULL, the image
  *   will be positioned at the origin.
  * @return
  *   An HRESULT value.
  *   <br><b>Legal values</b>:
  *   <dl>
  *     <dt>S_OK</dt>
  *     <dd>operation is successful</dd>
  *     <dt>E_FAIL</dt>
  *     <dd>operation failed</dd>
  *   </dl>
  */
  virtual HRESULT Deactivate (CATISchGRRComp *iGRR) = 0;

  /**
  * Replace all occurances of the images of this component with those of
  * the graphical representation with the input name.
  * @param iGRRName
  *   The name of the graphical representation
  * @return
  *   An HRESULT value.
  *   <br><b>Legal values</b>:
  *   <dl>
  *     <dt>S_OK</dt>
  *     <dd>operation is successful</dd>
  *     <dt>E_FAIL</dt>
  *     <dd>operation failed</dd>
  *   </dl>
  */
  virtual HRESULT SwitchAll2 (const CATUnicodeString &iGRRName) = 0;

  /**
  * Replace the input image object with an image of the graphical.
  * representation with the input name
  * @param iGRR
  *   Pointer to the component graphical image to be switched.
  * @param oGRR
  *   Pointer to the new graphical image of the component.
  * @return
  *   An HRESULT value.
  *   <br><b>Legal values</b>:
  *   <dl>
  *     <dt>S_OK</dt>
  *     <dd>operation is successful</dd>
  *     <dt>E_FAIL</dt>
  *     <dd>operation failed</dd>
  *   </dl>
  */
  virtual HRESULT Switch2 (CATISchGRRComp *iGRR,
    const CATUnicodeString &iGRRName, CATISchGRRComp **oGRR) = 0;

  /**
  * To add a new image to an existing object. This new image is
  * an instance of graphical representation with the input
  * name. 
  * @param iGRRName
  *   The name of the graphic representation
  * @param iDb2WhereAt
  *   The x-y coordinates of the image position. If NULL, the image
  *   will be positioned at the origin.
  * @param oGRR
  *   Pointer to the new graphical image of the component.
  * @return
  *   An HRESULT value.
  *   <br><b>Legal values</b>:
  *   <dl>
  *     <dt>S_OK</dt>
  *     <dd>operation is successful</dd>
  *     <dt>E_FAIL</dt>
  *     <dd>operation failed</dd>
  *   </dl>
  */
  virtual HRESULT Activate2 (const CATUnicodeString &iGRRName,
    double *iDb2WhereAt, CATISchGRRComp **oGRR) = 0;


};
#endif
