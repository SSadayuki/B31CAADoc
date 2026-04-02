#ifndef CATIStmMapping_H
#define CATIStmMapping_H

// COPYRIGHT Dassault Systemes 2006

/**
* @CAA2Level L0
* @CAA2Usage U0
*/

#include "ExportedByCATSmInterfaces.h" // Needed to export
#include "CATBaseUnknown.h" // Needed to inheritance
#include "CATStmNamespace.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATSmInterfaces IID IID_CATIStmMapping;
#else
extern "C" const IID IID_CATIStmMapping ;
#endif

class CATISpecObject;
class CATListPtrCATISpecObject;

/**
 *  Interface to manage the object mapping.
 */
class ExportedByCATSmInterfaces CATIStmMapping: public CATBaseUnknown
{
  CATDeclareInterface;

  public:
    /**
     *  Gives the definition view of <tt>this</tt> object.
     *  @param  oView
     *      Legal values : <tt>CATStm::Fold</tt> or <tt>CATStm::Unfold</tt>.
     *  @return <tt>S_OK</tt>
     *      if the definition view was suceesfully valuated.
     */
    virtual HRESULT GetDefinitionView( CATStm::DesignView & oView ) = 0;

    /**
     *  Appends an element to transform.
     *  @param  ipToAppend
     *      A reference on the element to transform.
     *  @return <tt>S_OK</tt>  if append succeeded, <tt>E_FAIL</tt> otherwise.
     */
    virtual HRESULT Append( const CATISpecObject * ipToAppend ) = 0;

    /**
     *  Gives all elements to transform.
     *  @param  olElements
     *      A reference on list of element to transform.
     *  @return <tt>S_OK</tt>
     *      if the list contains at least one element.
     *  @return <tt>S_FALSE</tt>
     *      if the list is empty.
     *  @return <tt>E_FAIL</tt>
     *      if an unexpected error occured.
     */
    virtual HRESULT GetElements( CATListPtrCATISpecObject & olElements ) const = 0;

    /**
     *  Modifies the transformation context.
     *  @param  ispContext
     *      A reference on smart pointer.
     *  @return <tt>S_OK</tt> if the transformation context is correctly modify,
     *          <tt>E_FAIL</tt> otherwise.
     */
    virtual HRESULT SetContext( const CATISpecObject * ipContext ) = 0;

	/**
     *  Gives the transformation context.
     *  @param  ospContext
     *      A reference on smart pointer.
     *  @return <tt>S_OK</tt> if a transformation context exist, 
     *          <tt>E_FAIL</tt> otherwise.
     */
    virtual HRESULT GetContext( CATISpecObject *  & opContext ) = 0;

    /**
     *  Appends a new support.
     *  @param  ipToAppend
     *      A reference on the support element to append.
     *  @return <tt>S_OK</tt>  if append succeeded, <tt>E_FAIL</tt> otherwise.
     */
    virtual HRESULT AppendSupport( const CATISpecObject * ipToAppend ) = 0;
    
    /**
     *  Gives all support elements.
     *  @param  olSupports
     *      A reference on list of support element.
     *  @return <tt>S_OK</tt>
     *      if the list contains at least one element.
     *  @return <tt>S_FALSE</tt>
     *      if the list is empty.
     *  @return <tt>E_FAIL</tt>
     *      if an unexpected error occured.
     */
    virtual HRESULT GetSupports( CATListPtrCATISpecObject & olSupports ) const = 0;
};

CATDeclareHandler( CATIStmMapping, CATBaseUnknown );

#endif // #define CATIStmMapping_H
