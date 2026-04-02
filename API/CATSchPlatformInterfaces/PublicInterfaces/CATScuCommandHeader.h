#ifndef CATScuCommandHeader_H
#define CATScuCommandHeader_H


// COPYRIGHT DASSAULT SYSTEMES 2000

/**
 * @CAA2Level L1
 * @CAA2Usage U2
 */


#include "CATSchItfCPP.h"
#include "CATCommandHeader.h"
#include "CATISchHeaderSpecialize.h"
#include "CATString.h"

//-----------------------------------------------------------------------------
/**
 * Class for creating schematic command in workbench.
 *
 * <b>Role</b>: This class provides a base class for command header 
 * use to define dialog commands in schematic workbenches. 
 * <b>Please include CATScuCmdHeader module in linking</b>
 */
class ExportedByCATSchItfCPP CATScuCommandHeader : public CATCommandHeader 
{ 
  CATDeclareClass; 

  public: 

  /**
   * Constructs an empty CATScuCommandHeader.
   */
    CATScuCommandHeader (const CATString & HeaderID,             
                         const CATString & loadName,  
                         const CATString & classname, 
                         void * argument); 
    virtual ~CATScuCommandHeader(); 

  /**
   * Get the application name.
   */
    CATString GetApplicationName();
        
  protected:

  /**
   * Initialize before showing the header.
   */
    void DoShow();

  /**
   * Initialize before hiding the header.
   */
    void DoHide();

  /**
   * Special interface handle used by DoShow and DoHide.
   */
    CATISchHeaderSpecialize *_piHeaderSpecialize;

  private:  
    CATString   _SApplicationName;
   
    
  CATDeclareHeaderResources; 
};

#endif
