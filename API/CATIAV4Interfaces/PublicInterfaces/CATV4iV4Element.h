/* -*-c++-*- */
// COPYRIGHT DASSAULT SYSTEMES 2003

/**
 * @CAA2Level L1
 * @CAA2Usage U1
 */
#ifndef CATV4iV4Element_h
#define CATV4iV4Element_h

#include "CATObject.h"
#include "CATBaseUnknown.h"

#include "ExportedByCATV4iServices.h"

#include "CATBoolean.h"
#include "CATString.h"

class l_CATV4iElement;
/**
 * Class to construct objects that corresponds to V4 elements.
 * <br><b>Role:</b> These objects are able to retrieve information about 
 * the corresponding V4 element.
 * This information concerns the identificator, the types, the description
 */
class ExportedByCATV4iServices CATV4iV4Element : public CATObject
{
  CATDeclareLateTyping ;
 public:
  CATV4iV4Element();
/**
 * Constructs a CATV4iV4Element from a CATBaseUnknown.
 * @param ielement
 *   the element that correspond to the v4 element
 */
  CATV4iV4Element(const CATBaseUnknown* iElement);

  virtual ~CATV4iV4Element();

/**
 * Returns the validity of the element.
 * <br><b>Role</b>: This condition must evaluate TRUE if the corresponding
 * V4 elements is valid.
 */
  CATBoolean IsValid() const;

/**
 * Returns the identificator of the corresponding V4 element.
 */
  CATString GetId() const;

/**
 * Retrieves the types of the corresponding V4 element.
 * @param oTypePrim [out]
 *   The primary type
 * @param oTypeSec [out]
 *   The secondary type
 */
  void GetType(int &oTypePrim, int &oTypeSec) const;

/**
 * Retrieves the layer's number of the corresponding V4 element.
 * @param oLayer [out]
 *   The layer of the V4 element
 */
  void GetLayer(int &oLayer) const;

/**
 * @nodoc
 */
  const l_CATV4iElement* GetElement() const;
  
/**
 * Returns the type of the spline.
 * @return 
 *   <ul><li> 0 : The element is not a spline </li>
 *       <li> 1 : The element is a spline </li>
 *       <li> 2 : The element is a spline </li>
 *  </ul>
 */
  int IsASpline() const;

 protected:
  // address of internal element
  l_CATV4iElement*  _l_element;

};

#endif
