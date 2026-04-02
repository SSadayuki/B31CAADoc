/* -*-c++-*- */
#ifndef CATI_MOVABLE__H
#define CATI_MOVABLE__H
// COPYRIGHT DASSAULT SYSTEMES 1998

/**
  * @CAA2Level L1
  * @CAA2Usage U3
  */


#include "CATBaseUnknown.h"
#include "CATCORBABoolean.h"

#include "AS0STARTUP.h"
#include "CATPrdDecls.h"
extern ExportedByAS0STARTUP  IID IID_CATIMovable ;

class CATMathTransformation;
class CATIMovable_var;

/**
* Interface to manage the movable object.
* <b>Role:</b> a Movable is an object that is intended to define 
* its coordinates in a particular coordinates 3D-space.
* <br>This interface provides methods to retrieve or set the relative position
* of the item, in the coordinate space of the "context". The context can be
* a Movable. There are two particular contexts : the default one and the
* global one (which is not a movable).
* @see CATMathTransformation
*/

class ExportedByAS0STARTUP CATIMovable : public CATBaseUnknown
{
	CATDeclareInterface;
	
public:
  /**
   * Retrieves position in given context.
   * @param iPosObj
   *    Movable context to define position.
   *    <br>If NULL, it uses default context.
   * @param Id
   *    don't use it. Always 3D.
   * @param iInCtxt
   *    don't use it. Always TRUE.
   * @return
   *     a CATMathTransformation which is a matrix
   */
  virtual CATMathTransformation GetPosition(
	const CATIMovable_var& iPosObj,
	const CATRepMode & Id = CATPrd3D,
	const CATBoolean iInCtxt = TRUE) const=0;

  /**
   * Retrieves position in global context.
   * @param oPos  
   *     matrix
   */
  virtual HRESULT GetAbsPosition(
		CATMathTransformation & oPos ) const = 0;
	
  /**
   * Sets the relative position in given context.
   * <br><b>Note:</b> If iPosObj is NULL, it uses default context.
   * @param iTransfo
   *        transformation to set.
   * @param iPosObj
   *    Movable context to define position.
   *    <br>If NULL, it uses default context.
   * @param Id
   *    don't use it. Always 3D.
   * @param InCtxt
   *    don't use it. Always TRUE.
  */
  virtual HRESULT SetPosition(
		const CATMathTransformation& iTransfo,
		const CATIMovable_var& iPosObj,
		const CATRepMode & Id = CATPrd3D,
		const CATBoolean InCtxt = TRUE) const=0;

  /**
   * Sets position in absolute 3D-coordinate space (global context).
   * @param iPos
   *        transformation to set.
   */
  virtual HRESULT SetAbsPosition(
		const CATMathTransformation & iPos ) = 0;
	
  /**
   * Applies a transformation in coordinate space of the context.
   * @param iTransfo
   *        transformation to set.
   * @param iPosObj
   *    Movable context to define position.
   *    <br>If NULL, it uses default context.
   * @param Id
   *    don't use it. Always 3D.
   * @param iInCtxt
   *    don't use it. Always TRUE.
   */
  virtual HRESULT ApplyTransformation(
		const CATMathTransformation & iTransfo,
		const CATIMovable_var& iPosObj,
		const CATRepMode & Id = CATPrd3D,
		const CATBoolean iInCtxt = TRUE) const=0;
	
};
CATDeclareHandler(CATIMovable,CATBaseUnknown); 

#endif
