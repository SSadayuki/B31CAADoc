#ifndef CATRdgData_h
#define CATRdgData_h

// COPYRIGHT DASSAULT SYSTEMES 2003

/**
 * @CAA2Level L0
 * @CAA2Usage U3
 */

#include "CATRdgItfCPP.h"
#include "CATBaseUnknown.h"


/** 
 * Base class for data associated to objects.
 * <b>Role</b>:
 * This class must be inherited to provide a new type
 * of data.
 * It is used by plug-in providers to store specific 
 * parameters in objects.
 */

class ExportedByCATRdgItfCPP CATRdgData : public CATBaseUnknown
{
/**
 * @nodoc 
 */
  friend class CATRdgBase;
  
  public :

/**
 * Constructs a class to gather custom data parameters.
 */
    CATRdgData();

/**
 * @nodoc 
 */
    virtual ~CATRdgData();

/**
 * Returns the owner of the data.
 * @return
 *   The object referencing the data.
 *   No AddRef is done on the returned pointer. 
 */
    virtual CATBaseUnknown * GetOwner() const;

  protected :  

    CATBaseUnknown * _owner;
};
#endif
