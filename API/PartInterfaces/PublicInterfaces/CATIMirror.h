/* -*-c++-*- */
#ifndef CATIMirror_H
#define CATIMirror_H

// COPYRIGHT DASSAULT SYSTEMES 1999

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */


#include <PartItf.h>
#include <CATIShape.h>
#include <CATLISTV_CATISpecObject.h>

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByPartItf IID IID_CATIMirror;
#else
extern "C" const IID IID_CATIMirror;
#endif

/**
 * Interface to read or modify the mirror's specifications.
 * <b>Role</b>: The mirror feature allows users to duplicate an original body according 
 * to a symmetry. 
 */
class ExportedByPartItf CATIMirror : public CATIShape
{
  CATDeclareInterface;

  public:

 /**
  *  Sets the face or plane about which the body is mirrored.
  *  @param ihMirrorPlane
  *    The face or plane that specifies the mirroring element.
  */
  virtual void ModifyMirrorPlane(const CATISpecObject_var &ihMirrorPlane) = 0;

  /**
  * Returns the mirroring element as a plane or face that specifies the mirror.
  */
  virtual CATISpecObject_var GetPlane() = 0;


  /** @nodoc */
  virtual CATLISTV(CATISpecObject_var) GetObject() = 0;
  /** @nodoc */
  virtual int AddMirrorObject(const CATISpecObject_var &hObj) = 0;

	/**
	 *	Returns the Design Intent attribute value.
	 *	Return values : 0 if mirror of currnt solid or as result.
	 *									1 if Mirror of list or with Keep Spec.
	**/
	virtual int GetIfDesignIntent() = 0;

	/**
	 *	Sets the Design Intent attribute value.
	 *  @param Dsg:
	 *	Legal values : 0 if mirror of currnt solid or as result.
	 *								 1 if Mirror of list or with Keep Spec.
	**/
	virtual int SetDesignIntent(int Dsg) = 0;

};

CATDeclareHandler (CATIMirror, CATIShape); 

#endif // CATIMirror_H
