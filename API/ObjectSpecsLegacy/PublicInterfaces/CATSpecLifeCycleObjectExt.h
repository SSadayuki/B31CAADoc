 /* -*-c++-*- */
// COPYRIGHT DASSAULT SYSTEMES 1999

/**
 * @CAA2Level L1
 * @CAA2Usage U2
 */

#ifndef CATSpecLifeCycleObjectExt_H_
#define CATSpecLifeCycleObjectExt_H_

#include "AC0SPBAS.h"
#include "LifeCycleObject.h"

/**
* Base class to provide default behaviors for CATSpecObject on LifeCycleObject interface.
*/

class ExportedByAC0SPBAS CATSpecLifeCycleObjectExt : public LifeCycleObject
{
 CATDeclareClass;

 public:

  /**
   * Constructs a CATSpecLifeCycleObjectExt.	
   */
  CATSpecLifeCycleObjectExt();
  virtual ~CATSpecLifeCycleObjectExt();
  
  /**
   * Removes the object.
   * @param iForCloseContext
   *      param to specify context of remove. If removes happens while closing a document,
   *      some actions do not need to be executed for example.
   * <br> 1 if remove acts while closing a document ...
   */
  virtual void remove(int iForCloseContext=0);

 private :
  CATSpecLifeCycleObjectExt( const CATSpecLifeCycleObjectExt &);
  CATSpecLifeCycleObjectExt& operator = (const CATSpecLifeCycleObjectExt &);

};
 
#endif

