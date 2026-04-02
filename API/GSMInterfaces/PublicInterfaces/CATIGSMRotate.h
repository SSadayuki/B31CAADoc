/* -*-c++-*- */
#ifndef CATIGSMRotate_H
#define CATIGSMRotate_H

// COPYRIGHT DASSAULT SYSTEMES 1999

/**
  * @CAA2Level L1
  * @CAA2Usage U3
  */

#include "CATGitInterfacesExportedBy.h"
#include "CATISpecObject.h"
#include "CATICkeParm.h"
#include "CATGSMTransfoModeDef.h"
#include "CATGSMRotateDef.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATGitInterfaces IID  IID_CATIGSMRotate;
#else
extern "C" const IID IID_CATIGSMRotate;
#endif
/**
 * Rotate feature.
 * <b>Role</b>: Allows to access data of the Rotate feature created by using 
 * an element, an axis (a line) and an angle.
 * @see CATIGSMFactory#CreateRotate
 */
class ExportedByCATGitInterfaces CATIGSMRotate : public CATBaseUnknown
{
   CATDeclareInterface;
public: 
   /**
    * Gets the feature to rotate.
    *   @param oElem
    *      feature to transform
    */
 virtual HRESULT GetElemToRotate (CATISpecObject_var & oElem) = 0;
   
  /**
    * Gets the axis.
    *   @param oElem
    *      axis
    */
 virtual HRESULT GetAxis (CATISpecObject_var & oElem) = 0;
  
  /**
    * Gets the angle.
    *
    *   @param oAngle
    *      angle value
    */
 virtual HRESULT GetAngle(double & oAngle)= 0;
  /**
    * Gets the angle.
    *
    *   @param oAngle
    *      angle value
    */
 virtual HRESULT GetAngle(CATICkeParm_var& oAngle) = 0;
  /**    
    * Gets the Creation Mode.
    *   @param oMode
    *      flag for transformation type (from CATGSMTransfoMode enumeration) :
	*		- CATGSMTransfoModeUnset
	*		- CATGSMTransfoModeCreation
	*		- CATGSMTransfoModeModification
    */
 virtual HRESULT GetCreationMode (enum CATGSMTransfoMode & oMode)= 0;

   /**
    * Sets the element that is rotated.
    *   @param iElem
    *      new element that is rotated
    */
 virtual HRESULT SetElemToRotate (const CATISpecObject_var iElem) = 0;
    /**
    * Sets the axis.
    *   @param iElem
    *      new axis
    */
 virtual HRESULT SetAxis  (const CATISpecObject_var iElem) = 0;
    /**
    * Sets the angle value.
    *   @param iAngle
    *      new angle value
    */
 virtual HRESULT SetAngle (double iAngle) = 0;
    /**
    * Sets the angle value.
    *   @param iAngle
    *      new angle value
    */
 virtual HRESULT SetAngle (const CATICkeParm_var iAngle)  = 0;
	/**   
    * Sets the Creation Mode.
    *   @param iMode
    *      flag for transformation type (creation or modification)
    */
 virtual HRESULT SetCreationMode (const CATBoolean iMode)= 0;
 /**
    * Gets the type of the rotation definition.
    *   @param oType
    *      Type of rotation : <BR>
    *       - CATGSMAxisAngle, <BR>
    *       - CATGSMAxisTwoElem, <BR>
    *       - CATGSMThreePoints, <BR>
    *       - CATGSMUnknownRotationType.
	*   @see CATGSMRotationType
    */
 virtual HRESULT GetRotationType(enum CATGSMRotationType &oType)= 0;
 /**
    * Sets the type of the rotation definition.
    *   @param iType
    *      Type of rotation : <BR>
    *       - CATGSMAxisAngle, <BR>
    *       - CATGSMAxisTwoElem, <BR>
    *       - CATGSMThreePoints, <BR>
    *       - CATGSMUnknownRotationType.
	*   @see CATGSMRotationType
    */
 virtual HRESULT SetRotationType(const enum CATGSMRotationType iType)= 0;
/**
    * Gets the first element defining the rotation angle.
    *   @param oElem1
    *      The first element.
    */
 virtual    HRESULT GetFirstElement(CATISpecObject_var & oElem1) = 0;
 /**
    * Gets the second element defining the rotation angle.
    *   @param oElem2
    *      The second element.
    */
 virtual    HRESULT GetSecondElement(CATISpecObject_var & oElem2) = 0;
 /**
    * Sets the first element defining the rotation angle.
    *   @param oElem1
    *      The first element.
    */
 virtual    HRESULT SetFirstElement(const CATISpecObject_var iElem1) = 0;
 /**
    * Sets the second element defining the rotation angle.
    *   @param oElem2
    *      The second element.
    */
 virtual    HRESULT SetSecondElement(const CATISpecObject_var iElem2) = 0;
 /**
    * Gets the first point defining the rotation.
    *   @param oPoint1
    *      The first point.
    */
 virtual    HRESULT GetFirstPoint(CATISpecObject_var & oPoint1) = 0;
 /**
    * Gets the second point defining the rotation.
    *   @param oPoint2
    *      The second point.
    */
 virtual    HRESULT GetSecondPoint(CATISpecObject_var & oPoint2) = 0;
 /**
    * Gets the third point defining the rotation.
    *   @param oPoint3
    *      The third point.
    */
 virtual    HRESULT GetThirdPoint(CATISpecObject_var & oPoint3) = 0;
 
 /**
    * Sets the first point defining the rotation.
    *   @param oPoint1
    *      The first point.
    */
 virtual    HRESULT SetFirstPoint(const CATISpecObject_var iPoint1) = 0;
 /**
    * Sets the second point defining the rotation.
    *   @param oPoint.2
    *      The second point.
    */
 virtual    HRESULT SetSecondPoint(const CATISpecObject_var iPoint2) = 0;
 /**
    * Sets the third point defining the rotation.
    *   @param oPoint.3
    *      The third point.
    */
 virtual    HRESULT SetThirdPoint(const CATISpecObject_var iPoint3) = 0;
 /**
    * Gets the orientation of the first element (line or plane).
    *   @param oOrient
    *      : False   means that there is no invertion of the orientation 
    *      : True    to invert this orientation
   */
 virtual    HRESULT GetOrientationOfFirstElement(CATBoolean & oOrient1)=0;
 /**
    * Gets the orientation of the second element (line or plane).
    *   @param oOrient
    *      : False   means that there is no invertion of the orientation 
    *      : True    to invert this orientation
   */
 virtual    HRESULT GetOrientationOfSecondElement(CATBoolean & oOrient2)=0;
 /**
    * Sets the orientation of the first element (line or plane).
    *   @param iOrient
    *      : False   means that there is no invertion of the orientation 
    *      : True    to invert this orientation
   */
 virtual    HRESULT SetOrientationOfFirstElement(const CATBoolean iOrient1)=0;
 /**
    * Sets the orientation of the second element (line or plane).
    *   @param iOrient
    *      : False   means that there is no invertion of the orientation 
    *      : True    to invert this orientation
   */
 virtual    HRESULT SetOrientationOfSecondElement(const CATBoolean iOrient2)=0;

};
CATDeclareHandler (CATIGSMRotate, CATBaseUnknown);
#endif // CATIGSMRotate_H






