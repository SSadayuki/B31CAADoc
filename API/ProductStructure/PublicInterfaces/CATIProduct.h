/* -*-c++-*- */
#ifndef CATIProduct_h
#define CATIProduct_h

// COPYRIGHT DASSAULT SYSTEMES  1999

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include "AS0STARTUP.h"
#include "CATPrdDecls.h"
#include "CATBaseUnknown.h"
#include "CATUnicodeString.h"
#include "CATISpecDeclarations.h"
#include "CATLISTV_CATBaseUnknown.h"
#include "CATLISTV_CATISpecObject.h"
#include "CATIContainer.h"
#include "CATIConnector.h"
#include "CATIPrdRepresentation.h"
#include "IUnknown.h"

class CATUnicodeString;
class CATILinkableObject_var;
class CATISpecObject_var;
class CATIContainer_var;
class CATIConnector_var;
class CATIPrdDiscipline_var;
class CATListValCATISpecObject_var;
class CATListValCATUnicodeString;
class CATListValCATBaseUnknown_var;
class CATNamingReference;

extern ExportedByAS0STARTUP IID IID_CATIProduct ;

class CATIProduct;
CATDeclareHandler(CATIProduct,CATBaseUnknown);

/**	
* Interface to manage products.
* <b>Role:</b> this interface concerns components ( references products ) 
* or instances ( reuse of existing references ) agregated in upperproducts.
*/

class ExportedByAS0STARTUP CATIProduct : public CATBaseUnknown
{
  CATDeclareInterface;

  public:
   //-----------------------------------------------------------------
   // Product structure access
   //-----------------------------------------------------------------
   
   /**
    * Returns the reference product.
	* <br><b>Note:</b>Instance-reference management.
    */
   virtual CATIProduct_var 		   GetReferenceProduct() = 0;

   /**
    * Returns the owning product.
	* <br><b>Note:</b>Agregation management.    
    */
   virtual CATIProduct_var 		   GetFatherProduct   () = 0;

   /**
    * Returns number of direct subproducts.
	* <br><b>Note:</b>Agregation management.
    */
   virtual int  GetChildrenCount()   const = 0;

   /**
    * Returns list of subproducts directly concerned.
	* <br><b>Note:</b>Agregation management.
	* @param iIntfId
	*     name of the expected interface as handle for the children.
    */ 
   virtual CATListValCATBaseUnknown_var*   GetChildren(const char* iIntfId = "CATIProduct")    const = 0;

   /**
    * Returns list of all subproducts.
	* <br><b>Note:</b>Agregation management.
	* @param iIntfId
	*     name of the expected interface as handle for the children.
    */ 
   virtual CATListValCATBaseUnknown_var*   GetAllChildren(const char* iIntfId = "CATIProduct")    const = 0;

   /**
    * @nodoc
    */
   virtual CATListValCATISpecObject_var*   GetChild(const char* intfId = "CATIProduct")    const = 0;


   //-----------------------------------------------------------------
   // Remove management
   //-----------------------------------------------------------------
   /**
	* Removes an instance of product.
	* @param iInstance
	*       instance of product to remove.
	* <br><b>Note:</b> It also removes the reference if it is the last 
	* instance of a local reference .
	*/
   virtual void                            RemoveProduct(CATIProduct_var & iInstance) = 0;
   
   
   //-----------------------------------------------------------------
   // Adding SubProducts
   //-----------------------------------------------------------------
 
   /**
	* Adds subproduct.
	* <br><b>Role:</b>Instanciates existing product and agregates it to this.
    * @param iProduct
    *      reference product to add. 
	*	   the reference has to be in the same document.
    * @param iCont
    *      do not use.
    * @return
	*      the instance product added.
   	*/
   virtual CATIProduct_var                 AddProduct   (CATIProduct_var & iProduct, const CATIContainer_var& iCont=NULL_var) = 0;

   /**
	* Adds subproducts. 
	* <br><b>Role:</b>Instanciates them and agregates them to this.
    * @param iReferences
    *      list of reference products to add. 
	*	   <br> the references have to be in the same document.
    * @param iCont
    *      do not use.
    * @param oResult
	*      list of instance products added.
	*/
  virtual HRESULT                         AddProducts  (  const CATListValCATBaseUnknown_var&   iReferences
	                                                     ,       CATIContainer_var&              iCont
										                 ,		 CATListValCATBaseUnknown_var*&  oResult ) = 0;
   
   /**
	* Creates new product and adds it as subproduct.
    * @param iString
    *      part number of the subproduct to create.
    * @param cont
    *      do not use.
    * @return 
	*      the instance product added.
   	*/
   virtual CATIProduct_var                 AddProduct   (const CATUnicodeString& iString, const CATIContainer_var& cont = NULL_var) = 0;
   
     
   /**
    * @nodoc
	* The ReplaceProduct method allows to replace an instance
	* return code : 1 : success
	*               0 : OldInstance is not part of "this" product
    */
   virtual int      ReplaceProduct  (  CATIProduct_var & OldInstance
									 , CATIProduct_var & NewInstanceReference
									 , CATIProduct_var & NewInstance) = 0;

   /**	
	* Returns the instance of this in context.
	* @param iProduct
	*        product context where to seek instance.
	* @return
	*        the instance of this in the given context.
	*/	
   virtual CATIProduct_var                 FindInstance (const CATIProduct_var& iProduct ) = 0;

   /**	
	* Determine whether a product is a reference or not.
	* @return 
	*     S_OK if this is a reference
	*    <br> E_FAIL if not.
    */	
   virtual HRESULT IsReference() = 0;

   
   //-----------------------------------------------------------------
   // Representation Management.
   //-----------------------------------------------------------------

   /**
	* Adds a representation to the product with a specific behavior.
    * <br><b>Role:</b>A representation is the object that gives a geometric shape and allows
    * the visualization of the product. It can be a CATIA V4 model, a VRML or CGR file , or 
	* the part feature of a part document ( in this case we are just allowed to browse it, not
	* to add ).
    * @param iObj
	*    Geometric shape referenced by the representation
	* @param iShapeName
    *    The name that is given to the representation
	*    <br>This name is a user free choice
    * @param Id
    *   The behavior of the added representation.
	*   <br><b>Legal values</b>:
	*   <br> CATPrd3D if the representation is a 3D one,
    *   <br> CATPrd2D if the representation is a 2D one,
    *   <br>or CATPrdText if the representation is a text one.
	* @param iInCtxt
    *   do not use 
    */	
   virtual int /*HRESULT*/ AddShapeRepresentation(CATILinkableObject_var & iObj,
	  const CATUnicodeString& iShapeName = NULL_string, 
	  const CATRepMode & Id = CATPrd3D,
	  const CATBoolean iInCtxt = TRUE)=0;

   /**
	* Adds a representation to the product with a specific behavior.
    * <br><b>Role:</b> the representation is defined here by a document.
    * @param iType
	*      type of file where the representation can be found. 
	*   <br><b>Legal values</b>:
	*       model, VRML, cgr, but not CATPart.
    * @param iPath
	*   The path name where the representation can be found
	* @param iAltShapeName
    *   The name that is given to the representation
    *   This name is a user free choice
    * @param Id
    *   The behavior of the added representation.
	*   <br><b>Legal values</b>:
	*   <br>CATPrd3D if the representation is a 3D one,
    *   <br>CATPrd2D if the representation is a 2D one,
    *   <br>or CATPrdText if the representation is a text one.
	* @param iInCtxt
    *    do not use 
    */	
    virtual int /*HRESULT*/ AddShapeRepresentation(const CATUnicodeString& iType,
			     const CATUnicodeString& iPath,
			     const CATUnicodeString& iAltShapeName = NULL_string,
				 const  CATRepMode & Id = CATPrd3D,
				 const CATBoolean iInCtxt = TRUE)=0;

   /**
	* @nodoc.
	*/	
   virtual HRESULT SetDefaultRep(const CATUnicodeString & iShapeName,
				   const CATRepMode & Id = CATPrd3D,
				   const CATBoolean InCtxt = TRUE)=0 ;

   /**
	* @nodoc.
	*/	
  virtual HRESULT GetDefaultRepName(CATUnicodeString & iShapeName,
									const CATRepMode & Id = CATPrd3D,
									const CATBoolean InCtxt = TRUE)=0 ;


   /**
    * Returns whether the product has a representation of the given name with a given behavior.
 	* @param iShapeName
    *   The name of the representation of the product we search for.
	* @param Id
    *   The behavior of the representation.
	*   <br><b>Legal values</b>:
	*   <br>CATPrd3D if the representation is a 3D one,
    *   <br>CATPrd2D if the representation is a 2D one,
    *   <br>or CATPrdText if the representation is a text one.
	* @param InCtxt
    *    do not use 
    * @return
	*   an HRESULT
	*   <br><b>Legal values</b>:S_OK if the product has such a representation. 
    */
   virtual HRESULT IsAssociatedToShape(const CATUnicodeString & iShapeName,
				   const CATRepMode & Id = CATPrd3D,
				   const CATBoolean InCtxt = TRUE)=0 ;

    /**
     * Removes a specific representation from the product.
	 * @param iShapeName
     *   The name of the representation to remove.
	 * @param Id
     *   The behavior of the representation.
     *   <br><b>Legal values</b>:
	 *    <br>CATPrd3D if the representation is a 3D one,
     *   <br>CATPrd2D if the representation is a 2D one,
     *   <br>or CATPrdText if the representation is a text one.
	 * @param InCtxt
     *    do not use 
     */
   virtual HRESULT RemoveShapeRep(const CATUnicodeString & iShapeName,
	  const CATRepMode & Id = CATPrd3D,
	  const CATBoolean InCtxt = TRUE)=0;

     /**
     * Retrieves the product's representation by its name.
     * @param oLinkShape
     *   geometry associated to the given representation.
	 * @param iShapeName
     *   The name of the representation of the product.
	 * @param Id
     *   The behavior of the representation.
	 *   <br><b>Legal values</b>:
	 *   <br> CATPrd3D if the representation is a 3D one,
     *   <br> CATPrd2D if the representation is a 2D one,
     *   <br> or CATPrdText if the representation is a text one.
	 * @param InCtxt
     *    do not use 
	 * @return
	 *   an HRESULT
     *   <br><b>Legal values</b>: S_OK if the shape is found.
     */
   virtual HRESULT GetShapeRep(CATILinkableObject_var & oLinkShape,
	  const CATUnicodeString & iShapeName="Default",
	  const CATRepMode & Id = CATPrd3D,
	  const CATBoolean InCtxt = TRUE,
	  const CATBoolean ILoadIfNecessary = FALSE) =0;
  
    /**
     * Lists the product's  representations.
     * @param oList
     *    list of names of the representations associated to the product.
	 * @param Id
     *   The behavior of the representation.
	 *   <br><b>Legal values</b>:
	 *   <br> CATPrd3D if the representation is a 3D one,
     *   <br> CATPrd2D if the representation is a 2D one,
     *   <br> or CATPrdText if the representation is a text one.
	 * @param InCtxt
     *    do not use 
	 * @return
	 *   an HRESULT
     *   <br><b>Legal values</b>: S_OK if there is representation.
     */
   virtual HRESULT ListShapeRep(CATListValCATUnicodeString* & oList, 
	   const CATRepMode & Id = CATPrd3D,
	  const CATBoolean InCtxt = TRUE)=0 ;


  /**
    * @nodoc
    */
  virtual HRESULT GetRepresentation(CATUnicodeString & iShapeName,
									CATIPrdRepresentation_var& oRep,
									const CATRepMode & Id = CATPrd3D,
									const CATBoolean InCtxt = TRUE)=0;
	


    //-----------------------------------------------------------------
    // ShapeRepresentation from a Discipline (Deprecated)
    //-----------------------------------------------------------------

    /**
     * @nodoc
     */
  virtual int IsAssociatedToShape(int LookForAlternate=-1) = 0;

	/**
	 * @nodoc
     */
  virtual void RemoveShapeRep(int index= -1) = 0;
	
    /**
     * @nodoc
     */
  virtual CATILinkableObject_var GetShapeRep(int index = 0) = 0;
	
    /**
     * @nodoc
     */
  virtual CATListValCATUnicodeString*	ListAlternateShapeRep() = 0;


   //-----------------------------------------------------------------
   // Disciplines (access CATIPrdDiscipline) ( Deprecated )
   //-----------------------------------------------------------------
    /**
     * @nodoc
     */
  virtual CATIPrdDiscipline_var GetDiscipline(  const CATUnicodeString& iDisciplineName
					       , CATBoolean                 iCreateIfNecessary = TRUE)=0;

    /**
     * @nodoc
     */
  virtual HRESULT               AddDiscipline(   const  CATUnicodeString& iDisciplineName
						, CATISpecObject_var& iRefDiscipline 
				                , CATIPrdDiscipline_var &oDiscipline) = 0;
    /**
     * @nodoc
     */
  virtual CATListValCATBaseUnknown_var* ListDisciplines() = 0;

  
   //-----------------------------------------------------------------
   // Connectors management                            
   //-----------------------------------------------------------------
    /**
	* Adds connector by agregating it to the product.
    * @param iObj 
    *      object refered by the connector.
	* @param iConnectorDefinition
    *      optionnal argument.
	*      <br> reference of the created connector.
    * @return
	*      the connector.
   	*/
   virtual CATIConnector_var AddConnector(CATILinkableObject_var & iObj,const CATIConnector_var & iConnectorDefinition = NULL_var)=0;

   /**
	* Returns connector.
	* <br><b> Note: </b> The connector returned is one of all connectors owned by the product which refers obj.
	* @param iObj 
    *      object refered by the searched connector.
    */
   virtual CATIConnector_var GetConnector(CATILinkableObject_var & iObj)=0;
  

  //-----------------------------------------------------------------
  // Instance Name Management                           
  //-----------------------------------------------------------------
    /**
	* Returns the name of a product instance.
	* <br><b>Note:</b> InstanceName is valid for instance products only.
	* @param oName
    *      name of the instance.
    */
   virtual HRESULT GetPrdInstanceName( CATUnicodeString & oName ) = 0;

   /**
	* Sets a name on a product instance.
	* <br><b>Note:</b> InstanceName is valid for instance products only.
	* @param iName
    *      name of the instance.
	* @return 
	*      E_FAIL if the father of this ever has an instance with iName name.
    */
   virtual HRESULT SetPrdInstanceName( const CATUnicodeString iName ) = 0;
  
   //-----------------------------------------------------------------
   // Identification and attributes management                            
   //-----------------------------------------------------------------
   /**
	* Returns the name of a product reference.
	* <br><b>Note:</b> PartNumber is valid for reference products only.
	* @return 
    *      name of the reference.
    */
  virtual CATUnicodeString     GetPartNumber() const = 0;

   /**
	* Sets the name on a product reference.
	* <br><b>Note:</b> PartNumber is valid for reference products only.
	* @param iPartNumber
    *      name of the reference.
    */
  virtual void                 SetPartNumber( const CATUnicodeString & iPartNumber ) = 0;
 
   //-----------------------------------------------------------------
   // Journaling
   //-----------------------------------------------------------------
  /**
    * @nodoc
    */
  virtual CATNamingReference* GetNamingReference() const = 0; 

   //-----------------------------------------------------------------
   // Filtering
   //-----------------------------------------------------------------
  /**
    * @nodoc
    */
  virtual void    SetScanId(const FilterMode Mode, const CLSID &NewId) = 0; 
  /**
    * @nodoc
    */
  virtual CLSID GetScanId(const FilterMode Mode) const = 0; 

  // -----------------------------------------------------------------
  // Management of context
  // -----------------------------------------------------------------
  // A context is one instance from "this" reference
  // To each context, one can associate some objects
  // The only supported objects at this time are connectors
  //------------------------------------------------------------------
  /**
    * @nodoc
    */
  virtual int  GetContextCount() = 0;

  /**
    * @nodoc
    */
  virtual HRESULT GetContext( int ContextIndex
							, CATIProduct*& oCtx) = 0;

  /**
    * @nodoc
    */
  virtual HRESULT AddContext( CATIProduct* iCtx , int& CtxIndex)  = 0;
  /**
    * @nodoc
    */
  virtual HRESULT RemoveContext( int ContextIndex ) = 0;

  /**
    * @nodoc
    */
  virtual HRESULT AddObjectToContext ( int             ContextIndex
	                                 , CATBaseUnknown* iObject ) = 0;
  /**
    * @nodoc
    */
  virtual HRESULT RemoveObjectFromContext ( int             ContextIndex
	                                      , CATBaseUnknown* iObject ) = 0;
  /**
    * @nodoc
    */
  virtual HRESULT GetObjectsFromContext( int             ContextIndex
	                                   , CATListValCATBaseUnknown_var*& oList ) = 0;   

  
};


#endif 



















