/* -*-c++-*- */
#ifndef CATIProductInSession_h
#define CATIProductInSession_h

// COPYRIGHT DASSAULT SYSTEMES  1999

/**
* @CAA2Level L1
* @CAA2Usage U3
*/

#include "AS0STARTUP.h"
#include "CATIProduct.h"
#include "CATILinkableObject.h"

class CATNotification;
class CATUnicodeString;


extern ExportedByAS0STARTUP IID IID_CATIProductInSession ;

class CATIProductInSession;

/**
* Interface used to manipulate temporary data about a product.
* <b>Note:</b> A product is able to have more than one representation. Only
* one is active (this notion has sense in session only ). 
*/


class ExportedByAS0STARTUP CATIProductInSession : public CATIProduct
{
  CATDeclareInterface;

  public:

   /**
	* @nodoc
    */
  virtual  HRESULT SetActiveShapeRep(CATILinkableObject_var & iObj,
	  CATBoolean  iDoDispatch = TRUE,
	  CATBoolean  iStartUpMode = FALSE,
	  const CATRepMode & Id = CATPrd3D,
	  const CATBoolean InCtxt = TRUE)=0;

   /**
	* Activates a representation by its name.
	* @param iShapeName
	*    name of the representation associated to the product.
	* @param iDoDispatch
    *    do not use 
	* @param iStartUpMode
	*    TRUE to visualize all instances of the StartUp of this.
    * @param Id
    *   The behavior of the added representation.
	*   <br><b>Legal values</b>:
	*   <br>CATPrd3D if the representation is a 3D one,
    *   <br>CATPrd2D if the representation is a 2D one,
    *   <br>or CATPrdText if the representation is a text one.
	* @param iInCtxt
    *    do not use 
	*/
  virtual HRESULT SetActiveShapeRep(const CATUnicodeString & iShapeName,
	  CATBoolean  iDoDispatch = TRUE,
	  CATBoolean  iStartUpMode = FALSE,
	  const CATRepMode & Id = CATPrd3D,
	  const CATBoolean iInCtxt = TRUE,
	  const CATBoolean persist = FALSE)=0;

   /**
	* Returns the active representation.
    * @param oShape
    *   shape associated to the active representation.
    * @param Id
    *   The behavior of the representation.
	*   <br><b>Legal values</b>:
	*   <br>CATPrd3D if the representation is a 3D one,
    *   <br>CATPrd2D if the representation is a 2D one,
    *   <br>or CATPrdText if the representation is a text one.
	* @param iInCtxt
    *    do not use 
	* @return
	*   an HRESULT
    *   <br><b>Legal values</b>: S_OK if the shape is found.
	*/
  virtual HRESULT GetActiveShapeRep(CATILinkableObject_var & oShape,
	  const CATRepMode & Id = CATPrd3D,
	  const CATBoolean iInCtxt = TRUE)=0;
  
   /**
	* Returns the active representation.
	* @return
	*   shape associated to the active representation.
    */
  virtual CATILinkableObject_var GetActiveShapeRep() = 0;

  /**
    * @nodoc
    */
    virtual void SetActiveShapeRep( int     ShapeIndex
				   ,CATBoolean DoDispatch  = TRUE
				   ,CATBoolean StartUpMode = FALSE) = 0;

  /**
    * @nodoc
    */
    virtual int	GetActiveShapeIndex() = 0;

  
  /**
    * @nodoc
    */
	virtual void  ConnectAndVisualize ( CATNotification* notif
				       ,CATBoolean DoDispatch  = TRUE
				       ,CATBoolean StartUpMode = FALSE) = 0;
    
   /**
	* Returns the name of the active representation.
    * @param oaName
    *   name of the representation.
    * @param Id
    *   The behavior of the representation.
	*   <br><b>Legal values</b>:
	*   <br>CATPrd3D if the representation is a 3D one,
    *   <br>CATPrd2D if the representation is a 2D one,
    *   <br>or CATPrdText if the representation is a text one.
	* @param InCtxt
    *    do not use 
	*/
	virtual HRESULT GetActiveShapeName(CATUnicodeString & oaName,
	  const CATRepMode & Id = CATPrd3D,
	  const CATBoolean InCtxt = TRUE)=0;

        /**
	 * @nodoc
	 */
         virtual HRESULT LoadInsideVisuMode(const CATBoolean iSynchronize = TRUE)=0;

};

CATDeclareHandler(CATIProductInSession,CATIProduct);

#endif 

