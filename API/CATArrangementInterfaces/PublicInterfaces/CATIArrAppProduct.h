#ifndef CATIArrAppProduct_H
#define CATIArrAppProduct_H
// COPYRIGHT DASSAULT SYSTEMES 1999
/**
  * @CAA2Level L1
  * @CAA2Usage U4 CATEArrAppProductAdapter
  */

#include "CATArrangementItfCPP.h"
#include "CATBaseUnknown.h"
// Class declarations
class CATUnicodeString;



#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATArrangementItfCPP IID IID_CATIArrAppProduct;
#else
extern "C" const IID IID_CATIArrAppProduct;
#endif

/**
 * Interface to allow customization of Arr objects when the nomenclature is set or modified. 
 * This interface will be called by the CATIA application code to give
 * users the opportunity to plug in their own code.  Users need to create
 * their own implementation.
 * Users implementing this interface must derive from the adapter 
 * CATEArrAppProductAdapter.h in case new methods are added.
 * Users must define a .dic file tying the interface to an Arrangement object below.
 *   <dl>
 *     <dt>ArrPathway</dt>
 *     <dd>for Path Reservations</dd>
 *     <dt>ArrBox</dt>
 *     <dd>for Item Reservations</dd>
 *     <dt>ArrRun</dt>
 *     <dd>for Runs</dd>
 *     <dt>ArrArea</dt>
 *     <dd>for Areas</dd>
 *     <dt>ArrPathwaySystem</dt>
 *     <dd>for Reservation Networks</dd>
 *     <dt>ArrLogicalSet</dt>
 *     <dd>for Logical Sets</dd>
 *     <dt>ArrDistributionSystem</dt>
 *     <dd>for System Assembly</dd>
 *     <dt>ArrLogicalLine</dt>
 *     <dd>for Logical Assembly</dd>
 *   </dl>
 * <p><b>BOA  information</b>:  this  interface  can  be  implemented 
 * using  the  BOA  (Basic  Object  Adapter). 
 * To  know  more  about  the  BOA,  refer  to  the  CAA  Encyclopedia  home  page.   
 * Click  Middleware  at  the  bottom  left,  then  click  the  Object  Modeler  tab  page. 
 * Several  articles  deal  with  the  BOA.</p>
 */
class ExportedByCATArrangementItfCPP CATIArrAppProduct : public CATBaseUnknown
{

  CATDeclareInterface;

public:
	  
  
  /**
  * Called after an Arrangement object sets the nomenclature. This allows users to insert
  * attributes or do other calculations when the Arrangement object is created or the type is modified.
  * The nomenclature corresponds to the type displayed in the panel.
  * @param iOldType
  *   Old Type/Nomenclature.  Blank if creating object for the first time.
  * @param iNewType
  *   New Type/Nomenclature being set (name in the panel).
  * @return
  *   An HRESULT value.
  *   <br><b>Legal values</b>:
  *   <dl>
  *     <dt>S_OK</dt>
  *     <dd>operation is successful</dd>
  *     <dt>E_FAIL</dt>
  *     <dd>operation failed</dd>
  *   </dl>
  */
  virtual HRESULT NomenclatureWasModified ( const CATUnicodeString& iOldType, const CATUnicodeString& iNewType ) = 0;
  
};

CATDeclareHandler( CATIArrAppProduct, CATBaseUnknown );

#endif
