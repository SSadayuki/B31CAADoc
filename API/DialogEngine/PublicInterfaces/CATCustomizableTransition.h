#ifndef CATCustomizableTransition_h
#define CATCustomizableTransition_h
#include "CATDialogEngine.h"

// COPYRIGHT DASSAULT SYSTEMES 1999
// protected DI0APPLI.m

/**
 * @CAA2Level L1
 * @CAA2Usage U1
 */

#include "CATDialogTransition.h"

#include "CATListOfCATBaseUnknown.h"

class CATDiaAction;
class CATCommand;
class CATDialogState;
class CATStateCondition;

/**
 * Class representing a specialized transition.
 * <b>Role</b>: A specialized transition is a reusable transition which may be
 * associated with generic action and condition and on which specific action
 * and condition may be added as usual.  
 * <br>Such transitions are used to program a @href CATPanelState state which
 * is a state dedicated to manage a dialog.
 * Only these transitions linked to a @href CATPanelState are usable in
 * L1 CAA2 exposition.
 * So, as a command developer, you don't need to instantiate such transitions.
 * Moreover, the usable methods are inherited from @href CATDialogTransition.
 * Therefore, this class does not expose new methods.
 */
class ExportedByCATDialogEngine CATCustomizableTransition : public CATDialogTransition
{
  
  /** @nodoc */
  CATDeclareClass;

public:
  
  /*---------------------------------*/
  //      INTERNAL METHODS 
  /*---------------------------------*/
  
  /** @nodoc */
  CATCustomizableTransition (CATDialogState *, CATDialogState *);
  
  /** 
  * @nodoc
  * obsolete.
  */
  CATCustomizableTransition (CATCommand *, CATDialogState *, CATDialogState *);
  virtual ~CATCustomizableTransition ();
  
  /** 
  * @nodoc
  * see CATDialogTransition 
  */
  virtual void SetAction (CATDiaAction *);
  /** @nodoc */
  virtual void SetCustomizableAction (CATDiaAction *);
  /** @nodoc */
  virtual CATDiaAction * GetCustomizableAction () const;
  
  /** 
  * @nodoc
  * see CATDialogTransition 
  */
  virtual void SetCondition (CATStateCondition *);
  /** @nodoc */ 
  virtual void SetCustomizableCondition (CATStateCondition *);
  /** @nodoc */
  virtual CATStateCondition * GetCustomizableCondition ()const;
  
protected:
  
  CATDiaAction * _CustomizableAction; 
  CATStateCondition * _CustomizableCondition; 
  CATLISTP(CATBaseUnknown) _ReleaseL;
  
private:

  // NOT implemented, only declared to prevent unexpected call to default ctors created by the compiler
  CATCustomizableTransition ();
  CATCustomizableTransition (const CATCustomizableTransition &);
  CATCustomizableTransition & operator= (const CATCustomizableTransition &);

};
#endif
