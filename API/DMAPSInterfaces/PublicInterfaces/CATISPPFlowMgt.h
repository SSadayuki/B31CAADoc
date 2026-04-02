#ifndef CATISPPFlowMgt_H_
#define CATISPPFlowMgt_H_

// COPYRIGHT DASSAULT SYSTEMES  1999

/**
  * @CAA2Level L1
  * @CAA2Usage U3
  */

#include "ProcessInterfaces.h"
#include "CATBaseUnknown.h"
#include "CATUnicodeString.h"
#include "CATISPPItem.h"

class CATISPPFlowMgt_var ;
class CATListValCATBaseUnknown_var ;
class CATISPPProductIO_var ;
class CATISPPControlIO_var ;
class CATISPPProductFlow_var ;
class CATISPPControlFlow_var ;
class CATISPPActivity_var ;

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByProcessInterfaces IID IID_CATISPPFlowMgt ;
#else
extern "C" const IID IID_CATISPPFlowMgt ;
#endif

/**
*  Interface to manage Control Flows and Product Flows between Activities. 
*  <br> <b> Note: </b> It is also used for Product Input and Output Management.
**/

class ExportedByProcessInterfaces CATISPPFlowMgt: public CATBaseUnknown 
{
  
  CATDeclareInterface ;
  
 public:

  /**
    * Creates a Control Flow between two Activities.
    * @param iPostActivity
    * 	<tt> Handler on the Activity at the end of the Control Flow </tt>
    * @return
    * 	Handler on the resulting Control Flow
   **/
  virtual HRESULT 			AddControlFlow (const CATISPPFlowMgt_var & iPostActivity) = 0 ;
  /**
  * @nodoc
  */
  virtual void 				AddProductFlow (const CATISPPFlowMgt_var & iPostActivity) = 0 ;

  /**
    * @nodoc
    * This interface allows to create a Control Flow between two Activities, one being created at the same time
    * @param iTypeToCreate
    * 	<tt> Name of the type of Activity to create at the beginning of the Control Flow </tt>
    * @return
    * 	Handler on the resulting Control Flow
   **/
  virtual CATBaseUnknown_var 				LinkAfter (const CATUnicodeString& iTypeToCreate) = 0 ; 

  /**
    * @nodoc
    * This interface allows to create a Control Flow between two Activities, one being created at the same time
    * @param iTypeToCreate
    * 	<tt> Name of the type of Activity to create at the end of the Control Flow </tt>
    * @return
    * 	Handler on the resulting Control Flow
   **/
  virtual CATBaseUnknown_var 				LinkBefore (const CATUnicodeString& iTypeToCreate) = 0 ;

  /**
    * @nodoc  
    * This interface allows to insert an activity in a control flow
    * @param iControlFlow
    * 	<tt> Name of the control Flow </tt>
   **/
// CFO 16/01/02 Passage of void to HRESULT to take into account of precedences
  virtual  HRESULT 				InsertInLink (CATISPPControlFlow_var iControlFlow) = 0 ;

  /**
    * @nodoc  
    * This interface allows to insert an activity in a product flow
    * @param iControlFlow
    * 	<tt> Name of the product Flow </tt>
   **/
  virtual void 				InsertInLink (CATISPPProductFlow_var iProductFlow) = 0 ;

  /**
    * Allows to find the previous Activities from one Activity (in terms of Control).
    * @param iType
    * 	<tt> This optional parameter allows to filter for search on a certain Activity type </tt>
    * @return
    * 	List of Handlers on preceding Activity interfaces
   **/
  virtual CATListValCATBaseUnknown_var		PreviousActivitiesForControl(const CATUnicodeString& iType = "Activity") =0;
  /**
  * @nodoc
  */
  virtual CATListValCATBaseUnknown_var		PreviousActivitiesForProduct(const CATISPPItem_var& iItem = NULL_var) =0;

  /**
    * Returns following Activities from one Activity (in terms of Control).
    * @param iType
    * 	<tt> This optional parameter allows to filter for search on a certain Activity type </tt>
    * @return
    * 	List of Handlers on following Activity interfaces
   **/
  virtual CATListValCATBaseUnknown_var		NextActivitiesForControl(const CATUnicodeString& iType = "Activity") =0;
  /**
  * @nodoc
  */
  virtual CATListValCATBaseUnknown_var		NextActivitiesForProduct(const CATISPPItem_var& iItem = NULL_var) =0;

 
  /**
    * This interface allows to add a Product Input to an Activity
    * @param iProductInstance
    * 	<tt> This optional parameter allows to link this Input to a Part (Item) from an Assembly </tt>
    * @return
    * 	Handler on newly created ProductIO interface
   **/
  virtual CATISPPProductIO_var		AddProductInput(const CATISPPItem_var & iItem = NULL_var ) = 0 ;
  /** @nodoc */
  virtual CATISPPControlIO_var		AddControlInput() = 0 ;

  
  /**
	* @nodoc
    * This interface allows to add a Product Output to an Activity
    * @param iProductInstance
    * 	<tt> This optional parameter allows to link this Output to a Part (Item) from an Assembly </tt>
    * @return
    * 	Handler on newly created ProductIO interface
   **/
  virtual CATISPPProductIO_var		AddProductOutput(const CATISPPItem_var & iItem = NULL_var ) = 0 ;
  /** @nodoc */
  virtual CATISPPControlIO_var		AddControlOutput() = 0 ;


  /**
	* @nodoc
    * This interface allows to add a Product Output to an Activity
    * @param iProductIO
    * 	<tt> This is the ProductIO to remove </tt>
   **/
  virtual void				RemoveProductIO(const CATISPPProductIO_var & iProductIO ) = 0 ;
  /** @nodoc */
  virtual void				RemoveControlIO(const CATISPPControlIO_var & iProductIO ) = 0 ;
  /** 
    * Removes a Control Flow between two Activities.
    * @param iActivity
    * 	<tt> Handler on the Activity linked </tt>
  */
  virtual void				RemoveControlFlow(const CATISPPFlowMgt_var & iActivity ) = 0 ;
  /** 
   * Removes all Control Flow on the activity.
   */
  virtual void				RemoveControlFlow() = 0 ;
  /** @nodoc */
  virtual void				RemoveProductFlow(const CATISPPFlowMgt_var & iActivity ) = 0 ;
  /** @nodoc */
  virtual void				RemoveProductFlow() = 0 ;

  
  /**
    * @nodoc
    * This interface allows to retrieve a list of Product Input to an Activity
    * @param iItem
    * 	<tt> This optional parameter allows to filter this search with a specific Part (Item) </tt>
    * @return
    * 	List of Handlers on  ProductIO interface
   **/
  virtual CATListValCATBaseUnknown_var	 GetProductInput(const CATISPPItem_var & iItem = NULL_var ) const = 0 ;
  /**
    * Returns a list of Control Input to an Activity.
    * @return
    * 	List of Handlers on  ControlIO interface
   **/
  virtual CATListValCATBaseUnknown_var	 GetControlInput() const = 0 ;

  
  /**
    * @nodoc
    * This interface allows to retrieve a list of Product Output to an Activity
    * @param iProductInstance
    * 	<tt> This optional parameter allows to filter this search with a specific Part (Item) </tt>
    * @return
    * 	List of Handlers on  ProductIO interface
   **/
  virtual CATListValCATBaseUnknown_var	 GetProductOutput(const CATISPPItem_var & iItem = NULL_var ) const = 0 ;
  /**
    * Returns a list of Control Output to an Activity.
    * @return
    * 	List of Handlers on  ControlIO interface
   **/
  virtual CATListValCATBaseUnknown_var	 GetControlOutput() const = 0 ;
  
};

CATDeclareHandler( CATISPPFlowMgt, CATBaseUnknown ) ;
#endif



