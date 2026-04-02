// COPYRIGHT DASSAULT SYSTEMES  1997
//=============================================================================
//
// CATELifeCycleObject : --EXTENSION--
// 
// Adapter to expose LifeCycleObject method implementation for Activity
//=============================================================================
// Usage Notes:
//
// 
//=============================================================================
// Apr. 2000   Creation                                   G. Dufour
// March 2005  Exposition in ProcessPlatformBase/PublicInterfaces           GDU
//=============================================================================

/** 
* @CAA2Level L0
* @CAA2Usage U2 
*/

#ifndef CATELifeCycleObject_Activity_H
#define CATELifeCycleObject_Activity_H

#include "SP0BBOSM.h"
#include "CATSpecLifeCycleObjectExt.h"

/**
* Base class to provide default behaviors for Activity on LifeCycleObject interface.
*/

//-----------------------------------------------------------------------------
class ExportedBySP0BBOSM CATELifeCycleObject_Activity : public  CATSpecLifeCycleObjectExt
{
  
    CATDeclareClass ;
    
    public:
  
    //Constructs a CATELifeCycleObject_Activity.	
   
    CATELifeCycleObject_Activity();
    virtual ~CATELifeCycleObject_Activity();

        
    /**
   * Removes the object.
   * @param iForCloseContext
   *      param to specify context of remove. If removes happens while closing a document,
   *      some actions do not need to be executed for example.
   * <br> 1 if remove acts while closing a document ...
   */
    virtual void remove(int ForCloseContext=0);
    
    private :
  CATELifeCycleObject_Activity( const CATELifeCycleObject_Activity &);
  CATELifeCycleObject_Activity& operator = (const CATELifeCycleObject_Activity &);
    
};
#endif
