
#ifndef CATITrim_H
#define CATITrim_H
// COPYRIGHT DASSAULT SYSTEMES 1999

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include <PartItf.h>
#include <CATBaseUnknown.h>
#include <CATISpecObject.h> 

//-----------------------------------------------------------------------------
#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByPartItf IID IID_CATITrim;
#else
extern "C" const IID IID_CATITrim;
#endif

/**
 * Class to define methods relative to trim operations.
 * <b>Role</b>: A boolean operation is an operation between two mechanical
 * bodies.
 * The operation inserts a second body after the last feature 
 * of a first body.
 * The trim operation starts with a step of dividing the volumes of the two
 * bodies in a set of new volumes (volumes which belong only to the first body,
 * volumes which belong only to the second body, volumes which belong to both
 * bodies). 
 * The second step consists to take into account a list of specified faces in
 * order to define which volumes must be kept or removed. 
 */
class ExportedByPartItf CATITrim : public CATBaseUnknown
{
  CATDeclareInterface;
  public:
/** @nodoc */  
  virtual int  Union() = 0;
/** @nodoc */   
  virtual void ChangeAttributeQuality (const int iType) = 0 ;
/**
 * Adds a face to trim specifications. This face indicates which resulting
 * volume must be removed.
 * @param iFace
 *   Face to indicate which resulting volume must be removed.  
 */ 
  virtual void AddFaceToRemove (const CATISpecObject_var iFace) = 0;
/**
 * Removes a face to trim specifications.
 * @param iFace
 *   Face to indicate which resulting volume must be removed.   
 */
  virtual void WithdrawFaceToRemove (const CATISpecObject_var iFace) = 0;
/**
 * Adds a face to trim specifications. This face indicates which resulting
 * volume must be kept. The others resulting volumes of the linked body will
 * be removed.
 * @param iFace
 *   Face to indicate which resulting volume must be kept.  
 */ 
  virtual void AddFaceToKeep (const CATISpecObject_var iFace) = 0;
/**
 * Removes a face to trim specifications.
 * @param iFace
 *   Face to indicate which resulting volume must be kept.  
 */
  virtual void WithdrawFaceToKeep (const CATISpecObject_var iFace) = 0;
/** @nodoc */  
  virtual void AddFaceToRemove2 (const CATISpecObject_var iFace,const CATISpecObject_var iFaceAdj) = 0;
/** @nodoc */  
  virtual void WithdrawFaceToRemove2 (const CATISpecObject_var iFace,const CATISpecObject_var iFaceAdj) = 0;
/** @nodoc */  
  virtual void AddFaceToKeep2 (const CATISpecObject_var iFace,const CATISpecObject_var iFaceAdj) = 0;
/** @nodoc */
  virtual void WithdrawFaceToKeep2 (const CATISpecObject_var iFace,const CATISpecObject_var iFaceAdj) = 0;
};

CATDeclareHandler ( CATITrim, CATBaseUnknown );

#endif
