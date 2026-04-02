#ifndef CATParmNotification_H
#define CATParmNotification_H

// COPYRIGHT DASSAULT SYSTEMES 1999

/** 
 * @CAA2Level L1
 * @CAA2Usage U1 
 */

#include "CATInterfaceDeclarations.h"
// export module
#include "KnowledgeItf.h"

// inherited from 
#include "CATNotification.h"

// class used
#include "CATCke.h"
//#include "CATISpecObject.h"
#include "CATUnicodeString.h"
#include "CATIAV5Level.h"

class CATISpecObject_var;

/**   
 * Notification class for LiteralFeatures framework.
 * <b>Role</b>: Used to notify events in LiteralFeatures.<br>
 * @see CATIParmEvents
 * @see CATIRelationEvents
 */
class ExportedByKnowledgeItf CATParmNotification : public CATNotification
{

   public:

    CATDeclareClass ;
/**
 * Constructor
 * @param iObject : object dispatching event
 */
#ifdef CATIAV5R8
CATParmNotification(const CATBaseUnknown_var &iObject);
#else
CATParmNotification(const CATISpecObject_var &iObject);
#endif

/**
 * Destructor
 */
virtual ~CATParmNotification();

#ifdef CATIAV5R8
/**
 * Returns the object dispatching the event.
 */
CATBaseUnknown_var GetInterfaceObject() const;
#else
/**
 * Returns the object dispatching the event.
 */
CATISpecObject_var GetInterfaceObject() const;
#endif
/**
 * Indicates if change value is effective or just a valuation attempt.
 * @return  CATCke::Boolean : true (valuation and modification) false (valuation attempt).
 */
CATCke::Boolean EffectiveChange () const;

/**
 * Defines if change value is effective or just a valuation attempt.
 * @param const CATCke::Boolean &b : true (valuation and modification) false (valuation attempt)
 */
void            SetEffectiveChange (const CATCke::Boolean &b);

   protected:

        // spec object that as emited the notification
        CATBaseUnknown_var _object;
        // indicates if change value has been effective or not
        CATCke::Boolean ec_;

};

#endif
