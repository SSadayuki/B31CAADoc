/* -*-c++-*- */
#ifndef CATICatalogEnable_H
#define CATICatalogEnable_H
// COPYRIGHT DASSAULT SYSTEMES 2000
/**
 * @CAA2Level L1
 * @CAA2Usage U5
 */

#include "CATCclInterfaces.h"
#include "CATBaseUnknown.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATCclInterfaces IID IID_CATICatalogEnable ;
#else
extern "C" const IID IID_CATICatalogEnable ;
#endif

//------------------------------------------------------------------

/**
 * Interface to enable component integration into a catalog document.
 * <b>Role:</b>In implementing this interface on a component, instances of this component
 * can be inserted into a catalog. It is only useful for the
 * feature component, and not for the document for example.
 * <br>To integrate a new type of component in a catalog document there
 * are two others interfaces to considere:
 * <ul>
 *  <li>@href CATICatalogInstantiation : Interface to provide the interactive command
 *  to instantiate in context the component</li>
 *  <li>@href CATICatalogSynchronize : Interface to provide information to fill 
 * the description ( @href CATICatalogDescription ) which contains a link towards a component instance.</li>
 * </ul>
 */
class ExportedByCATCclInterfaces CATICatalogEnable: public CATBaseUnknown
{
   CATDeclareInterface;
   
public:
   
   // No constructors or destructors on this pure virtual base class
   // --------------------------------------------------------------
};

//------------------------------------------------------------------

CATDeclareHandler( CATICatalogEnable, CATBaseUnknown );

#endif
