/* -*-c++-*- */
#ifndef CATICatalogInstantiation_H
#define CATICatalogInstantiation_H
// COPYRIGHT DASSAULT SYSTEMES 2000
/**
 * @CAA2Level L1
 * @CAA2Usage U5
 */

#include "CATCclInterfaces.h"
#include "CATBaseUnknown.h"

class CATICatalogLink;
class CATICatalogBrowser;

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATCclInterfaces IID IID_CATICatalogInstantiation ;
#else
extern "C" const IID IID_CATICatalogInstantiation ;
#endif

/**
  *  Interface to instantiate a component catalog.
  *  <b>Role:</b>This interface launches an interactive command to instantiate
  *  in context a component catalog.
  *  <br>To instantiate a component there are two ways:
  *  <ul>
  *  <li>By the Catalog Browser- @href CATICatalogBrowser </li>
  *  <ul>
  *   <li> drag&drop a description </li>
  *   <li> double click on a description </li>
  *   <li> use instantiate contextual menu. </li>
  *  </ul>
  *  <li>By API, in using the @href CATICatalogDescription#RunInstantiationCmd method</li>
  *  </ul>
  * In the two cases, the unique method, @href #RunInstantiationCmd , of this interface is called
  * <ul>
  *   <li> on current workbench </li>
  *   <li> on current workshop </li>
  *   <li> on object referenced by description </li>
  * </ul>
  * in this order. If all failed or don't implement this interface, the
  * Copy/Paste code is used.
  * <br><br>This interface is implemented on a component when it must be integrated
  * into a catalog document. To integrate a new type of component in a catalog document there
 * are two others interfaces to considere:
 * <ul>
 *  <li>@href CATICatalogEnable : Interface to authorize a component (only for
 *  features) to be integrated into a catalog </li>
 *  <li>@href CATICatalogSynchronize : Interface to provide information to fill 
 * the description ( @href CATICatalogDescription ) which contains a link towards a component instance.</li>
 * </ul>
  */
class ExportedByCATCclInterfaces CATICatalogInstantiation: public CATBaseUnknown
{
  CATDeclareInterface;
  
public:
  
/**
  * Launches an instantiation command.
  * @param iCatalogLink
  *   An interface on an object which contains informations on the selected
  *   description.
  * @param iBrowser
  *   The pointer of the browser which launches the instantiation. This pointer can be NULL.
  *   <br>It enables to hide or to close it during the instantiation step.
  * @param iInstantiateMode
  *   The mode of instantiation.
  *   <br><b>Legal values</b>: <ul>
  *   <li><tt>1</tt>: copy the referenced object keeping the link to it. (Recommanded).</li>
  *   <li><tt>0</tt>: copy the referenced object.</li>
  *   </ul>
  * @param iRepeatMode
  *   the instantiate command repeat mode.
  *   <br><b>Legal values</b>: <ul>
  *   <li><tt>0</tt>: single instantiation.</li>
  *   </ul>
  * @param oNotDone
  *   This output argument is valuated to 1 when an interactive command has been launched otherwise 0.
  */
  virtual HRESULT RunInstantiationCmd (const CATICatalogLink    * iCatalogLink,
                                       const CATICatalogBrowser * iBrowser,
                                       int iInstantiateMode,
                                       int iRepeatMode,
                                       int & oNotDone) = 0;
  
  // No constructors or destructors on this pure virtual base class
  // --------------------------------------------------------------
};

//------------------------------------------------------------------

CATDeclareHandler( CATICatalogInstantiation, CATBaseUnknown );

#endif
