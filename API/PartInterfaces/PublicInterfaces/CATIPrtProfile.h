#ifndef CATIPrtProfile_H
#define CATIPrtProfile_H
// COPYRIGHT DASSAULT SYSTEMES 1999

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include <PartItf.h>
#include <CATBaseUnknown.h>


class CATPlane_var;
class CATMathPoint;
class CATMathLine;
class CATMathPlane;
class CATMathDirection;
class CATMathBox;
class CATIPrtContour_var;
class CATISpecObject_var;
class CATBody_var;
class CATLine_var;


#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByPartItf IID IID_CATIPrtProfile;
#else
extern "C" const IID IID_CATIPrtProfile;
#endif

/**
 * Interface which provides a profile management behavior to a feature profile.
 * <b>Role</b>: Some features contain a profile component which allows users to 
 * define and use a profile. The profile internal feature is managed through 
 * this interface.
 */
class ExportedByPartItf CATIPrtProfile : public CATBaseUnknown
{
  CATDeclareInterface;

  public:

/**
 * Gets the number of specification elements used to define the profile.
 * @return
 *   The number of elements.
 */
  virtual int GetElementCount() const = 0;

/**
 * Adds a new element to the specifications list. 
 * <br><b>Role</b>: As yet the list handles only one element and this element 
 * should be a CATISketch.
 * @param ihElt
 *   The added element.
 */
  virtual void AddElement(const CATISpecObject_var& ihElt) = 0;

/**
 * Gets an element of the specification list.
 * @param iNb
 *   The index of the required element. Index 1 is for the first element.
 * @param ohElt
 *   The required element.
 */
  virtual void GetElement(int iNb, CATISpecObject_var& ohElt) const = 0;

/**
 * Removes an element from the specification list.
 * @param iNb
 *   The index of the element to be removed. Index 1 is for the first element.
 */
  virtual void RemoveElement(int iNb) = 0;

/**
 * Removes an element from the specification list.
 * @param ihElt
 *   The element to be removed.
 */
  virtual void RemoveElement(CATISpecObject_var& ihElt) = 0;

/**
 * Empties the specification list.
 */
  virtual void RemoveAllElements() = 0;

/**
 * Gets the number of contour defined by the specification list. 
 * @return
 *   The number of contour.
 */
  virtual int GetContourCount() const = 0;

/**
 * @nodoc
 * Gets one of the defined contours.
 * param iNb
 *   The index of the contour. Index 1 is for the first contour.
 * param ohCtr
 *   The contour.
 */
  virtual void GetContour(int iNb, CATIPrtContour_var& ohCtr) const = 0;

/**
 * Gets the specification plane which defines the profile support.
 * @param ohPln
 *   The plane.
 */
  virtual void GetSpecPlane(CATISpecObject_var& ohPln) const = 0;
 
/**
 * Gets the geometrical plane associated to the profile support.
 * @param ohPln
 *   The plane.
 */
  virtual void GetGeomPlane(CATPlane_var& ohPln) const = 0;
  
/**
 * Gets the mathematical plane corresponding to the support of the profile geometry.
 * @param oPln
 *   The plane.
 */
  virtual HRESULT GetPlane(CATMathPlane& oPln) const = 0;
  
/**
 * @nodoc
 * Sets the reference plane which defines the profile support.
 * param ihPln
 *   The plane.
 */
  virtual void SetReferenceSupport(CATISpecObject_var& ihPln) const = 0;
 
/**
 * @nodoc
 * Gets the reference plane which defines the profile support.
 * param ohPln
 *   The plane.
 */
  virtual void GetReferenceSupport(CATISpecObject_var& ohPln) const = 0;
 
/**
 * Gets the bounding box of the whole profile.
 * @param oBox
 *   The bounding box.
 */
  virtual void GetBoundingBox(CATMathBox& oBox) const = 0;
  
/**
 * Gets the mathematical center of the profile bounding box.
 * @param oPt
 *   The center point. 
 */
  virtual void GetCenter(CATMathPoint& oPt) const = 0;
  
/**
 * Gets the topological body corresponding to the profile.
 * @param iFlags
 *   To specify computing options.
 *   <br><b>Legal values</b>: If the profile contains a closed wire, 1 will create 
 *   a face bounded by the wire in the returned body. <br>0 will disable this option. 
 * @param ohBody
 *   The returned body.
 */
  virtual void GetBody(int iFlags, CATBody_var& ohBody) const = 0;

/**
 * @nodoc
 */
  virtual int GetDefaultSide(CATBaseUnknown_var& ihContext, CATMathPoint& oOrigin, CATMathDirection& oDir, int& oSide) const = 0;

/**
 * @nodoc
 */
  virtual int TestValidity(int iContext, int& oErrorType) const = 0;

  /**
 * @nodoc
 */
  virtual int GetBoundaryPoint(CATMathPoint& oPt) const = 0;
  
/**
 * @nodoc
 */
  virtual int GetCenterFromDirection(const CATMathDirection& iDir, CATMathPoint& oPt) const = 0;

 /**
 * @nodoc
 */
  virtual int CkeckAutoIntersection(const CATMathDirection& iDir) const = 0;
    
  /**
  * @nodoc
  */
  virtual int CheckIntersectionWithBoundBox(CATLine_var& hLine,CATMathLine& iAxis) const = 0;

  /**
  * * @deprecated V5R15 Do not use
  */
  virtual int CheckNumDomainsInProfile() = 0;
};

CATDeclareHandler (CATIPrtProfile, CATBaseUnknown); 

#endif // CATIPrtProfile_H


