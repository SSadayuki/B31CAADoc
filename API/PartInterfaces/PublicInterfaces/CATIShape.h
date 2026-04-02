/* -*-c++-*- */
#ifndef CATIShape_H
#define CATIShape_H
// COPYRIGHT DASSAULT SYSTEMES 1999

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include <PartItf.h>
#include <CATISpecObject.h>
#include <CATUnicodeString.h>
#include <CATBaseUnknown.h>
#include <CATErrorMacros.h>
#include <CATError.h>
#include <CATTolerance.h>

class CATPathElement;
class CATIBRepAccess_var;

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByPartItf IID IID_CATIShape;
#else
extern "C" const IID IID_CATIShape;
#endif

/**
 * Interface which provides a basic behavior to a Mechanical Design feature.
 * <b>Role</b>: This interface allows users to manage the persistence of default values. 
 * It also provides various informations about the feature.
 */
class ExportedByPartItf CATIShape : public CATBaseUnknown
{
  CATDeclareInterface;

  public:

/**
 * @nodoc
 * Do not use - Internal use only.
 */
  virtual void Initialize() = 0;

/**
 * @nodoc
 * Do not use - Internal use only.
 */
  virtual int	Build() = 0;

/**
 * @nodoc
 * Do not use - Internal use only.
 */
  virtual int	BuildShape() = 0;
    

/**
 * Stores a default value of integer type.
 * @param iStr 
 *   The storage name. Use a characteristic name to avoid naming conflicts.
 * @param iVal
 *   The value.
 */
  virtual void SetDefaultValue(const CATUnicodeString& iStr, int iVal) = 0;
  
/**
 * Stores a default value of double type.
 * @param iStr 
 *   The storage name. Use a characteristic name to avoid naming conflicts.
 * @param iVal
 *   The value.
 */
  virtual void SetDefaultValue(const CATUnicodeString& iStr, double iVal) = 0;
  
/**
 * Stores a default value of CATISpecObject type.
 * @param iStr 
 *   The storage name. Use a characteristic name to avoid naming conflicts.
 * @param iVal
 *   The value.
 */
  virtual void SetDefaultValue(const CATUnicodeString& iStr, CATISpecObject_var& iVal) = 0;


/**
 * Retrieves a integer type default value. 
 * @param iStr 
 *   The storage name.
 * @param oVal
 *   The value.
 */
  virtual void GetDefaultValue(const CATUnicodeString& iStr, int& oVal) = 0;
  
/**
 * Retrieves a double type default value.
 * @param iStr 
 *   The storage name.
 * @param oVal
 *   The value.
 */
  virtual void GetDefaultValue(const CATUnicodeString& iStr, double& oVal) = 0;
  
/**
 * Retrieves a CATISpecObject type default value.
 * @param iStr 
 *   The storage name.
 * @param oVal
 *   The value.
 */
  virtual void GetDefaultValue(const CATUnicodeString& iStr, CATISpecObject_var& oVal) = 0;


/**
 * @nodoc
 * Do not use - Internal use only.
 */
  virtual int IsOnCurrentTool(CATPathElement* iPath) = 0;
  
/**
 * Tests if the feature was created in first position in its mechanical body. 
 * @return
 *   1 if the feature is in first position,
 *   0 otherwise.
 */
  virtual int IsFirstInTool() = 0;

/**
 * @nodoc
 */
  virtual int HasAContext() = 0;
  
/**
 * @nodoc
 * Returns the topological model resolution.
 */
  virtual double GetModelResolution() = 0;

/**
 * @nodoc
 * Do not use - Internal use only.
 */
  virtual int IsOnValidTool(CATIBRepAccess_var& hBrep) = 0;

/**
 * @nodoc
 * Do not use - Internal use only.
 */
	virtual HRESULT IsOnResultIN(CATPathElement* iPath) = 0;

/**
 * @nodoc
 * Do not use - Internal use only.
 */
	virtual HRESULT IsOnCurrentToolFeature(CATPathElement* iPath) = 0;

/**
 * @nodoc
 * Do not use - Internal use only.
 */
	virtual HRESULT IsOnResult(CATPathElement* iPath) = 0;
  
/**
 * @nodoc
 * Returns the topological model resolution.
 */
  //virtual HRESULT GetModelTolerance(CATTolerance& Tol) = 0;



};

CATDeclareHandler (CATIShape, CATBaseUnknown); 

#endif // CATIShape_H
